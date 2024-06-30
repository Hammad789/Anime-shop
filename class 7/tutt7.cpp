#include<iostream>
using namespace std;
int c =45;
int main()
{   //Build in data types;
    
    //int a,b,c;
    
    //cout<<"Enter the value of a "<<endl;
    //cin>>a;
     
    // cout<<"Enter the value of b"<<endl;
     //>>b;
     //=a+b;
//**********************************float double and long double literals ********
     //<<"The sum is "<<c;
    //  float d =34.4f;

      long double c = 34.4l;
    //  cout<<"The value of d is :"<<endl<<d<<"The value of c is :"<<c;
    cout<<"The siz eof 34.4f"<<sizeof(34.4f)<<endl;
    //  cout<<"The size of 34.4F"<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l"<<sizeof(34.4l)<<endl;
    //  cout<<"The size of 34.4L"<<sizeof(34.4L)<<endl;
   // *************************REFERENCE VARIABLES*****************************************



//Hammad ---> Astro ---> fox ----> Astrophile;
// float x =455;
// float & y = x;
// cout<<x<<endl;
// cout<<y<<endl;
//***********************TYPECASTING///////////////
int a = 45;
float b = 45.46;
cout<<"The value of a is "<<(float)a<<endl;
cout<<"The value of b is "<<(int)b<<endl;
cout<<"The value of b is "<<int(b)<<endl;
int c = int (b);
cout<<"The expresion is "<<a+b<<endl;
cout<<"The expression is "<< a + int(b)<<endl;
cout<<"The expression is "<<(int)b<<endl;
    return 0;
}