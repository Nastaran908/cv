#include <iostream>

using namespace std;

class deduction
{
private :
    double num , den ;
public :
     deduction ()
    {
        num=0 ;
        den=1 ;
    }
    deduction (double n, double d)
    {
        num=n ;
        den=d ;
    }
    friend deduction operator + (deduction , deduction) ;
    friend deduction operator - (deduction , deduction) ;
    friend deduction operator * (deduction , deduction) ;
    friend deduction operator / (deduction , deduction) ;
    deduction operator = (deduction) ;
    friend bool operator == (deduction , deduction) ;
    friend deduction operator > (deduction , deduction) ;
    void setnumden (double num , double den) ;
    void print ()
    {
        cout << num << "/" << den << "\ndecimal = "  << num/den << "\n" ;
    }
};
void setnumden (double num , double den)
    {
        if (num<0 || den==0)
            cout << "error" ;
        this->num = num ;
        this->den = den ;
    }
deduction operator + (deduction d1 , deduction d2)
{
    deduction s ;
    s.num = (d1.num*this->den) + (this->num*d1.den) ;
    s.den = d1.den*this->den ;
    return deduction(s.num,s.den) ;
}
deduction operator - (deduction d1 , deduction d2)
{
    deduction s ;
    s.num = (d1.num*this->den) - (this->num*d1.den) ;
    s.den = d1.den*this->den ;
    return deduction(s.num,s.den) ;
}
deduction operator * (deduction d1 , deduction d2)
{
    deduction p ;
    p.num = d1.num*this->num ;
    p.den = d1.den*this->den ;
    return deduction(p.num,p.den) ;
}
deduction operator / (deduction d1 , deduction d2)
{
    deduction p ;
    p.num = d1.num*this->den ;
    p.den = d1.den*this->num ;
    return deduction(p.num,p.den) ;
}
deduction deduction :: operator = (deduction d1)
{
    d1.num = this->num ;
    d1.den = this->den ;
    return *this ;
}
bool operator == (deduction d1 , deduction d2)
{
    if (num != this->num && den != this->den)
        return false ;
    return true ;
}
deduction operator > (deduction d1 , deduction d2)
{
    if (d1.num*this->den > d1.den*this->num)
        return deduction (d1.num,d1.den) ;
    else
        return deduction (this->num,this->den) ;
}
int main()
{
    double n,d ;
    cout << "deduction 1 :\n" ;
    cout << "the numerator = " ;
    cin >> n ;
    cout << "the denominator = " ;
    cin >> d ;
    deduction d1 (n,d) ;
    d1.setnumden (n,d) ;
    cout << "\ndeduction 2 :\n" ;
    cout << "the numerator = " ;
    cin >> n ;
    cout << "the denominator = " ;
    cin >> d ;
    deduction d2 (n,d) ;
    d2.setnumden (n,d) ;
    cout << "\nThe sum of two fraction : " ;
    (d1 + d2).print () ;
    cout << "\nThe subtraction of two fraction : " ;
    (d1 - d2).print () ;
    cout << "\nThe product of two fraction : " ;
    (d1 * d2).print () ;
    cout << "\nThe divide of two fraction : " ;
    (d2 / d1).print () ;
    cout << "\nThe equality of two fraction : " ;
    if (d1 == d2)
        cout << "is equal" ;
    else
        cout << "not equal" ;
    cout << "\nThe larger of two fraction : " ;

    return 0;
}
