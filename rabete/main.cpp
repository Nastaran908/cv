#include <iostream>

using namespace std;

bool baztabi (int a[][100] ,int );
bool tagharooni (int a[][100] ,int );
bool hamarzi(int a[][100] ,int );

int main()
{
    int n;
    cout << "Enter the matrix size: ";
    cin>>n;
    int a[n][100];
    cout<<"Enter the elements of matrix:\n";
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];

    if(baztabi(a,n)==1)
        cout<<"baztabi : yes.\n";
    else if(baztabi (a,n)==0)
        cout<<"baztabi : no.\n";

    if(tagharooni(a,n)==1)
        cout<<"tagharooni : yes.\n";
    else if(tagharooni(a,n)==0)
        cout<<"pad tagharoon.\n";

    if(hamarzi (a,n)==1)
        cout<<"ham arzi : yes.\n";
    else if(hamarzi (a,n)==0)
        cout<<"ham arzi : no.\n";

    if(baztabi (a,n)==1&&tagharooni(a,n)==1&&hamarzi(a,n)==1)
        cout<<"taadi.\n";
    else
        cout<<"no taddi.\n";

    if(baztabi (a,n)==1&&tagharooni(a,n)==0&&hamarzi(a,n)==1)
        cout<<"tartib gozii.\n";
    else
        cout<<"no tartib gozii.\n";

    return 0;
}
bool baztabi(int a[][100] ,int n)
{
    int f=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if(i=j)
                if(a[i][j]!=1)
                    f++;
        }
    if(f==0)
        return 1;
    else
        return 0;
}
bool tagharooni(int a[][100] ,int n)
{
    int f=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==a[j][i])
                f++;
        }
    if(f==n*n)
        return 1;
    else
        return 0;
}
bool hamarzi (int a[][100] ,int n)
{
    int mul[n][100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            mul[i][j]=0;
            for(int k=0;k<n;k++)
                mul[i][j]+=a[i][k]*a[k][j];
        }
    }
    int f=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if(mul[i][j]==1&&mul[i][j]==a[i][j]);
            else
                f++;
        }
    if(f==0)
        return 1;
    else
        return 0;
}
