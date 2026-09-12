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

/**
 * Tail recursion is a specialized form of recursion where the recursive function call is the absolute final instruction executed in the function.
 */

int factorialUsingTailRecursion(int n, int result)
{
    if (n <= 1)
    {
        return result;
    }
    /**
     * RECURSIVE STEP (Tail Position)
     * n = 3, result = 1
     *
     * factorialUsingTailRecursion(3, 1) is called.
     * It calculates the new state for the next call: next_n = 2, next_result = 3 * 1 = 3.
     *
     * Notice: There is NO WORK left to do after the recursive call returns.
     * It is just returning the result of the next function call directly.
     *
     * Under the hood (Tail Call Optimization / Stack Frame Reuse):
     * - factorialUsingTailRecursion(3, 1) does NOT pause and push a new frame onto the stack.
     * - Instead, the compiler overwrites the current variables and JUMPS back to the start as factorialUsingTailRecursion(2, 3).
     * - factorialUsingTailRecursion(2, 3) overwrites its variables and JUMPS back as factorialUsingTailRecursion(1, 6).
     * - factorialUsingTailRecursion(1, 6) hits the base case and returns 6.
     *
     * Stack Unwinding (Optimized):
     * - Because of Tail Call Optimization, there is NO cascading stack to unwind!
     * - The memory footprint remained at exactly 1 stack frame the entire time.
     * - The value 6 is returned directly to the original caller (main).
     */
    return factorialUsingTailRecursion(n - 1, result * n);
}

int main()
{
    int n;
    int result = 1;
    cin >> n;
    cout << factorial(n) << '\n';
    cout << factorialUsingTailRecursion(n, result) << '\n';
    return 0;
}