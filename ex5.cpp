#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int res, A, B;
    cout << "Type number of math operation from 1 to 4: ";
    cin >> res;
    cout<<"Type number 1: ";
    cin >> A;
    cout<<"Type number 2 more than 0: ";
    cin >> B;
    if (B <= 0) {
        cout << "You wright wrong number, please, type new number, more than 0: ";
        cin >> B;
    }
    switch(res) {
        case 1:
        cout << "Result: "<< A+B << endl;
        break;
        case 2:
        cout << "Result: " << A-B << endl;
        break;
        case 3:
        cout << "Result: "<< A*B << endl;
        break;
        case 4:
        cout << "Result: "<< A/B << endl;
        break;
    }
    
    

    return 0;
}
