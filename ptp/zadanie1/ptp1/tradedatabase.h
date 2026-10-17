#ifndef TRADEDATABASE_H
#define TRADEDATABASE_H

#include "deal.h"
#include <QVector>
#include <QMap>
#include <QList>
#include <QString>


class TradeDatabase
{
public:
    TradeDatabase();
    void loadFromFile();
    void saveToFile(const Deal& deal);
    void addDeal(const Deal& deal);
    void removeDeal(const Deal& deal);
    void setFileName(const QString &fileName);
    void reuploadFile();

    int getSize();
    const Deal& getDeals(int index) const;

    QList<Deal> getImportsByCountry(const QString& country, int& totalVolume);
    QString getTopExportCountry();
    QList<Deal> getImportsByProduct(const QString& product);
    QMap<int, double> getExportVolumeByYear(const QString& product);

private:
    QVector<Deal> deals;
    QString filename;
};

#endif
