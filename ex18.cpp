#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n1, n2, n3, n4;
    cout << "Type hundreds from 100 to 900: ";
    cin >> n1;
    cout<<"Type dozens from 20 to 90: ";
    cin >> n2;
    cout << "Type dozens from 11 to 19: ";
    cin >> n4;
    cout<<"Type units from 1 to 9: ";
    cin >> n3;
    switch(n1) {
        case 100:
        cout << "one hundred ";
        break;
        case 200:
        cout << "two hundred ";
        break;
        case 300:
        cout << "three hundred ";
        break;
        case 400:
        cout << "four hundred ";
        break;
        case 500:
        cout << "five hundred ";
        break;
        case 600:
        cout << "six hundred ";
        break;
        case 700:
        cout << "seven hundred ";
        break;
        case 800:
        cout << "eight hundred ";
        break;
        case 900:
        cout << "nine hundred ";
        break;
    }
    
    switch (n2) {
        break;
        case 20:
        cout << "twenty ";
        break;
        case 30:
        cout << "thirty ";
        break;
        case 40:
        cout << "forty ";
        break;
        case 50: 
        cout << "fifty";
        break;
        case 60:
        cout << "sixty";
        break;
        case 70:
        cout << "seventy";
        break;
        case 80:
        cout << "eighty";
        break;
        case 90: 
        cout << "ninety";
        break;
    }
    
    switch (n4) {
        case 11:
        cout << "eleven";
        break;
        case 12:
        cout << "twelve";
        break;
        case 13:
        cout << "thirteen";
        break;
        case 14:
        cout << "fourteen";
        break;
        case 15:
        cout << "fifteen";
        break;
        case 16:
        cout << "sixteen";
        break;
        case 17:
        cout << "seventeen";
        break;
        case 18:
        cout << "eighteen";
        break;
        case 19:
        cout << "nineteen";
        break;
        
    }
    
    switch (n3) {
        case 1:
        cout << "one";
        break;
        case 2: 
        cout << "two";
        break;
        case 3: 
        cout << "three";
        break;
        case 4: 
        cout << "four";
        break;
        case 5: 
        cout << "five";
        break;
        case 6: 
        cout << "six";
        break;
        case 7: 
        cout << "seven";
        break;
        case 8: 
        cout << "eight";
        break;
        case 9: 
        cout << "nine";
        break;
    }
    
    

    return 0;
}
