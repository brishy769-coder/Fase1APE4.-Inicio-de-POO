#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Cuenta {
public:
    string titular;
    double saldo;

    Cuenta(string t, double s) {
        titular = t;
        saldo = s;
    }
};

int main() {
    Cuenta c1("Cuenta A", 200);
    Cuenta c2("Cuenta B", 350);

    int meses1 = 0;

    while (c1.saldo < 500) {
        c1.saldo += 50;
        meses1++;

        cout << c1.titular << " : "
             << fixed << setprecision(2)
             << c1.saldo << endl;
    }

    cout << "Meses necesarios para Cuenta A: "
         << meses1 << endl << endl;

    int meses2 = 0;

    while (c2.saldo < 500) {
        c2.saldo += 50;
        meses2++;

        cout << c2.titular << " : "
             << fixed << setprecision(2)
             << c2.saldo << endl;
    }

    cout << "Meses necesarios para Cuenta B: "
         << meses2 << endl;

    return 0;
}
