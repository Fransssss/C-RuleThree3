// Implementation of MyClass

#include "MyClass.h"
#include <iostream>
using std::cout;
using std::endl;

MyClass::MyClass()
{
    cout << "[Default Constructor called]" << endl;
    _value = new int;                             // dynamically allocate memory before assign a memory
    *_value = 0;
}

MyClass::MyClass(const MyClass &oriObj)
{
    cout << "[Copy Constructor called]" << endl;
    _value = new int;
    *_value = *(oriObj._value);
}

MyClass& MyClass::operator=(const MyClass &oriObj)
        {
            cout << "[Copy Assignment Operator= called]" << endl;
            if(this != &oriObj)                  // the value is not the same
            {
                delete _value;                   // delete old value
                _value = new int;                // dynamically allocate memory before assign a memory
                *_value = *(oriObj._value);
            }
            return *this;                        // return the updated value of data memeber
        }

MyClass::~MyClass()
{
    cout << "[Destructor called]" << endl;
    delete _value;
}

void MyClass::SetVal(const int &v)
{
    cout << "[Set a value]" << endl;
    *_value = v;
}

int MyClass::GetVal() const
{
    return *_value;
}