#include <iostream>
#include "bookType.h"
using namespace std;

void bookType::setTitle(string title) {
    Title = title;
}

void bookType::showTitle() {
    cout << Title << endl;
}

bool bookType::checkTitle(string title) {
    if (Title == title){
        cout << "Book Title Match: " << title << endl;
        return true;
    }
    else {
        return false;
    }
}

void bookType::setCopies(int copies) {
    Copies = copies;
}

void bookType::showCopies() {
    cout << "No. of Copies: " << Copies << endl;
}

void bookType::updateCopies(int copies) {
    setCopies(copies);
}

void bookType::setISBN(string N) {
    ISBN = N;
}

void bookType::showISBN() {
    cout << "ISBN: " << ISBN << endl;
}

bool bookType::checkISBN(string N) {
    if (ISBN == N) {
        cout << "Book ISBN Match: " << N << endl;
        return true;
    }
    else{
        return false;
    }
}

void bookType::setPub(string pub){
    Publisher = pub;
};

void bookType::showPub() {
    cout << "Publisher: " << Publisher << endl;
}

bool bookType::checkPub(string pub) {
    if (Publisher == pub) {
        cout << "Book Publisher Match: " << Publisher << endl;
        return true;
    }
    else{
        return false;
    }
}

void bookType::setYear(string year) {
    Year = year;
}

void bookType::showYear() {
    cout << "Year: " << Year << endl;
}

bool bookType::checkYear(string year) {
    if (Year == year) {
        cout << "Book Year Match: " << year << endl;
        return true;
    }
    else{
        return false;
    }
}

void bookType::setPrice(double price) {
    Price = price;
}

double bookType::showPrice() {
    cout << "Price: " << Price << endl;
    return Price;
}

bool bookType::checkPrice(double price) {
    if (Price == price) {
        cout << "Book Price Match: " << Price << endl;
        return true;
    } else {
        return false;
    }
}
void bookType::setAuthors(int x) {
    cout << "Enter Author's names: " << endl;
    for (int i=0;i < x;i++){
        getline(cin,Authors[i]);
        Asize++;
    }
}

void bookType::showAuthors() {
    for (int i = 0; i < Asize; i++) {
        if (i == (Asize - 1) && Asize != 1) {
            cout << "and " << Authors[i] << endl;
        } else {
            cout << Authors[i] << endl;
        }
    }
}

bool bookType::checkAuthors(string author) {
    for (int i = 0; i < Asize; i++){
        if (author == Authors[i]) {
            cout << "Book Author Match: " << author << endl;
            return true;
        }
    }
    return false;
}

void bookType::setSubjects(int x) {
    cout << "Enter Book Subject types: " << endl;
    for (int i=0;i < x;i++){
        getline(cin,Subjects[i]);
        Ssize++;
    }
}

void bookType::showSubjects(){
    for (int i = 0; i < Ssize; i++){
        cout << Subjects[i] << endl;
    }
}

bool bookType::checkSubjects(string subject) {
    for (int i = 0; i < Ssize; i++){
        if (subject == Subjects[i]){
            cout << "Book Subject Match: " << subject << endl;
            return true;
        }
    }
    return false;
}

void bookType::bookInfo() {
    showTitle();
    cout <<"By"<< endl;
    showAuthors();
    showISBN();
    showCopies();
    cout << "About: " << endl;
    showSubjects();
}


void Search(string info, bookType library[], int LibrarySize) {
    int x = LibrarySize;
    int output = 0;
    for (int i = 0; i < x; i++){
        if (library[i].checkTitle(info)){
            library[i].bookInfo();
            output++;
        }
        else if (library[i].checkISBN(info)){
            library[i].bookInfo();
            output++;
        }
        else if (library[i].checkAuthors(info)){
            library[i].bookInfo();
            output++;
        }
        else if (library[i].checkSubjects(info)){
            library[i].bookInfo();
            output++;
        }
        if ( i == x-1 and output == 0){
            cout << "No books were found matching the provided description.";
        }
    }
}