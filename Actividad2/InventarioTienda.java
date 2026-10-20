class Producto {
    String nombre;
    double precio;
    int stock;

    Producto(String nombre, double precio, int stock) {
        this.nombre = nombre;
        this.precio = precio;
        this.stock = stock;
    }
}

public class Main {
    public static void main(String[] args) {
        Producto[] productos = {
            new Producto("Arroz", 1.25, 10),
            new Producto("Leche", 0.95, 6),
            new Producto("Aceite", 3.50, 4),
            new Producto("Azucar", 1.10, 8)
        };

        productos[0].stock -= 3;
        productos[1].stock -= 3;

        double total = 0;

        for (Producto p : productos) {
            System.out.printf("%s : $%.2f - Stock: %d",
                    p.nombre, p.precio, p.stock);

            if (p.stock < 5) {
                System.out.print(" - Reponer");
            }

            System.out.println();
            total += p.precio * p.stock;
        }

        System.out.printf("Valor total del inventario: $%.2f%n", total);
    }
}
