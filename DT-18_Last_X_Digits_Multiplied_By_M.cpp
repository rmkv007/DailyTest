/*
    Question:
        The program must accept three integers N,X and M as the input. The program
        must print the integer formed by the last X digits multiplied by M as the output.
    Sample Input:
        325687
        3 10
    Sample Output:
        6870
*/
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,n1,n2;
    cin>>n>>n1>>n2;
    n1=pow(10,n1);
    cout<<(n%n1)*n2;
    return 0;
}
