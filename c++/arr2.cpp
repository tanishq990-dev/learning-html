
#include<iostream>
using namespace std;
int main()

{
    cout<<"enter the no of element:"<<endl;
    int n;
    cin>>n;

    int arr[n];
    int j;
    int m;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the"<<i+1<<"elements:"<<endl;
        int data;
        cin>>data;
        arr[i]=data;

    }
    for( m=0;m<n;m++);
    {
        for(int k=m+1;k<m:k++)\
            if(arr[i]>arr[k])
        {
            int temp=arr[m];
            arr[m]=arr[k];

        }
    }

    for(j=0;j<n;j++)
    {
        cout<<arr[j]<<endl;
    }
    return 0;
}
