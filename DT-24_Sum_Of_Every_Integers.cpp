/*
    Question:
        The program must accept N integers and an integer X(where X is the factor of N) 
        as the input. The program must print the sum of every X integers among N 
        integers as the output.
    Sample Input:
        8
        2 3 4 9 8 7 1 5
        4
    Sample Output:
        18 21
*/
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int k,k1,s=0;
    cin>>k;
    int p[k];
    for(int i=0;i<k;i++)
        cin>>p[i];
    cin>>k1;
    for(int i=0;i<k;i++)
    {
        s+=p[i];
        if((i+1)%k1==0)
        {
            cout<<s<<" ";
            s=0;
        }
    }
    return 0;
}
