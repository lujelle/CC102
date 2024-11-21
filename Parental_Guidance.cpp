#include <iostream>
using namespace std;
int main()
{
    int age;
    double money;
    bool parent;
    string toPrintshow, toPrintMoney;
    cout << "Enter age";
    cin >> age;
    if(age<13) {
        cout << "with parent? " ;
        cin >> parent;
        if(parent)
            toPrintshow = "G & PG show.";
        else
            toPrintshow = "G show.";
    }else if(age <16) {
         cout <<"with parent? ";
         cin >> parent;
        if(parent) {
           toPrintshow = "G, PG,& R show.";
    }else toPrintshow ="G & PG show.";
    }else toPrintshow = "G,PG, & R show.";
        cout << "Enter money:";
        cin >> money;
        if(money < 7.5)
            toPrintMoney ="Not enough money";
        else if(money<10.5)
            toPrintMoney="you can go to matinee show.";
        else toPrintMoney = "can go to matinee & evening show.";
        cout << toPrintshow << endl;
        cout << toPrintMoney << endl;
    return 0;
}