// #include<iostream>
// using namespace std;
// int main()
// {
// //sequence structure   , selection structure loop structure ,.... yhey are basic control structure
// // if ki madad sy krna hoga 
// // int i = 0;
// // if (i<3)
// // cout<<i;
// // i++; ***************************if else ledder , matlab zyada if else condition
// //3rd methoud is to SWITCH CASE ,
// // switch(expression){
// //     case 1:
// //     action 3;
// // }

// // default{

// //     action 4;
// // }


// // cout<<"This is tutorial 9";
// int age;

// cout<<"What is your age:"<<endl;
// cin>>age;
// if (age<18){
//     cout<<"You cannot come to my party am sorry"<<endl;
//     else if(age==18){
//         cout<<"You are a ki dand you wil get a kid pass to the party"<<endl;
//         else{
//             cout<<"You can come to the party"<<endl;
//         }
//     }
// }


//     return 0;
// }
#include<iostream>
using namespace std;

int main() {
    // int age;

    // cout << "What is your age:" << endl;
    // cin >> age;

    // if ((age < 18) && (age>0)) {
    //     cout << "You cannot come to my party, I'm sorry" << endl;
    // } 
    // else if (age == 18) {
    //     cout << "You are a kid and you will get a kid pass to the party" << endl;
    // } 
    // else if(age < 1) {
    //     cout << "You are not yet born, buddy" << endl;
    // } 
    // else {
    //     cout << "You can come to the party" << endl;
    // }

// Selection control structure if-else-if-else ladder
// Selection control structure switch case statements 
#include<iostream>
using namespace std;

int main() {
    int age;

    cout << "What is your age:" << endl;
    cin >> age;

    switch (age) {
        case 18:
            cout << "You are 18" << endl;
            break;
        case 22:
            cout << "You are 22" << endl;
            break;
        case 2:
            cout << "You are 2" << endl;
            break;
        default:
            cout << "No special cases" << endl;
            break;
    }

    return 0;
}

