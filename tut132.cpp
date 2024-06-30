// // #include<iostream>
// // using namespace std;
// // int main (){
// //     // array example 
// // int marks[4] = {23, 45, 56, 89};
// // int mathmarks[4]={2278, 738, 378, 578};
// // mathmarks[0]=2278;
// // mathmarks[1]=738;
// // mathmarks[2]=378;
// // mathmarks[3]=578;
// // cout<<"these are  math marks"<<endl;
// // cout<<mathmarks[0]<<endl;
// // cout<<mathmarks[1]<<endl;
// // cout<<mathmarks[2]<<endl;
// // cout<<mathmarks[3]<<endl;


// // cout<<"these are  normal marks";
// // // you can change the value of an array 
// // // for (int i = 0; i <4; i++)
// // // {
// // //     cout<<"The value of  marks"<<i<<" is "marks[i]<<endl;}
// // int i = 0;

// // do
// // { 
// //  cout<<"The values of marks"<< i << "is" mathmarks[i]<<endl;
// //  i++;
    
// // } while (i < 4);




// // // cout<<marks[0]<<endl;
// // // cout<<marks[1]<<endl;
// // // marks[2]=455;
// // // cout<<marks[2]<<endl;
// // // cout<<marks[3]<<endl;



// // return 0;
// // }
// #include<iostream>
// using namespace std;
// int main (){
//     // array example 
// int marks[4] = {23, 45, 56, 89};
// int mathmarks[4]={2278, 738, 378, 578};
// mathmarks[0]=2278;
// mathmarks[1]=738;
// mathmarks[2]=378;
// mathmarks[3]=578;
// cout<<"these are math marks"<<endl;
// cout<<mathmarks[0]<<endl;
// cout<<mathmarks[1]<<endl;
// cout<<mathmarks[2]<<endl;
// cout<<mathmarks[3]<<endl;


// cout<<"these are normal marks"; // Fixed: Added space after "marks" for readability
// // you can change the value of an array 
// // for (int i = 0; i <4; i++)
// // {
// //     cout<<"The value of marks"<<i<<" is "marks[i]<<endl;}

// int i = 0;

// do
// { 
//  cout << "The value of marks " << i << " is " << marks[i] << endl; // Fixed: Added missing << before "marks[i]"
//  i++;
    
// } while (i < 4);

// return 0;
// }

#include<iostream>
using namespace std;

int main (){
    // array example 
    int marks[4] = {23, 45, 56, 89};
    int mathmarks[4] = {2278, 738, 378, 578};
    mathmarks[0] = 2278;
    mathmarks[1] = 738;
    mathmarks[2] = 378;
    mathmarks[3] = 578;

    cout << "These are math marks" << endl;
    cout << mathmarks[0] << endl;
    cout << mathmarks[1] << endl;
    cout << mathmarks[2] << endl;
    cout << mathmarks[3] << endl;

    cout << "These are normal marks";

    int i = 0; // Initialize the loop counter outside the loop

    while (i < 4) {
        cout << "The value of marks " << i << " is " << marks[i] << endl;
        i++; // Increment the loop counter inside the loop
    }
    // pinters and arrays 
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    // cout<<"The value of *p [0] is"<<*p<<endl;
    // cout<<"The value of *p+1 [0] is"<<*(p+1)<<endl;
    // cout<<"The value of *p+2 [0] is"<<*(p+2)<<endl;
    // cout<<"The value of *p+3 [0] is"<<*(p+3)<<endl;

    return 0;
}
