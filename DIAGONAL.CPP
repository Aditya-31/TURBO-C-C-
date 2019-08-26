#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>array[i][j];
        }
    }
    int sum=0,sum1=0;
    for(int i=0;i<n;i++)
    {
        sum+=array[i][i];
        sum1+=array[i][n-i];       
    }
    cout<<abs(sum1-sum);
    return 0;
}