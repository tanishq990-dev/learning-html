#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter th number:"<<endl;
    cin>>n;
    int(cnt=0);
    for(int i=1;i<=n;i+=1)
    {
        if(n%1==0)
        {
            cnt+=1;

        }
    }
    if(cnt==2)
    {
        cout<<"not prime"


    }





    return 0;
}
