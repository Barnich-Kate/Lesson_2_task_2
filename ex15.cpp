#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int suit, dignity;
    cout << "Type the suit of cards from 1 to 4: ";
    cin >> suit;
    cout<<"Type the dignity of cards from 11 to 14: ";
    cin >> dignity;
    switch(suit) {
        case 1:
        cout << "spades ";
        break;
        case 2:
        cout << "clubs ";
        break;
        case 3:
        cout << "diamonds ";
        break;
        case 4:
        cout << "hearts ";
        break;
    }
    
    switch (dignity) {
        case 11: 
        cout << "jack";
        break;
        case 12:
        cout << "queen";
        break;
        case 13:
        cout << "king";
        break;
        case 14:
        cout << "ace";
        break;
    }
    
    

    return 0;
}
