/*
    Question:
        The program must accept N as the input. The program must print the minimum 
        and maximum integers among N integers as the output.
    Sample Input:
        7 
        10 29 128 7 28 39 11
    Sample Output:
        7 128
*/
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,s=10000000,g=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        s=s>p?p:s;
        g=g<p?p:g;
    }
    cout<<s<<" "<<g;
    return 0;
}
