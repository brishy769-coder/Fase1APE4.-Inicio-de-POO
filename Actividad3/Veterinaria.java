class Mascota {
    String nombre;
    String especie;
    int edad;
    double peso;

    Mascota(String nombre, String especie, int edad, double peso) {
        this.nombre = nombre;
        this.especie = especie;
        this.edad = edad;
        this.peso = peso;
    }
}

public class Main {
    public static void main(String[] args) {
        Mascota m1 = new Mascota("Luna", "Perro", 3, 12.0);
        Mascota m2 = new Mascota("Thor", "Perro", 5, 28.0);
        Mascota m3 = new Mascota("Mimi", "Gato", 2, 4.2);

        Mascota[] mascotas = {m1, m2, m3};

        for (Mascota m : mascotas) {
            System.out.printf("%s : %s : %.1f kg",
                    m.nombre, m.especie, m.peso);

            if (m.peso > 20) {
                System.out.print(" - Revisar peso");
            }

            System.out.println();
        }

        Mascota m4 = m1;
        m4.edad++;

        System.out.println("Edad de m1 despues del cambio: " + m1.edad);

        // m4 y m1 hacen referencia al mismo objeto.
    }
}
