
#include<iostream>
using namespace std;
// functon prototype 
// type function-name(arguments);
int sum(int a, int b); // ---> acceptable--->  not acceptable, hammad you msut have to declare full text 
// int sum (int , int ) //-----> acceptable dy hammad bas just declare ka warta chi sum shta assure ka warta 
void g(void);

int main() {
    int num1, num2;   
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    // num1 and num2 are actual parameters 
    cout << "The sum is " << sum(num1, num2);
    g();
    return 0;
}
int sum(int a, int b) {
    // a and b will be taking values from actual parameters num1 and num 2 
    int c = a + b;
    return c;
}
void g(){
    cout<<"hello, good morning "<<endl;
}