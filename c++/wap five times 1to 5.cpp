#include<iostream>
using namespace std;
 int main ()

 {
     int i=5;
     while (i>0)
     {
         int j=5;
         while (j>0)
         {
             cout<<j<<"*";
             j+=i;

         }
         cout<<endl;
         i-=i;
     }
 }
