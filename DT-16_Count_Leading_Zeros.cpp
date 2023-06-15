/*
    Question:
        The program must accept an integer N as the input. The program must print the
        count of leading zeros in the binary representation of N as the output.
    Sample Input:
        16
    Sample Output:
        4
    Explanation:
        The binary representation of 16 is 10000
        hence the count of leading zeros is 4.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],c=0;
    while(n>0)
    {
        a[c]=n%2;
        c++;
        n/=2;
    }
    n=0;
    for(int i=0;i<c;i++)
    {
        if(a[i]!=1)
            n++;
        else
            break;
    }
    cout<<n;
    return 0;
}
