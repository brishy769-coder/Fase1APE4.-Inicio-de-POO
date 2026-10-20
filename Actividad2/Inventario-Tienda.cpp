#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Producto {
public:
    string nombre;
    double precio;
    int stock;

    Producto(string n, double p, int s) {
        nombre = n;
        precio = p;
        stock = s;
    }
};

int main() {
    Producto productos[] = {
        Producto("Arroz", 1.25, 10),
        Producto("Leche", 0.95, 6),
        Producto("Aceite", 3.50, 4),
        Producto("Azucar", 1.10, 8)
    };

    productos[0].stock -= 3;
    productos[1].stock -= 3;

    double total = 0;

    for (Producto p : productos) {
        cout << p.nombre << " : $"
             << fixed << setprecision(2) << p.precio
             << " - Stock: " << p.stock;

        if (p.stock < 5) {
            cout << " - Reponer";
        }

        cout << endl;
        total += p.precio * p.stock;
    }

    cout << "Valor total del inventario: $"
         << fixed << setprecision(2) << total << endl;

    return 0;
}
