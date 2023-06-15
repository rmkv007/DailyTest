/*
    Question:
        The program must accept an integer N as the input. The program must print the 
        desired pattern as shown in the below example.
    Sample Input:
        5
    Sample Output:
        1
        22
        3*3
        4**4
        5***5
*/
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j==1 || j==i)
                cout<<i;
            else
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
