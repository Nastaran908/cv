#include <iostream>

using namespace std ;

void eshtrak() ;
void ejtema () ;
void tafazol() ;
void motamem() ;
void zirmajmoe() ;

int main()
{
    cout << "a = eshterak\nb = ejtema\nc = tafazol\nm = motamem\nz = zirmajmoe\n\nSelect a char : " ;
    char n ;
    cin >> n ;
    cout << "\n" ;
    switch(n)
    {
        case 'a' :
            eshtrak () ;
            break ;

        case 'b' :
            ejtema () ;
            break ;

        case 'c' :
            tafazol () ;
            break ;

        case 'm' :
            motamem () ;
            break ;

        case 'z' :
            zirmajmoe () ;
            break ;
    }
    return 0;
}

void eshtrak ()
{
    int n , m ;
    cout << "size arraye a : " ;
    cin >> n ;
    int a[n] ;
    for (int i=0 ; i<n ; i++)
    {
        cout << "a[" << i << "] = " ;
        cin >> a[i] ;
    }
    cout << "\nsize arraye b : " ;
    cin >> m ;
    int b[m] ;
    for (int i=0 ; i<m ; i++)
    {
        cout << "b[" << i << "] = " ;
        cin >> b[i] ;
    }
    cout << "\n" ;
    int k=0 ;
    int c[n] ;
    for (int i=0 ; i<n ; i++)
    {
        int f=0 ;
        for (int j=0 ; j<m ; j++)
        {
            if (a[i]==b[j])
                f=1 ;
        }
        if (f==1)
        {
            c[k] = a[i] ;
            k++ ;
        }
    }
    cout << "a eshterake b : " ;
    for (int i=0 ; i<k ; i++)
        cout << "c[" << i << "] = " << c[i] << "\n" ;
}

void ejtema ()
{
    int n,m,k ;
    cout << "size arraye a : " ;
    cin >> n ;
    cout << "size arraye b : " ;
    cin >> m ;
    int a[n],b[m],c[n+m] ;
    k=n ;
    for (int i=0 ; i<n ; i++)
    {
        cout << "a[" << i << "] = " ;
        cin >> a[i] ;
        c[i]=a[i] ;
    }
    cout << "\n" ;
    for (int j=0 ; j<m ; j++)
    {
        cout << "b[" << j << "] = " ;
        cin >> b[j] ;
    }
    cout << "\n" ;
    for (int j=0 ; j<m ; j++)
    {
        bool f=false ;
        for (int i=0 ; i<n ; i++)
        {
            if (b[j]==a[i])
            {
                f=true ;
                break ;
            }
        }
        if (f==false)
        {
            c[k]=b[j] ;
            k++ ;
        }
    }
    cout << "a ejtema b : \n" ;
    for (int i=0 ; i<k ; i++)
        cout << "c[" << i << "] = " << c[i] << "\n" ;
}

void tafazol ()
{
    int n , m ;
    cout << "size arraye a : " ;
    cin >> n ;
    int a[n] ;
    for (int i=0 ; i<n ; i++)
    {
        cout << "a[" << i << "] = " ;
        cin >> a[i] ;
    }
    cout << "\nsize arraye b : " ;
    cin >> m ;
    int b[m] ;
    for (int i=0 ; i<m ; i++)
    {
        cout << "b[" << i << "] = " ;
        cin >> b[i] ;
    }
    cout << "\na-b : " ;
    for (int i=0 ; i<n ; i++)
    {
        int f=0 ;
        for (int j=0 ; j<m ; j++)
        {
            if (a[i]==b[j])
                f=1 ;
        }
        if (f!=1)
            cout << a[i] << "  " ;
    }

    cout << "\nb-a : " ;
    for (int j=0 ; j<m ; j++)
    {
        int k=0 ;
        for (int i=0 ; i<n ; i++)
        {
            if (a[i]==b[j])
                k=1 ;
        }
        if (k!=1)
            cout << b[j] << "  " ;
    }
}

void motamem ()
{
    int n , m ;
    cout << "size arraye a : " ;
    cin >> n ;
    int a[n] ;
    for (int i=0 ; i<n ; i++)
    {
        cout << "a[" << i << "] = " ;
        cin >> a[i] ;
    }
    cout << "\nsize arraye b : " ;
    cin >> m ;
    int b[m] ;
    for (int i=0 ; i<m ; i++)
    {
        cout << "b[" << i << "] = " ;
        cin >> b[i] ;
    }
    int q , k=0 , f=0 , f1=0 ;
    cout << "tedad anasore majmoe marja : " ;
    cin >> q ;
    int mm[q] ;
    for (int i=0 ; i<q ; i++)
        cin >> mm[i] ;
    cout << "enter majmoe marja : " ;
    for (int i=0 ; i<q ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            if (a[i]==mm[i])
                f++ ;
        }
    }
    if (f!=n)
        cout << "anasore majmoe marja ba majmoe aval motaghebat nadarad . " ;
    else if (f==n)
    {
        int a8[q],ff ;
        cout << "motamem majmoe aval : " ;
        for (int i=0 ; i<q ; i++)
        {
            ff=0 ;
            for (int j=0 ; j<n ; j++)
            {
                if (mm[i]==a[j])
                    ff=1 ;
            }
            if (ff==0)
            {
                a8[k]=mm[i] ;
                k++ ;
            }
        }
        for (int i=0 ; i<k ; i++)
            cout << a8[i] << "  " ;
    }
    cout << "\n" ;
    int f2=0 , z=0 ;
    for (int i=0 ; i<q ; i++)
    {
        for (int j=0 ; j<m ; j++)
        {
            if (a[j]==mm[i])
                f2++ ;
        }
    }
    if (f2!=m)
        cout << "anasore majmoe dovom ba marja motaghebat nadarad . " << "\n" ;
    else if (f2==m)
    {
        int a9[q],f5 ;
        cout << "motamem majmoe dovom : " ;
        for (int i=0 ; i<q ; i++)
        {
            f5=0 ;
            for (int j=0 ; j<m ; j++)
            {
                if (mm[i]==a[j])
                    f5=1 ;
            }
            if (f5==0)
            {
                a9[z]=mm[i] ;
                z++ ;
            }
        }
        for (int i=0 ; i<z ; i++)
            cout << a9[i] << "  " ;
    }
}

void zirmajmoe ()
{
    int n , m ;
    cout << "size arraye a : " ;
    cin >> n ;
    int a[n] ;
    for (int i=0 ; i<n ; i++)
    {
        cout << "a[" << i << "] = " ;
        cin >> a[i] ;
    }
    cout << "\nsize arraye b : " ;
    cin >> m ;
    int b[m] ;
    for (int i=0 ; i<m ; i++)
    {
        cout << "b[" << i << "] = " ;
        cin >> b[i] ;
    }
    int f=0 , f1=0 ;
    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<m ; j++)
        {
            if (a[i]==b[j])
                f++ ;
        }
    }
    if (f==0)
        cout << "majmoe 2 zirmajmoe 1 nist . " ;
    else if (f==m)
        cout << "majmoe 2 zirmajmoe 1 ast . " << "\n" ;
    for (int j=0 ; j<m ; j++)
    {
        for (int i=0 ; i<n ; i++)
        {
            if (a[i]==b[j])
                f1++ ;
        }
    }
    if (f1==0)
        cout << "majmoe 1 zirmajmoe 2 nist ." ;
    else if (f1==n)
        cout << "majmoe 1 zirmajmoe 2 ast . " ;
    else if (f!=m && f1!=n)
            cout << "1 va 2 zirmajmoe hamdige nistan . " ;
}


