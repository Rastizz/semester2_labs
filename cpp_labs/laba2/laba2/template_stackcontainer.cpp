#include "template_stackcontainer.h"
#include <algorithm>

// Общие реализации для int
StackContainer<int>::StackContainer(int maxSize) : head(nullptr), maxSize(maxSize), currentSize(0) {}
StackContainer<int>::~StackContainer() {
    while (head) { auto tmp = head; head = head->next; delete tmp; }
}

void StackContainer<int>::push(int value) {
    if (currentSize >= maxSize) throw StackException<int>("Overflow");
    head = new Node(value, head);
    ++currentSize;
}

int StackContainer<int>::pop() {
    if (!head) throw StackException<int>("Empty");
    Node* tmp = head;
    int result = head->value;
    head = head->next;
    delete tmp;
    --currentSize;
    return result;
}

bool StackContainer<int>::isEmpty() const { return !head; }

QString StackContainer<int>::toString() const {
    QString res;
    for (Node* cur = head; cur; cur = cur->next) {
        res += QString::number(cur->value) + " ";
    }
    return res;
}

// Реализации для QChar
StackContainer<QChar>::StackContainer(int maxSize) : head(nullptr), maxSize(maxSize), currentSize(0) {}
StackContainer<QChar>::~StackContainer() {
    while (head) { auto tmp = head; head = head->next; delete tmp; }
}

void StackContainer<QChar>::push(QChar value) {
    if (currentSize >= maxSize) throw StackException<QChar>("Overflow");
    head = new Node(value, head);
    ++currentSize;
}

QChar StackContainer<QChar>::pop() {
    if (!head) throw StackException<QChar>("Empty");
    Node* tmp = head;
    QChar result = head->value;
    head = head->next;
    delete tmp;
    --currentSize;
    return result;
}

bool StackContainer<QChar>::isEmpty() const { return !head; }

QString StackContainer<QChar>::toString() const {
    QString res;
    for (Node* cur = head; cur; cur = cur->next) {
        res += cur->value + " ";
    }
    return res;
}

// Сортировки
void SortableStackContainer<int>::sort() {
    QVector<int> values;
    for (Node* cur = head; cur; cur = cur->next) {
        values.append(cur->value);
    }
    std::sort(values.begin(), values.end());
    int i = 0;
    for (Node* cur = head; cur; cur = cur->next) {
        cur->value = values[i++];
    }
}

void SortableStackContainer<QChar>::sort() {
    QVector<QChar> values;
    for (Node* cur = head; cur; cur = cur->next) {
        values.append(cur->value);
    }
    std::sort(values.begin(), values.end(), [](QChar a, QChar b){
        return a.toLower() < b.toLower();
    });
    int i = 0;
    for (Node* cur = head; cur; cur = cur->next) {
        cur->value = values[i++];
    }
}
