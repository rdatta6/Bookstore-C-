#include <iostream>
#include "memberType.h"
#include  "bookType.h"
#include <stdlib.h>
using namespace std;

class Customer{
public:
    string Name;
    int booksBought = 0;
    double Spent = 0;
};

int main() {
    int noCustomers;
    int noMembers;
    bookType book1;
    book1.setTitle("Harry Potter and The Sorcerer's Stone");
    book1.setAuthors(1);
    book1.setISBN("4563219");
    book1.setCopies(10);
    book1.setPrice(15.99);
    book1.setPub("Penguin");
    book1.setYear("1997");
    book1.setSubjects(3);
    bookType book2;
    book2.setTitle("Absalom, Absalom!");
    book2.setAuthors(1);
    book2.setISBN("4563220");
    book2.setCopies(9);
    book2.setPrice(18.99);
    book2.setPub("Penguin");
    book2.setYear("1942");
    book2.setSubjects(3);
    bookType book3;
    book3.setTitle("A Game of Thrones");
    book3.setAuthors(1);
    book3.setISBN("4563221");
    book3.setCopies(11);
    book3.setPrice(24.99);
    book3.setPub("Random House");
    book3.setYear("1991");
    book3.setSubjects(3);
    bookType library[3] = {book1,book2,book3}; // initialize book store
    cout << "Welcome to the book Store, please indicate what kind of and how many customers there are: " << endl;
    cout << "Number of Customers: ";
    cin >> noCustomers;
    cout << endl;
    cout << "Number of Members: ";
    cin >> noMembers;
    memberType *members = new memberType[noMembers];
    Customer *customers = new Customer[noCustomers]; //set number of members and customers
    for (int i = 0; i < noCustomers;i++){
        cout << " Enter Customer Name: " << endl;
        cin >> customers[i].Name;
    }
    for (int i =0; i < noMembers; i++){
        string Name;
        string MemberID;
        cout << "Enter Member Name" << endl;
        cin >> Name;
        members[i].setName(Name);
        cout << "Enter Member ID: " << endl;
        cin >> MemberID;
        members[i].setID(MemberID);
        members[i].updateSpent(-10);
    } //obtain member and customer data
    while ((library[0].Copies + library[1].Copies + library[2].Copies) > 0) { //while bookstore is not empty
        int v = rand() % 3; //randomly select a book
        if (library[v].Copies > 0) { //check book is in stock
        library[v].Copies = (library[v].Copies - 1); //update copies
            int v1 = rand() % 2; //randomly select member(1) or customer (0)
            if (v1 == 0) {
                int v2 = rand() % noCustomers;
                customers[v2].booksBought += 1;
                customers[v2].Spent += library[v].showPrice(); //if customer, normal transaction
            } else {
                int v3 = rand() % noMembers;
                members[v3].updateBooks(1);
                if (members[v3].showBooks() > 10) { //if more than 10 books bought recently
                    double x = members[v3].Spent10 / 10;
                    members[v3].updateSpent(library[v].showPrice() - x); //apply discount
                    members[v3].Spent10 = 0;//reset number of books bought and amount spent on last 10
                    members[v3].setBooks(0);
                } else {
                    members[v3].updateSpent(library[v].showPrice() * 0.95); //else apply discount as normal
                    members[v3].Spent10 += library[v].showPrice() * 0.95;//update both overall spent and last 10 spent
                }
            }
        }
    }
}

/*/Users/rohandatta/CLionProjects/Lab2C/cmake-build-debug/Lab2C
Enter Author's names:
J.k. Rowling
Enter Book Subject types:
Adventure
Action
Fantasy
Enter Author's names:
William Faulkner
Enter Book Subject types:
Drama
Tragedy
Southern
Enter Author's names:
George R.R. Martin
Enter Book Subject types:
Fantasy
Action
Political
Welcome to the book Store, please indicate what kind of and how many customers there are:
Number of Customers: 3

Number of Members: 2
 Enter Customer Name:
Mary
 Enter Customer Name:
Jack
 Enter Customer Name:
Joe
Enter Member Name
Sue
Enter Member ID:
6134
Enter Member Name
Delilah
Enter Member ID:
5141
Number of books bought: 1
Price: 18.99
Price: 18.99
Price: 24.99
Price: 15.99
Price: 18.99
Price: 15.99
Number of books bought: 2
Price: 24.99
Price: 24.99
Price: 18.99
Number of books bought: 3
Price: 18.99
Price: 18.99
Number of books bought: 4
Price: 18.99
Price: 18.99
Price: 15.99
Price: 18.99
Price: 18.99
Number of books bought: 5
Price: 18.99
Price: 18.99
Number of books bought: 1
Price: 15.99
Price: 15.99
Price: 18.99
Price: 24.99
Number of books bought: 6
Price: 15.99
Price: 15.99
Price: 24.99
Price: 24.99
Number of books bought: 2
Price: 15.99
Price: 15.99
Price: 15.99
Price: 15.99
Price: 15.99
Number of books bought: 7
Price: 15.99
Price: 15.99
Number of books bought: 8
Price: 24.99
Price: 24.99
Number of books bought: 3
Price: 24.99
Price: 24.99
Number of books bought: 4
Price: 24.99
Price: 24.99
Price: 24.99
Price: 24.99
Price: 24.99*/

