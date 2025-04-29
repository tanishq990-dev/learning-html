#include<iostream>
using namespace std;

int main ()
{
    float p,c,m,total_marks,per;
    cout<<"enter the phy marks:"<<endl;
    cin>>p;
    cout<<
    "enter the che marks:"<<endl;
    cin>>c;
    cout<<"enter the maths marks:"<<endl;
    cin>>m;
    total_marks=p+c+m;
    per=total_marks/3;
    if (p<0 or c<0 or m<0 or p>100 or c>100 or m>100)
    {
        cout<<"phy="<<p<<endl;
        cout<<"che="<<c<<endl;
        cout<<"math="<<m<<endl;
        cout<<"invalid marks"<<endl;

    }
    else if ((p<33 and c>33 and m>33) or(p>=33 and c<33 and m>=33)or (p>=33 and c>=33 and m<33))
    {
        if(p<33 and c>33 and m>33)
        {
            cout<<"phy="<<p<<endl;
        cout<<" fail in che="<<c<<endl;
        cout<<"math="<<m<<endl;
        }
        else
        {
            cout<<"phy="<<p<<endl;
        cout<<"che="<<c<<endl;
        cout<<" fail in math="<<m<<endl;
        }


    }
    return 0;
}
