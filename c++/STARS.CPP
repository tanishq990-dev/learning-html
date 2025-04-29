#include<iostream>
using namespace std;
 int main()
 {
  int n,sum=0,i=1;
  cout<<"enter the number:"<<endl;
  cin>>n;
  while(i<n)
  {
      if(n%i==0)
      {
          sum=sum+i;
      }
      i+=1;

  }
  if(sum==n)
  {
      cout<<"perfect"<<endl;
  }
  else
  {
      cout<<"not perfect no"<<endl;
  }



  return 0;
 }
