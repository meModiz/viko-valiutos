#include <iostream>
using namespace std;
int main() {
    cout << "1. Valiutos kurso palyginimas su kita valiuta. " << endl;
    cout << "1. Galimybė įsigyti valiutos. " << endl;
    cout << "1. Galimybė parduoti valiutą. " << endl;

    cout << "Įrašykite jus dominančios opcijos numerį: " << endl;
    int menu_option;
    cin>>menu_option;
    switch(menu_option) {
        case 1:
            clrscr();
            cout << "Pasirinkite kokiu būdu norite keisti valiutą: " << endl;
            cout << "1. EUR -> Kita valiuta " << endl;
            cout << "2. Kita valiuta -> EUR " << endl;
            int change_value;
            cin>>change_value;
            if(change_value == 1) {
                cout << "Pasirinkite sumą į kuria norit konvertuoti: " << endl;
                
            }
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            break;
    }
    return 0;
}
