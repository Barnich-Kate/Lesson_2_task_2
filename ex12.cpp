#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int res;
    double  R, D, L, S;
    const double Pi = 3.14;
    cout << "Type number of math operation from 1 to 4: ";
    cin >> res;
    cout<<"Type the radius of cirkle: ";
    cin >> R;
    switch(res) {
        case 1:
        cout << "The radius is equal: "<< R << endl;
        break;
        case 2:
        cout << "The diametr is equal: " << 2 * R << endl;
        break;
        case 3:
        cout << "The lenght is equal: "<< 2 * Pi * R << endl;
        break;
        case 4:
        cout << "The square is equal: "<< Pi * pow(R,2) << endl;
        break;
    }
    
    

    return 0;
}
