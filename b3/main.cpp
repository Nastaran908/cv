#include <iostream>

using namespace std;

void aval (int,int a[100]) ;
int k=0 ;

int main()
{
    int n ;
    cout << "enter an even number : " ;
    cin >> n ;
    int a[100] ;
    aval (n,a) ;
    for (int i=0 ; i<k ; i++)
    {
        for (int j=0 ; j<k/2 ; j++)
        {
            if (a[i]+a[j]==n)
                cout << a[i] << "+" << a[j] << "=" << n << "\n" ;
        }
    }
    return 0;
}

void aval (int n,int a[100])
{
    int c=0 ;
    if (n<=0)
        return ;
    else
    {
        for (int i=1 ; i<=n ; i++)
        {
            if (n%i==0)
                c++ ;
        }
        if (c==2)
        {
            a[k]=n ;
            k++ ;
        }
        aval (n-1,a) ;
    }
}
