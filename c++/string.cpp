#include<iostream>
using namespace std;
int main()
{
    string str2;
    cout<<"enter the string without space or with space"<<endl;
    getline(cin,str2);
    cout<<str2<<endl;

    string strl="STRING";
    cout<<strl.size()<<endl;
    cout<<strl.length()<<endl;

    cout<<strl[0]<<endl;
    cout<<"for loop in string"<<endl;
    for(int i=0; i<strl.length(); i++)
    {
        cout<<strl[i]<<endl;
    }

    //two string can be add
    string mystr1="hello welcome";
    string mystr2="to bhopal";
    string mystr3=mystr1+mystr2;
   cout<<mystr3<<endl;

    //two string can be compare like if all char are equal then it will show 1 that means true but it show 0 or -1 then it means that the char are not equal

   string mystr1="hello";
    string mystr2="hellj";
    cout<<(mystr1==mystr2)<<endl;

    string mystr1="hello";
    string mystr2="hellh";
    cout<<mystr1.compare(mystr2)<<endl;




    return 0;
}
