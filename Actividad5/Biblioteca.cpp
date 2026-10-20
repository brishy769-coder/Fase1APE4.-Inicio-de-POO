#include <iostream>
#include <string>
using namespace std;

class Libro {
public:
    string titulo;
    string autor;
    bool disponible;

    Libro(string t, string a) {
        titulo = t;
        autor = a;
        disponible = true;
    }
};

class Socio {
public:
    string nombre;
    int librosPrestados;

    Socio(string n) {
        nombre = n;
        librosPrestados = 0;
    }
};

int main() {
    Libro l1("Cien anos de soledad", "Gabriel Garcia Marquez");
    Libro l2("Don Quijote", "Miguel de Cervantes");
    Libro l3("El principito", "Antoine de Saint-Exupery");
    Libro l4("La Odisea", "Homero");

    Libro* libros[] = {&l1, &l2, &l3, &l4};

    Socio s1("Ana");
    Socio s2("Luis");

    l1.disponible = false;
    s1.librosPrestados++;

    l2.disponible = false;
    s1.librosPrestados++;

    l3.disponible = false;
    s2.librosPrestados++;

    int disponibles = 0;

    for (Libro* libro : libros) {
        string estado = libro->disponible
                ? "Disponible" : "Prestado";

        cout << libro->titulo << " : " << estado << endl;

        if (libro->disponible) {
            disponibles++;
        }
    }

    cout << s1.nombre << " : " << s1.librosPrestados << endl;
    cout << s2.nombre << " : " << s2.librosPrestados << endl;
    cout << "Libros disponibles: " << disponibles << endl;

    return 0;
}
