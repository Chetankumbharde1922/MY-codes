#include<iostream>
using namespace std;

//basic solution of this solution is to find the XOR of the code

int main()
{
    unsigned int arr[100001],T,i,n,o;
    cin>>T;
    while(T--)
    {
        cin>>n;
        o=0;
        for(i=0;i<n;i++)
            {
                cin>>arr[i];

            }
 for(i=0;i<n;i++)
            {
                o=o^arr[i];

            }

            o*=2;
        cout<<o<<endl;
    }

    return 0;
}
