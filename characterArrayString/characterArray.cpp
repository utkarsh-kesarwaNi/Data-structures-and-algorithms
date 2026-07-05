#include <iostream>
#include <limits>
#include <cstring>
using namespace std;

void readCin(char buffer[], int maxSize)
{
    cout << "cin input : ";

    /*
    Reads characters until a whitespace (space, tab, newline) is found.
    */

    cin >> buffer; // Input : My name is Utkarsh
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void readCinGetLine(char buffer[], int maxSize)
{
    cout << "cin.getline input : "; // Input : My name is Utkarsh

    /*
    Reads characters until a newline '\n' is found or maxSize - 1 is reached.
    It automatically discards the '\n' from the buffer. Newline or '\n' is the default delimiter
    */

    cin.getline(buffer, maxSize);
}

int getLength(char name[])
{
    int count = 0;
    while (name[count] != '\0')
        count++;
    return count;
}

void reverseString(char name[])
{
    int start = 0;
    int end = strlen(name) - 1;
    while (start < end)
    {
        swap(name[start++], name[end--]);
    }
}

bool isPalindrome(char name[])
{
    int start = 0;
    int end = strlen(name) - 1;
    while (start < end)
    {
        if (name[start] != name[end])
            return false;
        start++, end--;
    }
    return true;
}

char toUpperCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch - 'a' + 'A';
    }
    return ch;
}

char toLoweCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch - 'A' + 'a';
    }
    return ch;
}

int main()
{
    const int MAX_SIZE = 50;

    char nameOne[MAX_SIZE];
    readCin(nameOne, MAX_SIZE);
    cout << "Result : " << nameOne << "\n"; // Output : My

    char nameTwo[MAX_SIZE];
    readCinGetLine(nameTwo, MAX_SIZE);
    cout << "Result : " << nameTwo << "\n"; // Output : My name is Utkarsh

    cout << "Length of nameTwo : " << getLength(nameTwo) << '\n'; // Output : 18
    cout << "Length of nameTwo : " << strlen(nameTwo) << '\n';    // Output : 18

    reverseString(nameTwo);
    cout << "nameTwo after reversal : " << nameTwo << '\n'; // Output : hsraktU si eman yM

    isPalindrome(nameTwo) ? cout << nameTwo << " is a palindrome" << '\n' : cout << nameTwo << " is not a palindrome" << '\n';

    cout << "Upper case : " << toUpperCase('u') << '\n';
    cout << "Lower case : " << toLoweCase('U') << '\n';
    return 0;
}