#include<iostream>
using namespace std;

// Function to return gcd of a and b
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
        result = gcd(arr[i], result);

    return result;
}

// Driven code
int main()
{
    int arr[1000]={0},T,i,n;
    cin>>T;
    while(T--)
    {
            cin>>n;
            for(i=0;i<n;i++)
            {
                cin>>arr[i];

            }
    if(findGCD(arr, n)==1) cout<<"0"<<endl;
        else cout<<"-1"<<endl;}
    return 0;
}
