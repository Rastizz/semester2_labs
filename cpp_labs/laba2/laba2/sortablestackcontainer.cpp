#include "sortablestackcontainer.h"

void SortableStackContainer::sortIntsAscending()
{
    QVector<int> ints;
    for (StackElement* cur = head; cur != nullptr; cur = cur->next) {
        if (cur->kind == ElementKind::Integer) {
            ints.append(cur->getNum());
        }
    }

    std::sort(ints.begin(), ints.end());

    int idx = 0;
    for (StackElement* cur = head; cur != nullptr; cur = cur->next) {
        if (cur->kind == ElementKind::Integer) {
            cur->setNum(ints[idx++]);
        }
    }
}

void SortableStackContainer::sortCharsAlphabetically()
{
    QVector<QChar> chars;
    for (StackElement* cur = head; cur != nullptr; cur = cur->next) {
        if (cur->kind == ElementKind::Character) {
            chars.append(cur->getChar());
        }
    }

    std::sort(chars.begin(), chars.end(), [](QChar a, QChar b){
        return a.toLower() < b.toLower();
    });

    int idx = 0;
    for (StackElement* cur = head; cur != nullptr; cur = cur->next) {
        if (cur->kind == ElementKind::Character) {
            cur->setChar(chars[idx++]);
        }
    }
}
