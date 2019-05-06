#include <iostream>
#include "memberType.h"

using namespace std;

void memberType::setName(string name) {
    Name = name;
}

void memberType::changeName(string name) {
    setName(name);
}

void memberType::showName() {
    cout << "Name: " << Name << endl;
}

void memberType::setID(string ID) {
    MemberID = ID;
}

void memberType::changeID(string ID) {
    setID(ID);
}

void memberType::showID(){
    cout << "ID: " << MemberID << endl;
}

void memberType::setBooks(int books) {
    booksBought = books;
}

void memberType::changeBooks(int books) {
    setBooks(books);
}

void memberType::updateBooks(int books) {
    booksBought += books;
}

int memberType::showBooks() {
    cout << "Number of books bought: " << booksBought << endl;
    return booksBought;
}


void memberType::setSpent(double spent) {
    Spent = spent;
}

void memberType::changeSpent(double spent) {
    setSpent(spent);
}

void memberType::updateSpent(double spent) {
    Spent += spent;
}

double memberType::showSpent() {
    cout << "Amount Spent: " << Spent << endl;
    return Spent;
}
