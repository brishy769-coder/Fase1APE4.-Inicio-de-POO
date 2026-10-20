#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Estudiante {
public:
    string nombre;
    double nota1, nota2, nota3, promedio;

    Estudiante(string n, double n1, double n2, double n3) {
        nombre = n;
        nota1 = n1;
        nota2 = n2;
        nota3 = n3;
        promedio = (n1 + n2 + n3) / 3.0;
    }
};

int main() {
    Estudiante estudiantes[] = {
        Estudiante("Ana", 8, 7, 9),
        Estudiante("Luis", 6, 5, 6),
        Estudiante("Mia", 4, 3, 4),
        Estudiante("Carlos", 9, 8, 10),
        Estudiante("Sofia", 7, 7, 6)
    };

    int aprobados = 0;

    for (Estudiante e : estudiantes) {
        string estado;

        if (e.promedio >= 7) {
            estado = "Aprobado";
            aprobados++;
        } else if (e.promedio >= 5) {
            estado = "Supletorio";
        } else {
            estado = "Reprobado";
        }

        cout << e.nombre << " : "
             << fixed << setprecision(2) << e.promedio
             << " - " << estado << endl;
    }

    cout << "Total de aprobados: " << aprobados << endl;
    return 0;
}
