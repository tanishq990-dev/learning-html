#include<iostream>
using namespace std;
int main()
{
   int n1,n2,n3,i=0;
   cout<<"enter the value of n1:-"<<endl;
   cin>>n1;
   cout <<"enter the value of n2:-"<<endl;
   cin>>n2;
   n3=n1+1;
   while (i<=n2)
   {
       int temp=n3, rev=0;
       while (temp>0){
        int r=temp%10;
        rev=rev*10+r;
        temp=temp/10;

       }
       if(rev==n3)
       {
           cout<<"here the palendrong numbers are :-"<<rev<<endl;
           i+=1;
       }
       n3+=1;
   }





    return 0;
}

