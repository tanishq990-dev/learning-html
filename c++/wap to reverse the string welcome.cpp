#include<iostream>
using namespace std;

int main()
{
    string mystr1="welcome";
    string mystr2="";

    for(int i=0; i<mystr1.length(); i++)
    {
        mystr2=mystr1[i]+mystr2;
    }
    cout<<mystr2<<endl;



    return 0;
}

