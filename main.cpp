#include <iostream>
#include <conio.h>
#include <iomanip>

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
            cout << "Pasirinkite kokiu būdu norite keisti valiutą: " << endl;
            cout << "1. EUR -> Kita valiuta " << endl;
            cout << "2. Kita valiuta -> EUR " << endl;
            int change_option;
            cin>>change_option;
            if(change_option == 1) {
                cout << "Pasirinkite valiutą į kurią norite konvertuoti: " << endl;
                cout << "1. GBP " << endl;
                cout << "2. USD " << endl;
                cout << "3. INR " << endl;
                int currency_type;
                cin>>currency_type;

                cout<<"Įrašykite sumą (EUR): "<<endl;
                double currency_value;
                cin>>currency_value;

                double result = 0;
                string currency_name;

                if(currency_type == 1) {
                    result = 0.8322*currency_value;
                    currency_name = "GBP";
                }
                else if(currency_type == 2) {
                    result = 1.11*currency_value;
                    currency_name = "USD";
                }
                else {
                    result = 93.1510*currency_value;
                    currency_name = "INR";
                }
                cout << fixed << setprecision(2) << currency_value << " EUR -> "
                << fixed << setprecision(2) << result << " " << currency_name << endl;
            }
            else {
                cout << "Pasirinkite valiutą iš kurios norite konvertuoti: " << endl;
                cout << "1. GBP " << endl;
                cout << "2. USD " << endl;
                cout << "3. INR " << endl;
                int currency_type;
                cin>>currency_type;

                string currency_name;
                if(currency_type == 1) {
                    currency_name = "GBP";
                }
                else if(currency_type == 2) {
                    currency_name = "USD";
                }
                else {
                    currency_name = "INR";
                }

                cout<<"Įrašykite sumą ("<<currency_name<<"): "<<endl;
                double currency_value;
                cin>>currency_value;

                double result = 0;

                if(currency_type == 1) {
                    result = currency_value/0.8322;
                }
                else if(currency_type == 2) {
                    result = currency_value/1.11;
                }
                else {
                    result = currency_value/93.1510;
                }

                cout << fixed << setprecision(2) << currency_value << " " << currency_name << " -> "
                << fixed << setprecision(2) << result << " EUR"<< endl;
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
