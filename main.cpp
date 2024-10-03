#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {
    string currency_name = "";
    double result = 0;
    double currency_value = 0;

    // gbp ; usd ; inr
    double currency_main[4] = {0, 0.8329, 1.1081, 92.9790};
    double currency_buy[4] = {0, 1.19, 0.91, 0.01};
    double currency_sell[4] = {0, 1.18, 0.89, 0.01};
    string currency_names[4] = {"", "GBP", "USD", "INR"};
    cout << "1. Valiutos kurso palyginimas su kita valiuta. " << endl;
    cout << "2. Galimybe isigyti valiutos. " << endl;
    cout << "3. Galimybe parduoti valiuta. " << endl;

    cout << "Irasykite jus dominancios opcijos numeri: " << endl;
    int menu_option;
    cin >> menu_option;
    switch (menu_option) {
        case 1:
            cout << "Pasirinkite kokiu budu norite keisti valiuta: " << endl;
            cout << "1. EUR -> Kita valiuta " << endl;
            cout << "2. Kita valiuta -> EUR " << endl;
            int change_option;
            cin >> change_option;
            if (change_option == 1) {
                cout << "Pasirinkite valiuta i kuria norite konvertuoti: " << endl;
                cout << "1. GBP " << endl;
                cout << "2. USD " << endl;
                cout << "3. INR " << endl;
                int currency_type;
                cin >> currency_type;

                cout << "Irasykite suma (EUR): " << endl;
                cin >> currency_value;

                result = currency_main[currency_type] * currency_value;
                currency_name = currency_names[currency_type];

                cout << fixed << setprecision(2) << currency_value << " EUR -> "
                        << fixed << setprecision(2) << result << " " << currency_name << endl;
            }
            else {
                cout << "Pasirinkite valiuta is kurios norite konvertuoti: " << endl;
                cout << "1. GBP " << endl;
                cout << "2. USD " << endl;
                cout << "3. INR " << endl;
                int currency_type;
                cin >> currency_type;

                string currency_name;
                currency_name = currency_names[currency_type];

                cout << "Irasykite suma (" << currency_name << "): " << endl;
                double currency_value;
                cin >> currency_value;

                double result = 0;
                result =  currency_value / currency_main[currency_type];

                cout << fixed << setprecision(2) << currency_value << " " << currency_name << " -> "
                        << fixed << setprecision(2) << result << " EUR" << endl;
            }
            break;
        case 2:
            cout << "Pasirinkite kokia valiutą norite įsigyti: " << endl;
            cout << "1. GBP" << endl;
            cout << "2. USD" << endl;
            cout << "3. INR" << endl;
            int currency_type;
            cin >> currency_type;
            currency_name = currency_names[currency_type];


            cout<<"Irasykite suma kuria norite isigyti ("<<currency_name<<") :"<<endl;
            cin >> currency_value;
            result = currency_buy[currency_type] * currency_value;

            cout << "Sveikiname, isigyjote:" << fixed << setprecision(2) << currency_value << " " << currency_name
            << " uz " << fixed << setprecision(2) << result << " EUR" << endl;
            break;
        case 3:
            cout << "Pasirinkite kokia valiuta norite parduoti: " << endl;
            cout << "1. GBP" << endl;
            cout << "2. USD" << endl;
            cout << "3. INR" << endl;
            int currency_type2;
            cin >> currency_type2;
            currency_name = currency_names[currency_type2];

            cout<<"Irasykite suma kuria norite parduoti ("<<currency_name<<") :"<<endl;
            cin >> currency_value;
            result = currency_sell[currency_type2] * currency_value;

            cout << "Sveikiname, pardavete:" << fixed << setprecision(2) << currency_value << " " << currency_name
            << " uz " << fixed << setprecision(2) << result << " EUR" << endl;
            break;
        default:
            cout << "Neteisingas pasirinkimas. Bandykite dar kartą." << endl;
            break;
    }
    return 0;
}
