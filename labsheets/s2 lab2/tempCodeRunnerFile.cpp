#include <iostream>
using namespace std;

class Author {

    private:
       string name;
       string email;
       char gender;

    public:
       Author();
       Author(string n, string e, char g);
       string getName();
       void setName(string n);
       string getEmail();
       void setEmail(string e);
       char getGender();
       void setGender(char g);
       ~Author();
};

class Book {

    private:
       string title;
       double price;
       int qtyInStock;
       Author writer;

    public:
       Book();
       Book(string t, double p, int qis, Author a);
       string getTitle();
       void setTitle(string t);
       //Author getWriter(); REMOVE THIS METHOD
       double getPrice();
       void setPrice(double p);
       int getQtyInStock();
       void setQtyInStock(int qis);
       ~Book();
};

/* Implementation for the Author class (Author.cpp) */
Author::Author() {
    name = "Smith";
    email = "smith@umail.uom.ac.mu";
    gender = 'f';
}

Author::Author(string n, string e, char g) {
   name = n;
   email = e;
   gender = g;
}

string Author::getName() {
   return name;
}

void Author::setName(string n){
    name = n;
}

string Author::getEmail() {
   return email;
}

void Author::setEmail(string e) {
   email = e;
}

char Author::getGender() {
   return gender;
}

void Author::setGender(char g) {
    gender = g;
}

Author::~Author(){}

/* Implementation for the class Book (Book.cpp) */
Book::Book(){}

Book::Book(string t, double p, int qis, Author a): writer(a) {
   title = t;
   price = p;
   qtyInStock = qis;
}

string Book::getTitle() {
   return title;
}

void Book::setTitle(string t){
    title = t;
}

/*Author Book::getWriter() {
   return writer;
}*/

double Book::getPrice() {
   return price;
}

void Book::setPrice(double p) {
    price = p;
}

int Book::getQtyInStock() {
   return qtyInStock;
}

void Book::setQtyInStock(int qis) {
   qtyInStock = qis;
}

Book::~Book(){}

int main() {

   Author sara; //the default constructor in the Author class is executed

   Book mybook("C++ for Dummies - 07 June 2022", 300,0, sara);

   cout<<endl<<"Print book details"<<endl;
   cout<<endl;
   cout<<"  Title: "<<mybook.getTitle()<<endl;
   cout<<"  Price: "<<mybook.getPrice()<<endl;
   cout<<"    Qty: "<<mybook.getQtyInStock()<<endl;
   cout<<" Author: "<<sara.getName()<<endl;
   cout<<"  Email: "<<sara.getEmail()<<endl;
   cout<<" Gender: "<<sara.getGender()<<endl;

   string namem;
   string emailm;
   char genderm;
   string titlem;
   double pricem;
   int qtyInStockm;

   cout<<endl;
   cout<<"Title of Book: ";
   cin>>titlem;
   cout<<"Price: ";
   cin>>pricem;
   cout<<"Quantity in Stock: ";
   cin>>qtyInStockm;
   cout<<"Name of Author: ";
   cin>>namem;
   cout<<"Email of Author: ";
   cin>>emailm;
   cout<<"Gender of Author: ";
   cin>>genderm;

   Author writerm;
   Book newbook(titlem,pricem,qtyInStockm,writerm);
   writerm.setName(namem);
   writerm.setEmail(emailm);
   writerm.setGender(genderm);

   cout<<endl<<"Print book details"<<endl;
   cout<<endl;
   cout<<"  Title: "<<newbook.getTitle()<<endl;
   cout<<"  Price: "<<newbook.getPrice()<<endl;
   cout<<"    Qty: "<<newbook.getQtyInStock()<<endl;
   cout<<" Author: "<<writerm.getName()<<endl;
   cout<<"  Email: "<<writerm.getEmail()<<endl;
   cout<<" Gender: "<<writerm.getGender()<<endl;

   return 0;
}