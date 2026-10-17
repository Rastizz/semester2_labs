#include "deal.h"

Deal::Deal(){}

Deal::Deal(const QString& productName, int volume, int year, const QString& country, const QString& direction)
    : productName(productName), volume(volume), year(year), country(country), direction(direction){}

QString Deal::toString()const{
    QString string = productName + ';' + QString::number(volume) + ';' + QString::number(year) + ';' + country + ';' + direction + '\n';
    return string;
}

bool Deal::operator==(const Deal& other) const {
    return productName == other.productName &&
           volume == other.volume &&
           year == other.year &&
           country == other.country &&
           direction == other.direction;
}
