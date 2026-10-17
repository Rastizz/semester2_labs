#ifndef DEAL_H
#define DEAL_H

#include <QString>
#include <QTextStream>

class Deal
{
public:
    QString productName;
    int volume;
    int year;
    QString country;
    QString direction;

    Deal();
    Deal(const QString& productName, int volume, int year,
         const QString& country, const QString& direction);
    QString toString()const;
    bool operator==(const Deal& other) const;
};

#endif // DEAL_H
