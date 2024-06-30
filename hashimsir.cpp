#include <iostream>
using namespace std;

int main() {
    char ch;
    int spaceCount = 0;

    cout << "Enter characters. Press Enter to stop." << endl;

    while (cin.get(ch) && ch != '\n') {
        if (ch == ' ') {
            spaceCount++; // Increment the space count if the character is a space
        }
    }

    cout << "Total number of spaces entered: " << spaceCount << endl;

    return 0;
}