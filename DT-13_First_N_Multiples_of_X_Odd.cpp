/*
    Question:
        The program must accept two integers N and X as the input.
        The program must print the first N multiples of X which are
        odd as the output. If there is no such multiple then the program
        must print -1 as the output.
    Sample Input:
        10 3
    Sample Output:
        3 9 15 21 27 33 39 45 51 57
    Explanation:
        The first 10 multiples of 3 are 3 9 15 21 27 33 39 45 51 57
*/
#include <iostream>
using namespace std;
int main()
{
    int a,n;
    cin>>a>>n;
    if(n%2==0)
        cout<<-1;
    else
        for(int i=1;i<=n*a*2;i++)
            if(i%n==0 && i%2!=0)
                cout<<i<<" ";
    return 0;
}
