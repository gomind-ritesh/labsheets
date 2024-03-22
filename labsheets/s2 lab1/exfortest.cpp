#include <iostream>
using namespace std;

class Sales
{

protected:
    int saleidnum;
    string surname;
    string othername;
    string address;
    int itemnumber;
    string description;
    int cost;

public:
    Sales();
    Sales(int sin, string snme, string onme, string a, int inum, string desc, int cst);

    int getsaleidnum();
    void setsaleidnum(int sin);

    string getsurname();
    void setsurname(string snme);

    string getothername();
    void setothername(string onme);

    string getaddress();
    void setaddress(string a);

    int getitemnumber();
    void setitemnumber(int inum);

    string getdescription();
    void setdescription(string desc);

    int getcost();
    void setcost(int cst);
    ~Sales();
};

Sales::Sales(){};

Sales::Sales(int sin, string snme, string onme, string a, int inum, string desc, int cst)
{

    saleidnum = sin;
    surname = snme;
    othername = onme;
    address = a;
    itemnumber = inum;
    description = desc;
    cost = cst;
}

int Sales::getsaleidnum()
{
    return saleidnum;
}

void Sales::setsaleidnum(int sin)
{
    saleidnum = sin;
}

string Sales::getsurname()
{
    return surname;
}

void Sales::setsurname(string snme)
{
    surname = snme;
}

string Sales::getothername()
{
    return othername;
}

void Sales::setothername(string onme)
{
    othername = onme;
}

string Sales::getaddress()
{
    return address;
}
void Sales::setaddress(string a)
{
    address = a;
}

int Sales::getitemnumber()
{
    return itemnumber;
}
void Sales::setitemnumber(int inum)
{
    itemnumber = inum;
}

string Sales::getdescription()
{
    return description;
}
void Sales::setdescription(string desc)
{
    description = desc;
}

int Sales::getcost()
{
    return cost;
}
void Sales::setcost(int cst)
{
    cost = cst;
}
Sales::~Sales(){};

int main(){

    int sidnum;
    string sname;
    string oname;
    string addr;
    int inumber;
    string descrip;
    int cost;
    int n;

    cout<<"input n"<<endl;
    cin>> n;

    Sales array[n];

    for (int i=0; i<n ; i++)
    {
        cout<<"input saleidnum ";
        cin >> sidnum;
        array[i].setsaleidnum(sidnum);

        cout<<"input surname ";
        cin >> sname;
        array[i].setsurname(sname);

        cout<<"input othername ";
        cin >> oname;
        array[i].setothername(oname);

        cout<<"input address ";
        cin >> addr;
        array[i].setaddress(addr);

        cout<<"input itemnumber ";
        cin >> inumber;
        array[i].setitemnumber(inumber);

        cout<<"input description ";
        cin >> descrip;
        array[i].setdescription(descrip);

        cout<<"input cost ";
        cin >> cost;
        array[i].setcost(cost);

        cout<<endl;

        

    }
     for (int i=0; i<n ; i++)
    {
        cout<<array[i].getsaleidnum()<<endl;
        cout<<array[i].getsurname()<<endl;
        cout<<array[i].getothername()<<endl;
        cout<<array[i].getaddress()<<endl;
        cout<<array[i].getitemnumber()<<endl;
        cout<<array[i].getdescription()<<endl;
        cout<<array[i].getcost()<<endl;
    }



}