#include <iostream>
using namespace std;

class memberType{
public:
    void setName(string name);
    void changeName(string name);
    void showName();
    void setID(string ID);
    void changeID(string ID);
    void showID();
    void setBooks(int books);
    void updateBooks(int books);
    void changeBooks(int books);
    int showBooks();
    void setSpent(double spent);
    void updateSpent(double spent);
    void changeSpent(double spent);
    double showSpent();
    double Spent10 = 0;
private:
    string Name;
    string MemberID;
    int booksBought = 0;
    double Spent = 0;
};

