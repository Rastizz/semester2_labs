#include "contactList.h"
Contact* ContactList::addContact(QString name, QString surname, QString phone, QString address)
{    Contact* newContact = new Contact(name, surname, phone, address);
    if (!head) {
        head = newContact;
    } else {
        Contact* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newContact;
    }
    return newContact;
}
ContactList::~ContactList()
{    Contact* temp = head;
    while (temp) {
        Contact* toDelete = temp;
        temp = temp->next;
        delete toDelete;
    }
}

void ContactList::deleteContact(Contact* contact){
    Contact* temp = head;
    Contact* prev = nullptr;
    while (temp != contact) {
        prev = temp;
        temp = temp->next;
    }
    if (prev) {
        prev->next = temp->next;
    } else {
        head = temp->next;
    }
    delete temp;
}


//поиск контакта с возможностью поиска без указания всех параметров
Contact* ContactList::findContact(Contact* start, const QString name, const QString surname, const QString phone, const QString address) const {
    Contact* temp = start;
    while (temp) {  // проверяем temp != nullptr перед обращением к полям
        if ((temp->getName() == name || name.isEmpty()) &&
            (temp->getSurname() == surname || surname.isEmpty()) &&
            (temp->getPhone() == phone || phone.isEmpty()) &&
            (temp->getAddress() == address || address.isEmpty())) {
            return temp;
        }
        temp = temp->next;
    }
    return nullptr;
}
