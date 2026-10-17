#ifndef TEMPLATE_STACKCONTAINER_H
#define TEMPLATE_STACKCONTAINER_H

#include <QString>
#include <stdexcept>

template<typename T>
class StackException : public std::runtime_error {
public:
    StackException(const std::string& msg) : std::runtime_error(msg) {}
};

template<typename T>
class StackContainer {
public:
    explicit StackContainer(int maxSize = 100);
    ~StackContainer();

    void push(const T& value);
    T pop();
    bool isEmpty() const;
    virtual QString toString() const = 0;

protected:
    struct Node {
        T value;
        Node* next;
        Node(const T& v, Node* n = nullptr) : value(v), next(n) {}
    };

    Node* head;
    int maxSize;
    int currentSize;
};


template<>
class StackContainer<int> {
public:
    StackContainer(int maxSize = 100);
    ~StackContainer();

    void push(int value);
    int pop();
    bool isEmpty() const;
    QString toString() const;
};


template<>
class StackContainer<QChar> {
public:
    StackContainer(int maxSize = 100);
    ~StackContainer();

    void push(QChar value);
    QChar pop();
    bool isEmpty() const;
    QString toString() const;
};


template<typename T>
class SortableStackContainer : public StackContainer<T> {
public:
    using StackContainer<T>::StackContainer;

    virtual void sort() = 0;
};


template<>
class SortableStackContainer<int> : public StackContainer<int> {
public:
    using StackContainer<int>::StackContainer;
    void sort();
};

template<>
class SortableStackContainer<QChar> : public StackContainer<QChar> {
public:
    using StackContainer<QChar>::StackContainer;
    void sort();
};

#endif // TEMPLATE_STACKCONTAINER_H
