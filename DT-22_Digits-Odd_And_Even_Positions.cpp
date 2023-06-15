/*
    Question:
        The program must accept an integer N as the input. The program must print  the 
        digits which are present at te odd position in N. Then the program must print
        the digits which are present at the evenpositions in N as the output.
    Sample Input:
        32768
    Sample Output:
        3 7 8
        2 6
*/
#include <iostream>
#include<cmath>
using namespace std;
void print(int a[],int size,int f)
{
    for(int i=size-1;i>=0;i--)
        if((i+1)%2==f)
            cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    int n,a[16],c=0;
    cin>>n;
    while(n>0)
    {
        a[c]=n%10;
        n/=10;
        c++;
    }
    print(a,c,1);
    print(a,c,0);
    return 0;
}
