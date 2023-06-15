/*
    Question:
        The program must accept an integer N as the input.The program must print the 
        desired pattern as shown in the below Input/Output section.
    Sample Input:
        4
    Sample Output:
        1 2 3 4
        2 3 4
        3 4
        4
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++)
            cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}
