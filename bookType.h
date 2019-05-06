#include <string>
using namespace std;

class bookType{
public:
    void setTitle(string title);
    void showTitle();
    bool checkTitle(string title);
    void setCopies(int copies);
    void updateCopies(int copies);
    void showCopies();
    void setISBN(string N);
    void showISBN();
    bool checkISBN(string N);
    void setPub(string pub);
    void showPub();
    bool checkPub(string pub);
    void setYear(string year);
    void showYear();
    bool checkYear(string year);
    void setPrice(double price);
    double showPrice();
    bool checkPrice(double price);
    void setAuthors(int x);
    void showAuthors();
    bool checkAuthors(string author);
    void setSubjects(int x);
    void showSubjects();
    bool checkSubjects(string subject);
    void bookInfo();
    int Copies;

private:
    string Title;
    string Publisher;
    string Year;
    double Price;
    string ISBN;
    string Authors[4];
    string Subjects[6];
    int Asize = 0;
    int Ssize = 0;
};
