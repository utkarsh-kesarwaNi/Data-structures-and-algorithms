#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void reverseStack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }

    int topElement = st.top();
    st.pop();
    reverseStack(st);

    stack<int> temp;
    while (!st.empty())
    {
        temp.push(st.top());
        st.pop();
    }
    st.push(topElement);
    while (!temp.empty())
    {
        st.push(temp.top());
        temp.pop();
    }
}

void printStack(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    vector<int> input = {11, 62, 13, 44, 5};
    stack<int> st;

    for (int num : input)
    {
        st.push(num);
    }

    cout << "Original Stack (Top to Bottom): \n";
    printStack(st);

    reverseStack(st);

    cout << "Reversed Stack (Top to Bottom): \n";
    printStack(st);

    return 0;
}