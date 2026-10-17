 #include "stackContainer.h"

StackContainer::StackContainer(int maxSize)
    : head(nullptr), maxSize(maxSize), currentSize(0)
{
}

StackContainer::~StackContainer()
{
    while (head != nullptr) {
        StackElement* tmp = head;
        head = head->next;
        delete tmp;
    }
}

void StackContainer::pushInt(int value)
{
    if (currentSize >= maxSize) {
        throw StackOverflowException();
    }
    StackElement* elem = new StackElement(value, head);
    head = elem;
    ++currentSize;
}

void StackContainer::pushChar(QChar value)
{
    if (currentSize >= maxSize) {
        throw StackOverflowException();
    }
    StackElement* elem = new StackElement(value, head);
    head = elem;
    ++currentSize;
}

void StackContainer::pop()
{
    if (isEmpty()) {
        throw StackEmptyException();
    }
    StackElement* tmp = head;
    head = head->next;
    delete tmp;
    --currentSize;
}

bool StackContainer::isEmpty() const
{
    return head == nullptr;
}

QString StackContainer::toString() const
{
    QString result;
    StackElement* current = head;
    while (current != nullptr) {
        if (current->kind == ElementKind::Integer) {
            result += QString::number(current->getNum());
        } else {
            result += current->getChar();
        }
        result += " ";
        current = current->next;
    }
    return result;
}
