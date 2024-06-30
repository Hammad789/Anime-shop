#include<iostream>
using namespace std;

int main() {
    int b = 0;
    char ch;
    do {
        cout << b << "\n";
        b++;
        cout << "Do you want to run another program? (y/n): ";
        cin >> ch;
    } while (ch == 'y'!=);
    cout<<"thanks yrr";

    return 0;
}
