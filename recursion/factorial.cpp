#include <iostream>
using namespace std;

/*
Recursion is a programming technique where a function calls itself to solve smaller instances of same problem until it reaches a trivial, indivisible state known as the base case.
*/

int factorial(int n)
{
    /**
     * BASE CASE must be present in every recursive function.
     * In this case we already know that 1! = 1 and 0! = 1.
     * Which means BASE CASE we do not have to calculate or it is something which is already known.
     */
    if (n <= 1)
    {
        return 1;
    }

    /**
     * RECURSIVE STEP
     * n = 3,
     * factorial(3) = 3*2*1
     * factorial(2) = 2*1
     * factorial(1) = 1;
     *
     * OR we can say
     * factorial(3) is called. It calculates 3 * factorial(2).
     * It cannot finish, so its state is pushed onto the Call Stack and it pauses.
     * factorial(2) is called. It calculates 2 * factorial(1).
     * It also pauses and goes onto the stack.
     * factorial(1) is called. It hits the base case and returns 1 immediately.
     *
     * Stack Unwinding (The resolutions cascade back up):
     * - factorial(2) receives the 1, calculates 2 * 1, and returns 2. It is popped off the stack.
     * - factorial(3) receives the 2, calculates 3 * 2, and returns 6. It is popped off the stack.
     */

    return n * factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}