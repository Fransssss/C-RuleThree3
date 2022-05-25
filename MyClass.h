// Declaration of MyClass

#ifndef C_RULETHREE3_MYCLASS_H
#define C_RULETHREE3_MYCLASS_H


class MyClass
{
private:
    int* _value;
public:
    MyClass();
    MyClass(const MyClass& oriObj);
    MyClass& operator=(const MyClass& oriObj);
    void SetVal(const int& v);
    int GetVal() const;
    ~MyClass();
};


#endif //C_RULETHREE3_MYCLASS_H
