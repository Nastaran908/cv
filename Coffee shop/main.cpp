#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class cold_drinks
{
private :
    long ice_americano ;
    long ice_latte ;
    long ice_mocha ;
    long affogato ;
    long lemonade ;
    long mojito ;
public :
    cold_drinks ()
    {
        cout << "Cold Drinks :\n" ;
        cout << "1)ice americano = 45000\n" ;
        cout << "2)ice latte = 56000\n" ;
        cout << "3)ice mocha = 66000\n" ;
        cout << "4)affogato = 53000\n" ;
        cout << "5)lemonade = 51000\n" ;
        cout << "6)mojito = 52000\n\n" ;
    }
};
class warm_drinks
{
private :
    long espresso ;
    long americano ;
    long latte ;
    long mocha ;
    long hot_chocolate ;
    long tea ;
public :
    warm_drinks ()
    {
        cout << "Warm Drinks :\n" ;
        cout << "7)espresso = 42000\n" ;
        cout << "8)americano = 45000\n" ;
        cout << "9)latte = 56000\n" ;
        cout << "10)mocha = 66000\n" ;
        cout << "11)hot chocolate = 58000\n" ;
        cout << "12)tea = 40000\n\n" ;
    }
};
class foods
{
private :
    long caesar ;
    long fries ;
    long pasta ;
    long pizza ;
    long burger ;
    long snack ;
    long sandwich ;
public :
    foods ()
    {
        cout << "Foods : \n" ;
        cout << "13)caesar = 168000\n" ;
        cout << "14)fries = 85000\n" ;
        cout << "15)pasta = 190000\n" ;
        cout << "16)pizza = 210000\n" ;
        cout << "17)burger = 268000\n" ;
        cout << "18)snack = 148000\n" ;
        cout << "19)sandwich = 216000\n\n" ;
    }
};
class customer
{
private :
    string name ;
    string number ;
    string date ;
    //string order ;
public :
    int total ;
    int price[19] ;
    int m[19] ;
    customer() {} ;
    customer (string n, string p, string d)
    {
        name = n ;
        number = p ;
        date = d ;
        //order = o ;
        total = 0 ;
        price[0]=45000 ;
        price[1]=56000 ;
        price[2]=66000 ;
        price[3]=53000 ;
        price[4]=51000 ;
        price[5]=52000 ;
        price[6]=42000 ;
        price[7]=45000 ;
        price[8]=56000 ;
        price[9]=66000 ;
        price[10]=58000 ;
        price[11]=40000 ;
        price[12]=168000 ;
        price[13]=85000 ;
        price[14]=190000 ;
        price[15]=210000 ;
        price[16]=268000 ;
        price[17]=148000 ;
        price[18]=216000 ;

        m[0]=20 ;
        m[1]=34 ;
        m[2]=15 ;
        m[3]=21 ;
        m[4]=23 ;
        m[5]=25 ;
        m[6]=40 ;
        m[7]=30 ;
        m[8]=24 ;
        m[9]=29 ;
        m[10]=10 ;
        m[11]=19 ;
        m[12]=5 ;
        m[13]=20 ;
        m[14]=7 ;
        m[15]=15 ;
        m[16]=6 ;
        m[17]=20 ;
        m[18]=11 ;
    }
    void inventory ()
    {
        for (int i=0 ; i<19 ; i++)
        {
            if (m[i]<20)
                cout << "Item = " << i << " Notify the management! Inventory deficit\n" ;
        }
    }
    void save()
    {
        ofstream myfile("customer.txt") ;
        if (!myfile)
        {
            cerr << "Cannot open file for writing!\n" ;
            return ;
        }

        myfile << "Customer Name : " << name << "\n" ;
        myfile << "Phone Number : " << number << "\n" ;
        myfile << "Date : " << date << "\n" ;
        //myfile << "Order : " << order << "\n" ;
        myfile << "Total amount : " << total << "\n" ;

        myfile.close() ;
        cout << "Customer information saved to file.\n" ;
    }
    void calculate(int x , int n , int k)
    {
        this->total += price[x-1] * n ;
    }
    void print()
    {
        cout << "Customer Name : " << name << "\n" ;
        cout << "Phone Number : " << number << "\n" ;
        cout << "Date : " << date << "\n" ;
        //cout << "Order : " << order << "\n" ;
        cout << "Total amount : " << total << "\n" ;
    }
};
int main()
{
	cout << "Welcome\n\n" ;
	cold_drinks c ;
	warm_drinks w ;
	foods f ;

	ofstream outfile("Menu.txt") ;
	if (outfile.is_open())
    {
		outfile << ("Cold Drinks : \n") ;
		outfile << ("ice americano = 45000\n") ;
		outfile << ("ice latte = 56000\n") ;
		outfile << ("ice mocha = 66000\n") ;
		outfile << ("affogato = 53000\n") ;
		outfile << ("lemonade = 51000\n") ;
		outfile << ("mojito = 52000\n\n") ;

		outfile << ("Warm Drinks :\n") ;
		outfile << ("espresso = 42000\n") ;
		outfile << ("americano = 45000\n") ;
		outfile << ("latte = 56000\n") ;
		outfile << ("mocha = 66000\n") ;
		outfile << ("hot chocolate = 58000\n") ;
		outfile << ("tea = 40000\n\n") ;

		outfile << ("Foods : \n") ;
		outfile << ("caesar = 168000\n") ;
		outfile << ("fries = 85000\n") ;
		outfile << ("pasta = 190000\n") ;
		outfile << ("pizza = 210000\n") ;
		outfile << ("burger = 268000\n") ;
		outfile << ("snack = 148000\n") ;
		outfile << ("sandwich = 216000\n") ;

		outfile.close() ;
		cout << "The menu information was successfully saved to file\n\n" ;
	}
	 else
	{
		cerr << "Error!\n" ;
	}

	ofstream fileobj("inventory.txt") ;
	if (fileobj.is_open())
    {
		fileobj << ("Cold Drinks : \n") ;
		fileobj << ("ice americano = 20\n") ;
		fileobj << ("ice latte = 34\n") ;
		fileobj << ("ice mocha = 15\n") ;
		fileobj << ("affogato = 21\n") ;
		fileobj << ("lemonade = 23\n") ;
		fileobj << ("mojito = 25\n\n") ;

		fileobj << ("Warm Drinks :\n") ;
		fileobj << ("espresso = 40\n") ;
		fileobj << ("americano = 30\n") ;
		fileobj << ("latte = 24\n") ;
		fileobj << ("mocha = 29\n") ;
		fileobj << ("hot chocolate = 10\n") ;
		fileobj << ("tea = 19\n\n") ;

		fileobj << ("Foods : \n") ;
		fileobj << ("caesar = 5\n") ;
		fileobj << ("fries = 20\n") ;
		fileobj << ("pasta = 7\n") ;
		fileobj << ("pizza = 15\n") ;
		fileobj << ("burger = 6\n") ;
		fileobj << ("snack = 20\n") ;
		fileobj << ("sandwich = 11\n") ;

		fileobj.close() ;
		cout << "The inventory information was successfully saved to file\n\n" ;
	}
    else
    {
		cerr << "Error!\n" ;
	}
	int x , n , sum=0;
	string name, number, date, order ;
	cout << "Enter customer name : " ;
	getline(cin,name) ;
	cout << "Enter customer phone number : " ;
	getline(cin,number) ;
	cout << "Enter date : " ;
	getline(cin,date) ;
	int k ;
	cout << "How many orders do you have ? " ;
	cin >> k ;
	customer t(name, number, date) ;
	t.inventory() ;
	cout << "\nEnter customer order :\n" ;
	for (int i=0 ; i<k ; i++)
    {
        //getline(cin,order) ;
        cout << "\nNumber of item ? " ;
        cin >> x ;
        cout << "How many : " ;
        cin >> n ;
        t.calculate(x,n,k) ;
    }
    cout << "\n" ;
	t.save() ;
	cout << "\nCustomer information = \n";
	t.print() ;

	return 0;
}
