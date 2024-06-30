#include<iostream>
using namespace std;
int main (){





    // what is a pointer? a data type which hold the address of other data types
    int a =3;
    int* b = &a;
    // &---> (is Address of )operator

    cout<<"The address of a is  "<<&a<<endl;
    cout<<"The address of a is  "<<b<<endl;
    // *---> is Derefrencing  of operator(star (*) means value at
    cout<<"The value of address b is "<<*b<<endl;




// pointer to pointer (stores the address of a pointer )
    int ** c = &b
    cout<<"The address of b"<<&b<<endl;
    cout<<"The address of b"<<c<<endl;
    cout<<"The value at address c "<<*c<<endl;
    cout<<"The value at address  value at (value_at(c))"<<**c<<endl;
return 0;
}

