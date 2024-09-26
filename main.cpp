#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {
    string currency_name = "";
    double result = 0;
    double currency_value = 0;
    cout << "1. Valiutos kurso palyginimas su kita valiuta. " << endl;
    cout << "2. Galimybė įsigyti valiutos. " << endl;
    cout << "3. Galimybė parduoti valiutą. " << endl;

    cout << "Įrašykite jus dominančios opcijos numerį: " << endl;
    int menu_option;
    cin >> menu_option;
    switch (menu_option) {
        case 1:
            cout << "Pasirinkite kokiu būdu norite keisti valiutą: " << endl;
            cout << "1. EUR -> Kita valiuta " << endl;
            cout << "2. Kita valiuta -> EUR " << endl;
            int change_option;
            cin >> change_option;
            if (change_option == 1) {
                cout << "Pasirinkite valiutą į kurią norite konvertuoti: " << endl;
                cout << "1. GBP " << endl;
                cout << "2. USD " << endl;
                cout << "3. INR " << endl;
                int currency_type;
                cin >> currency_type;

                cout << "Įrašykite sumą (EUR): " << endl;
                cin >> currency_value;

                if (currency_type == 1) {
                    result = 0.8322 * currency_value;
                    currency_name = "GBP";
                } else if (currency_type == 2) {
                    result = 1.11 * currency_value;
                    currency_name = "USD";
                } else {
                    result = 93.1510 * currency_value;
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
                cin >> currency_type;

                string currency_name;
                if (currency_type == 1) {
                    currency_name = "GBP";
                } else if (currency_type == 2) {
                    currency_name = "USD";
                } else {
                    currency_name = "INR";
                }

                cout << "Įrašykite sumą (" << currency_name << "): " << endl;
                double currency_value;
                cin >> currency_value;

                double result = 0;

                if (currency_type == 1) {
                    result = currency_value / 0.8322;
                } else if (currency_type == 2) {
                    result = currency_value / 1.11;
                } else {
                    result = currency_value / 93.1510;
                }

                cout << fixed << setprecision(2) << currency_value << " " << currency_name << " -> "
                        << fixed << setprecision(2) << result << " EUR" << endl;
            }
            break;
        case 2:
            cout << "Pasirinkite kokią valiutą norite įsigyti: " << endl;
            cout << "1. GBP" << endl;
            cout << "2. USD" << endl;
            cout << "3. INR" << endl;
            int currency_type;
            cin >> currency_type;
            if(currency_type== 1) {
                currency_name = "GBP";
                cout<<"Įrašykite sumą kuria norite įsigyti ("<<currency_name<<") :"<<endl;
                cin >> currency_value;
                result = currency_value*1.20;
            }
            else if(currency_type == 2) {
                currency_name = "USD";
                cout<<"Įrašykite sumą kuria norite įsigyti ("<<currency_name<<") :"<<endl;
                cin >> currency_value;
                result = currency_value*0.91;
            }
            else {
                currency_name = "INR";
                cout<<"Įrašykite sumą kuria norite įsigyti ("<<currency_name<<") :"<<endl;
                cin >> currency_value;
                result = currency_value*0.01;
            }
            cout << "Sveikiname, įsigyjote:" << fixed << setprecision(2) << currency_value << " " << currency_name
            << " už " << fixed << setprecision(2) << result << " EUR" << endl;
            break;
        case 3:
            cout << "Pasirinkite kokią valiutą norite parduoti: " << endl;
            cout << "1. GBP" << endl;
            cout << "2. USD" << endl;
            cout << "3. INR" << endl;
            int currency_type2;
            cin >> currency_type2;
            if(currency_type2== 1) {
                currency_name = "GBP";
                cout<<"Įrašykite sumą kuria norite parduoti ("<<currency_name<<") :"<<endl;
                cin >> currency_value;
                result = currency_value*1.18;
            }
            else if(currency_type2 == 2) {
                currency_name = "USD";
                cout<<"Įrašykite sumą kuria norite parduoti ("<<currency_name<<") :"<<endl;
                cin >> currency_value;
                result = currency_value*0.88;
            }
            else {
                currency_name = "INR";
                cout<<"Įrašykite sumą kuria norite parduoti ("<<currency_name<<") :"<<endl;
                cin >> currency_value;
                result = currency_value*0.01;
            }
            cout << "Sveikiname, pardavete:" << fixed << setprecision(2) << currency_value << " " << currency_name
            << " už " << fixed << setprecision(2) << result << " EUR" << endl;
            break;
        default:
            cout << "Neteisingas pasirinkimas. Bandykite dar kartą." << endl;
            break;
    }
    return 0;
}
