#include <iostream>
using namespace std;

int main()
{
    /*
    The address-of operator (&) returns the memory address of its operand
    */
    int x{5};
    cout << x << '\n';  // print the value of variable x
    cout << &x << '\n'; // print the memory address of variable x

    /*
    A pointer is an object that holds a memory address (typically of another variable) as its value.

    A pointer that has not been initialized is sometimes called a wild pointer.
    Wild pointers contain a garbage address, and dereferencing a wild pointer will result in undefined behavior.
    Because of this, you should always initialize your pointers to a known value
    */
    int* p_x; // a pointer to an int value (holds the address of an integer value)
    p_x = &x;
    cout << p_x; // prints the same hexadecimal address value what we will get with &x

    cout << *p_x; // use dereference operator to print the value at the address that p_x is holding (which is x's address)

    /*
    A dangling pointer is a pointer that is holding the address of an object that is no longer valid (e.g. because it has been destroyed).

    Dereferencing a wild or dangling (or null) pointer will result in undefined behavior and will probably crash your application.
    */

    return 0;
}