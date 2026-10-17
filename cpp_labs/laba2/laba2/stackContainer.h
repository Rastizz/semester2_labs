#ifndef STACKCONTAINER_H
#define STACKCONTAINER_H

#include <QChar>
#include <QString>
#include <stdexcept>

// Исключения
class StackEmptyException : public std::runtime_error {
public:
    StackEmptyException() : std::runtime_error("Stack is empty") {}
};

class StackOverflowException : public std::runtime_error {
public:
    StackOverflowException() : std::runtime_error("Stack overflow") {}
};


class Num {
protected:
    int n;
public:
    Num(int value) : n(value) {}
    Num() : n(0) {}
    void setNum(int value) { n = value; }
    int getNum() const { return n; }
};

class Bukv {
protected:
    QChar ch;
public:
    Bukv(QChar c) : ch(c) {}
    Bukv() : ch('\0') {}
    void setChar(QChar c) { ch = c; }
    QChar getChar() const { return ch; }
};

enum class ElementKind {
    Integer,
    Character
};

class StackElement : public Num, public Bukv {
public:
    ElementKind kind;
    StackElement* next;


    StackElement(int value, StackElement* next = nullptr)
        : Num(value), Bukv(), kind(ElementKind::Integer), next(next) {}


    StackElement(QChar c, StackElement* next = nullptr)
        : Num(), Bukv(c), kind(ElementKind::Character), next(next) {}
};


class StackContainer {
public:
    explicit StackContainer(int maxSize = 100);
    virtual ~StackContainer();

    void pushInt(int value);
    void pushChar(QChar value);
    void pop();
    bool isEmpty() const;
    QString toString() const;

protected:
    StackElement* head;
    int maxSize;
    int currentSize;
};

#endif // STACKCONTAINER_H
