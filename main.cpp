// Title: Rule of Three
// Purpose: Practice dynamically allocate memory, set a value , and delete allocated memory
// Author: Fransiskus Agapa
// Have fun - Enjoy the process - Practices make improvement

#include <iostream>
#include "MyClass.h"
using std::cout;
using std::endl;

int TestCpyCons(MyClass locObj)
{
    int sqrt = 0;
    sqrt = locObj.GetVal() * 2;
    return sqrt;
}

int main()
{
    cout << endl;
    int sqrt = 0;
    MyClass fClass;                                          // default constructor
    MyClass sClass;
    MyClass tClass;
    cout << endl << "=Initial value of class objects=" << endl;
    cout << "1st object - its value: " << fClass.GetVal() << endl;
    cout << "2nd object - its value: " << sClass.GetVal() << endl;
    cout << "3rd object - its value: " << tClass.GetVal() << endl;
    cout << endl;

    //copy constructor
    fClass.SetVal(20);
    sqrt = TestCpyCons(fClass);                       // call copy constructor
    cout << "1st object - its value: " << fClass.GetVal() << endl;
    cout << "1st object - its sqrt value: " << sqrt << endl;
    cout << endl;

    // copy assignment operator=
    sClass.SetVal(30);
    tClass = sClass;                                         // call copy assignment operator
    cout << "2nd object - its value: " << sClass.GetVal() << endl;
    cout << "3rd object - its value: " << tClass.GetVal() << endl;
    cout << endl;

    sClass.SetVal(40);                                    // as indication changing this value won't affect the other object
    cout << "2nd object - its value: " << sClass.GetVal() << endl;
    cout << "3rd object - its value: " << tClass.GetVal() << endl;
    cout << endl;

    cout << "=Updated value of class objects=" << endl;
    cout << "1st object - its value: " << fClass.GetVal() << endl;
    cout << "2nd object - its value: " << sClass.GetVal() << endl;
    cout << "3rd object - its value: " << tClass.GetVal() << endl;
    cout << endl;

  return 0;
}
