#include "tradedatabase.h"
#include <QFile>
#include <QTextStream>

TradeDatabase::TradeDatabase() {}

void TradeDatabase::loadFromFile(){
    QFile file(this->filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;
    QTextStream in (&file);
    deals.clear();
    while (!in.atEnd()){
        QString line = in.readLine();
        if(line.trimmed().isEmpty()){
            continue;
        }
        QStringList tokens = line.split(';');
        if (tokens.size()!=5){
            continue;
        }
        Deal deal;
        deal.productName = tokens[0].trimmed();
        deal.volume = tokens[1].toInt();
        deal.year = tokens[2].toInt();
        deal.country = tokens[3].trimmed();
        deal.direction = tokens[4].trimmed();
        deals.push_back(deal);
    }
    file.close();
}

void TradeDatabase::saveToFile(const Deal& deal){
    QFile file(filename);
    if(filename.isEmpty()){
        return;
    }
    if (!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
        return;
    QTextStream out(&file);
    out << deal.toString();
    file.close();
}

void TradeDatabase::addDeal(const Deal& deal){
    deals.push_back(deal);
}

void TradeDatabase::removeDeal(const Deal& deal){
    for(int i = deals.size() - 1; i >= 0; i--){
        if(deals[i] == deal){
            deals.removeAt(i);
        }
    }
}

void TradeDatabase::setFileName(const QString& fileName){
    this->filename = fileName;
}

void TradeDatabase::reuploadFile(){
    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Truncate |QIODevice::Text)) return;
    QTextStream out(&file);
    for(int i = 0;i<deals.size();i++){
        out << deals[i].toString();
    }
    file.close();
}

int TradeDatabase::getSize(){
    return deals.size();
}

const Deal& TradeDatabase::getDeals(int index) const
{
    return deals[index];
}

QList<Deal> TradeDatabase::getImportsByCountry(const QString& country, int& totalVolume){
    totalVolume = 0;
    QList<Deal> result;
    for(const auto& deal : deals) {
        if(deal.country == country && deal.direction == "import") {
            result.append(deal);
            totalVolume += deal.volume;
        }
    }
    return result;
}



QList<Deal> TradeDatabase::getImportsByProduct(const QString& product){
    QList<Deal> result;
    for(const auto& deal : deals) {
        if(deal.productName == product && deal.direction == "import") {
            result.append(deal);
        }
    }
    return result;
}

QString TradeDatabase::getTopExportCountry()
{
    if (deals.isEmpty()) {
        return QString();
    }
    QMap<QString, int> exportVolumes;
    for (const Deal& deal : deals) {
        if (deal.direction == "export") {
            exportVolumes[deal.country] += deal.volume;
        }
    }
    if (exportVolumes.isEmpty()) {
        return QString();
    }
    QString topCountry;
    int maxVolume = 0;

    for (auto it = exportVolumes.constBegin(); it != exportVolumes.constEnd(); ++it) {
        if (it.value() > maxVolume) {
            maxVolume = it.value();
            topCountry = it.key();
        }
    }
    return topCountry;
}
QMap<int, double> TradeDatabase::getExportVolumeByYear(const QString& product)
{
    QMap<int, double> result;
    for(const auto& deal : deals) {
        if(deal.productName == product && deal.direction == "export") {
            result[deal.year] += deal.volume;
        }
    }
    return result;
}
