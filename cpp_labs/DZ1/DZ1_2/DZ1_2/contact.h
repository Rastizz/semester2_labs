#ifndef CONTACT_H
#define CONTACT_H
#include <QString>
class Contact
{
    QString name;
    QString surname;
    QString phone;
    QString address;
    public:
    Contact* next;
    Contact(){}
    Contact(QString name, QString surname, QString phone, QString address): name(name), surname(surname), phone(phone), address(address), next(nullptr){}
    QString getName() const{
        return name;
    }
    QString getSurname() const{
        return surname;
    }
    QString getPhone() const{
        return phone;
    }
    QString getAddress() const{
        return address;
    }
};
#endif // CONTACT_H
