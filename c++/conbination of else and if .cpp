#include <iostream>
using namespace std;
int main()

{
    int age;
    cout<<"enter your age:"<<endl;
    cin>>age;
    if(age<0)
    {
        cout<<"invalid age";

    }
    else if (age<=12){
            cout<<"child age";
    }
    else if(age<60){
        cout<<"young age";
    }
    else if (age<70)
    {
        cout<<"marne ki umar";
    }
    else if (age<500)
    {
        cout<<"mar hi gya bsdka";
    }


    return 0;
}

