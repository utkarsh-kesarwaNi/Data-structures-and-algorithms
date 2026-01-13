#include<iostream>
using namespace std;

int main() {
    char ch;
    ch = cin.get();

    if(ch >= 'a' && ch <= 'z') {
        cout << "You've provided a lowercase character" << '\n';
    } else if(ch >= 'A' && ch <= 'Z') {
        cout << "You've provided an uppercase character" << '\n';
    } else if(ch > '0' && ch <= '9') {
        cout << "You've provided a numeric character" << '\n';
    } else {
        cout << "You've provided non-alphanumeric character" << '\n';
    }
    return 0;
}