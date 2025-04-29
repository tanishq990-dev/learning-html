#include <iostream>
using namespace std;

int main ()
{
    int i=1,j=1;
    while(i<5)
    {
        cout<<"this is outer while loop"<<endl;
        int j=1;
        {
            cout<<"this is inner while loop";
            j+=1;

        }
        {
            i+=1;
            cout<<endl;

        }
    }
    return 0;
}
