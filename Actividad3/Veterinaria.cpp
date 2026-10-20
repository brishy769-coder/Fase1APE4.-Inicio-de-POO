#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Mascota {
public:
    string nombre;
    string especie;
    int edad;
    double peso;

    Mascota(string n, string e, int ed, double p) {
        nombre = n;
        especie = e;
        edad = ed;
        peso = p;
    }
};

int main() {
    Mascota m1("Luna", "Perro", 3, 12.0);
    Mascota m2("Thor", "Perro", 5, 28.0);
    Mascota m3("Mimi", "Gato", 2, 4.2);

    Mascota* mascotas[] = {&m1, &m2, &m3};

    for (Mascota* m : mascotas) {
        cout << m->nombre << " : " << m->especie << " : "
             << fixed << setprecision(1) << m->peso << " kg";

        if (m->peso > 20) {
            cout << " - Revisar peso";
        }

        cout << endl;
    }

    Mascota* m4 = &m1;
    m4->edad++;

    cout << "Edad de m1 despues del cambio: "
         << m1.edad << endl;

    // m4 y m1 apuntan a la misma mascota.
    return 0;
}
