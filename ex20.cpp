#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int d, m;
    cout << "Type day: ";
    cin >> d;
    cout<<"Type month: ";
    cin >> m;
    switch (m) {
       case 1:
           if (d < 20) cout << "Capricorn" << endl;
           else cout << "Aquarius" << endl;
           break;
       case 2:
           if (d < 19) cout << "Aquarius" << endl;
           else cout << "Pisces" << endl;
           break;
       case 3:
           if (d < 21) cout << "Pisces" << endl;
           else cout << "Aries" << endl;
           break;
       case 4:
           if (d < 20) cout << "Aries" << endl;
           else cout << "Taurus" << endl;
           break;
       case 5:
           if (d < 21) cout << "Taurus" << endl;
           else cout << "Gemini" << endl;
           break;
       case 6:
           if (d < 22) cout << "Gemini" << endl;
           else cout << "Crayfish" << endl;
           break;
       case 7:
           if (d < 23) cout << "Crayfish" << endl;
           else cout << "Leo" << endl;
           break;
       case 8:
           if (d < 23) cout << "Leo" << endl;
           else cout << "Virgo" << endl;
           break;
       case 9:
           if (d < 23) cout << "Virgo" << endl;
           else cout << "Libra" << endl;
           break;
       case 10:
           if (d < 23) cout << "Libra" << endl;
           else cout << "Scorpio" << endl;
           break;
       case 11:
           if (d < 23) cout << "Scorpio" << endl;
           else cout << "Sagittarius" << endl;
           break;
       case 12:
           if (d < 22) cout << "Sagittarius" << endl;
           else cout << "Capricorn" << endl;
   }    

    return 0;
}
