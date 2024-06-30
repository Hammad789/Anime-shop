// #include<iostream>
// using namespace std;
// int main()
// {
//     //array example 

int marks[4]= {23, 45, 56, 89};
int mathmarks[4] = {278, 290, 276, 478}; // Declare and initialize the array[ pointer arthemetic faormula [ ADDRESS NEW = CURRENT ADDRESS+I* SIZE OF DATA TYPE]]
//ADDRESS NEW IS P+I AND CURRENT ADDRESS IS P
cout<<"these are math marks"<<endl;
cout<<mathmarks[0]<<endl;
cout<<mathmarks[1]<<endl;
cout<<mathmarks[2]<<endl;
cout<<mathmarks[3]<<endl;
cout<<"these are marks"<<endl;
// cout<<marks[0]<<endl;
// cout<<marks[1]<<endl;
// //you can change the value of the arry 
// cout<<marks[2]<<endl;
// cout<<marks[3]<<endl;



    int marks[4] = {23, 45, 56, 89};

    cout << "Using do-while loop to print marks:" << endl;
    int i = 0; // Declare i outside the loop
    do {
        cout << "The value of marks[" << i << "] is " << marks[i] << endl;
        i++; // Increment i inside the loop
    } while (i < 4); // Correct loop condition

    return 0;
}





// return 0;
// }
#include<iostream>
using namespace std;
int main (){



int*p=marks;
cout<<"the value of marks [0] is"<<*p;
return 0;
}