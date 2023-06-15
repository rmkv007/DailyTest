/*
    Question:
        The program must accept an integer N as the input. The program must replace 
        the odd digits by 1 and replace the even digits by 0 in N.Finally the program must
        print the modified value of N as the output.
    Sample Input:
        2345
    Sample Output:
        0101
    Explanation:
        The digit 2 and 4 are even in 2345,so replaced with 0.
        The digit 3 and 5 are odd in 2345,so replaced with 1.
*/
#include <iostream>
using namespace std;
int main()
{
    int n,c=1;
    cin>>n;
    int k=n;
    while(k>0)
    {
        c*=10;
        k/=10;
    }
    c/=10;
    while(c>0)
    {
        if((n/c)%2==0)
            cout<<0;
        else
            cout<<1;
        c/=10;
    }
    return 0;
}
