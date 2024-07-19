#include <iostream>

using namespace std;

class polynomial
{
private :
    int a[100] ;
public :
    polynomial () ;
    void read () ;
    void print () ;
    friend polynomial operator + (polynomial , polynomial) ;
    friend polynomial operator - (polynomial , polynomial) ;
    friend polynomial operator * (polynomial , polynomial) ;
    polynomial operator = (polynomial) ;
    friend polynomial operator += (polynomial , polynomial) ;
    friend polynomial operator -= (polynomial , polynomial) ;
    friend bool operator == (polynomial p1 , polynomial p2) ;
};
polynomial :: polynomial ()
{
    for (int i=0 ; i<100 ; i++)
        a[i]=0 ;
}
void polynomial :: read ()
{
    int n , coefficient , power ;
    cin >> n ;
    cout << "\n" ;
    for (int i=0 ; i<n ; i++)
    {
        cout << "coefficient " << i+1 << " = " ;
        cin >> coefficient ;
        cout << "power " << i+1 << " = " ;
        cin >> power ;
        cout << "\n" ;
        a[power] = coefficient ;
    }
}
void polynomial :: print ()
{
    for (int i=99 ; i>=0 ; i--)
    {
        if (a[i]!=0)
            cout << a[i] ;
        else
            continue ;
        if (i!=0)
            cout << "x^" << i << " + " ;
        else
            cout << " " ;
    }
}
polynomial operator + (polynomial p1 , polynomial p2)
{
    polynomial p3 ;
    for (int i=0 ; i<100 ; i++)
         p3.a[i] = p1.a[i] + p2.a[i] ;
    return p3 ;
}
polynomial operator - (polynomial p1 , polynomial p2)
{
    polynomial p4 ;
    for (int i=0 ; i<100 ; i++)
         p4.a[i] = p1.a[i] - p2.a[i] ;
    return p4 ;
}
polynomial operator * (polynomial p1 , polynomial p2)
{
    polynomial p5 ;
    for (int i=0 ; i<100 ; i++)
    {
        for (int j=0 ; j<100 ; j++)
            p5.a[i+j] += p1.a[i]*p2.a[j] ;
    }
    return p5 ;
}
polynomial polynomial :: operator = (polynomial p2)
{
    for (int i=0 ; i<100 ; i++)
         a[i] = p2.a[i] ;
    return *this ;
}
polynomial operator += (polynomial p1 , polynomial p2)
{
    for (int i=0 ; i<100 ; i++)
         p1.a[i] = p1.a[i]+p2.a[i] ;
    return p1 ;
}
polynomial operator -= (polynomial p1 , polynomial p2)
{
    for (int i=0 ; i<100 ; i++)
         p1.a[i] = p1.a[i]-p2.a[i] ;
    return p1 ;
}
bool operator == (polynomial p1 , polynomial p2)
{
    for (int i=0 ; i<100 ; i++)
        if (p1.a[i] != p2.a[i])
            return false ;
    return true ;
}
int main ()
{
    polynomial p1 , p2 , p3 , p4 , p5 ;
    cout << "The number of sentences in a polynomial 1 : " ;
    p1.read () ;
    cout << "The number of sentences in a polynomial 2 : " ;
    p2.read () ;
    cout << "A(x) = " ;
    p1.print () ;
    cout << "\nB(x) = " ;
    p2.print () ;
    cout << "\n\nThe sum of two polynomials :\nA(x)+B(x) = " ;
    p3 = p1+p2 ;
    p3.print () ;
    cout << "\n\nThe difference of two polynomials :\nA(x)-B(x) =  " ;
    p4 = p1-p2 ;
    p4.print () ;
    cout << "\n\nThe product of two polynomials :\nA(x)*B(x) =  " ;
    p5 = p1*p2 ;
    p5.print () ;
    cout << "\n\nThe assignment of two polynomial :\nA(x)=B(x) =  " ;
    p1 = p2 ;
    p1.print () ;
    cout << "\n\nEqual plus operator for two polynomials :\nA(x)+=B(x) =  " ;
    p1 = p1+p2 ;
    p1.print () ;
    cout << "\n\nEqual minus operator for two polynomials :\nA(x)-=B(x) =  " ;
    p1 = p1-p2 ;
    p1.print () ;
    cout << "\n\nAre two polynomials equal ? " ;
    if (p1 == p2)
        cout << "Yes\n" ;
    else
        cout << "No\n" ;

    return 0;
}
