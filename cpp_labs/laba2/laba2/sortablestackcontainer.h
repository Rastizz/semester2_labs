#ifndef SORTABLESTACKCONTAINER_H
#define SORTABLESTACKCONTAINER_H

#include "stackContainer.h"
#include <QVector>
#include <algorithm>

class SortableStackContainer : public StackContainer {
public:
    using StackContainer::StackContainer;

    void sortIntsAscending();
    void sortCharsAlphabetically();
};

#endif // SORTABLESTACKCONTAINER_H
