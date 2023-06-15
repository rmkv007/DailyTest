/*
    Question:
        The program must accept an integer matrix of size RxC as the input. The program
        must print the sum S of the elements in the columns where the first element of 
        that column is an odd integer as the output. If there is no such first element in any 
        coluumn of the matrix then the program must print -1 as the output.
    Sample Input:
        3 4
        8 2 3 5
        9 8 7 6
        1 2 5 5
    Sample Output:
        31
    Explanation:
        Only the third and fourth column has the odd integer as the first element.
        So the sum of the elements in the third and fourth column is 31(3+7+5+5+6+5).
*/
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int a[r][c],b[c],count=0,s=0,i1=0;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>a[i][j];
    for(int i=0;i<c;i++)
        if(a[0][i]%2!=0)
        {    b[count]=i;
            count++;
        }
    if(count==0)
        cout<<-1;
    else
    {
        for(int i=0;i<count;i++)
        {
            i1=b[i];
            for(int j=0;j<r;j++)
                s+=a[j][i1];
        }
        cout<<s;
    }
    return 0;
}
