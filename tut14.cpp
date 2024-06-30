#include<iostream>
using namespace std;
  struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
};

 union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds;//4
};




int main (){
    enum Meal {breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<(m1==2);
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;
    // union money m1;
    // m1.car ='c';
    // cout<<m1.car;
    // struct employee hammad;
    // struct employee usama;
    // struct employee  ahmad;
    // hammad.eId =1;
    // hammad.favChar='c';
    // hammad.salary = 1300000.;
    // cout<<"The value is "<<hammad.eId<<endl;

    // cout<<"The value is "<<hammad.favChar<<endl;
    // cout<<"The value is "<<hammad.salary<<endl;










return 0;
}