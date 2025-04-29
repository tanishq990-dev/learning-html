#include<iostream>
using namespace std;
int main()
{
    int arr[5]={45,46,23,41,96};
    int n1=sizeof(arr) /(sizeof (arr[0]));
    cout<<n1<<endl;
    int sum=0;
    for(int i=0; i<=n1; i++)
    {
        sum=sum+arr[i];
        cout<<arr[i]<<endl;
    }
    cout<<"sum of array element="<<sum<<endl;


    return 0;
}
