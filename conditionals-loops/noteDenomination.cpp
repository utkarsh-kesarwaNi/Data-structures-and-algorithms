#include <iostream>
using namespace std;

void getBreakDown(int totalAmount, int noteOneValue, int noteTwoValue, int noteThreeValue)
{
    int numberOfFirstNotes = totalAmount / noteOneValue;
    totalAmount %= noteOneValue;

    int numberOfSecondNotes = totalAmount / noteTwoValue;
    totalAmount %= noteTwoValue;

    int numberOfThirdNotes = totalAmount / noteThreeValue;
    totalAmount %= noteThreeValue;

    cout << "Number of first notes : " << numberOfFirstNotes
         << ", number of second notes : " << numberOfSecondNotes
         << ", number of third notes : " << numberOfThirdNotes << endl;
}

int main()
{
    int totalAmount, noteOneValue, noteTwoValue, noteThreeValue;

    cout << "Enter the total amount : ";
    cin >> totalAmount;
    cout << "Enter value of first note : ";
    cin >> noteOneValue;
    cout << "Enter value of second note : ";
    cin >> noteTwoValue;
    cout << "Enter value of third note : ";
    cin >> noteThreeValue;

    getBreakDown(totalAmount, noteOneValue, noteTwoValue, noteThreeValue);
    return 0;
}