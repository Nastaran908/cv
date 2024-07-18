 #include <iostream>

using namespace std;

class link_list ;

class node
{
    friend class link_list ;
private :
    int data ;
    node *next ;
public :
    node ()
    {
        data = 0 ;
        next = NULL ;
    }
};
class link_list
{
private :
    node *head ;
    node *last ;
public :
    link_list ()
    {
        head = NULL ;
    }
    void create (int d)
    {
        node *newnode = new node ;
        if (head == NULL)
        {
            head = newnode ;
            head->data = d ;
            last = newnode ;
        }
        else
        {
            last->next = newnode ;
            last = newnode ;
            last->data = d ;
        }
    }
    void print ()
    {
        node *temp = head ;
        while (temp != NULL)
        {
            cout << " " << temp->data << "\t" << temp << "\n" ;
            temp = temp->next ;
        }
    }
    void delete_first ()
    {
        head = head->next ;
    }
    void delete_data (int k)
    {
        node *temp = head ;
        node *befor = head ;
        while (temp != NULL)
        {
            if (temp->data == k)
                befor->next = temp->next ;
        }
        befor = temp ;
        temp = temp->next ;
    }
    void delete_last ()
    {
        node *p1 = head ;
        node *p2 = head ;
        while (p2 != NULL)
        {
            if (p2->next == NULL)
                p1->next = NULL ;
            p1 = p2 ;
            p2 = p2->next ;
        }
    }
    void add_first (int f1)
    {
        node *newnode = new node ;
        newnode->next = head ;
        head = newnode ;
    }
    void add_data (int f2)
    {
        node *newnode = new node ;
        node *temp = head ;
        node *befor = head ;
        while (temp != NULL)
        {
            if (temp->data >= f2 && befor->data <= f2)
            {
                newnode->next = befor->next ;
                befor->next = newnode ;
                newnode->data = f2 ;
                break ;
            }
            befor = temp ;
            temp = temp->next ;
        }
    }
    void add_last (int f3)
    {
        node *newnode = new node ;
        if (head == NULL)
        {
            last->data = f3 ;
            head = newnode ;
            last = newnode ;
        }
        else
        {
            last->next = newnode ;
            last = newnode ;
            last->data = f3 ;
        }
    }
};
int main ()
{
    int n , d , s , k , f1 , f2 , f3 ;
    link_list l ;
    cout << "Number of node : " ;
    cin >> n ;
    cout << "\n" ;
    for (int i=0 ; i<n ; i++)
    {
        cout << "Data " << i+1 << " = " ;
        cin >> d ;
        l.create (d) ;
    }
    cout << "\n" ;
    l.print () ;
    cout << "\n1)delete first\t2)delete data\t3)delete last\t4)add first\t5)add data\t6)add last\n\nWhich number ? " ;
    cin >> s ;
    switch (s)
    {
    case 1 :
        l.delete_first () ;
        l.print () ;
        break ;
    case 2 :
        cout << "enter number : " ;
        cin >> k ;
        l.delete_data (k) ;
        l.print () ;
        break ;
    case 3 :
        l.delete_last () ;
        l.print () ;
        break ;
    case 4 :
        cout << "enter number : " ;
        cin >> f1 ;
        l.add_first (f1) ;
        l.print () ;
        break ;
    case 5 :
        cout << "enter number : " ;
        cin >> f2 ;
        l.add_data (f2) ;
        l.print () ;
        break ;
    case 6 :
        cout << "enter number : " ;
        cin >> f3 ;
        l.add_last (f3) ;
        l.print () ;
        break ;
    default :
        cout << "try again ! " ;
    }

    return 0 ;
}
