#ifndef CONTACT_LIST_H
#define CONTACT_LIST_H
#include "contact.h"
class ContactList
{
    public:
    Contact *head;
    ContactList(): head(nullptr){}
    Contact* addContact(QString name, QString surname, QString phone, QString address);
    void deleteContact(Contact* contact);
    Contact* findContact(Contact* start, const QString name, const QString surname, const QString phone, const QString address) const;
    ~ContactList();
};
#endif // CONTACT_LIST_H
