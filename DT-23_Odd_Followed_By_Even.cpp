/*
    Question:
        The program must accept N integers as the input. The program must print the odd 
        integers followed by the even integers as the output.
    Sample Input:
        6
        65 10 -41 80 -55 -26
    Sample Output:
        65 -41 -55 10 80 -26
*/
#include <iostream>
#include<cmath>
using namespace std;
void print(int a[],int size,int f)
{
    for(int i=0;i<size;i++)
        if(abs(a[i])%2==f)
            cout<<a[i]<<" ";
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    print(a,n,1);
    print(a,n,0);
    return 0;
}
