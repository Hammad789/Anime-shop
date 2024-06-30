#include<iostream>
#include<conio.h>
using namespace std;

int main (){
    int chcount = 0 ;
    int wdcount = 1 ;
    char ch = 'a'; // Initialize with any character other than '\r'
    cout << "Enter a phrase/statement: ";
    while (ch != '\r') {
        ch = getche(); // Use getch() instead of getche()
        if (ch == ' ')
            wdcount++;
        else if(ch = '\r') // Exclude counting '\r' as a character
            chcount++;
    }

    cout << "\nTotal number of words in this phrase = " << wdcount << endl;
    cout << "Total letters in this phrase are: " << chcount << endl;

    return 0;
}
