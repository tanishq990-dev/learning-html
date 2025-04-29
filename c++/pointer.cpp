#include<iostream>
using namespace std;

int main()
{
    cout<<"this is a class of pointer"<<endl;
    int *ptr;
    int**ptr1;
    int a=10;
    ptr=&a;
    ptr1=&ptr;
    cout<<"the value of a="<<a<<endl;
    cout<<"the address of a="<<&a<<endl;
    cout<<"the value of ptr="<<ptr<<endl;
    cout<<"the address of ptr="<<&ptr<<endl;
    cout<<"the value of ptr1="<<ptr1<<endl;
    cout<<"the address of ptr1="<<&ptr1<<endl;
    cout<<"the single dereference ptr1="<<*ptr1<<endl;
    cout<<"the double dereference of ptr1="<<**ptr1<<endl;



    return 0;
}
