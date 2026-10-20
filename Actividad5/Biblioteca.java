class Libro {
    String titulo;
    String autor;
    boolean disponible;

    Libro(String titulo, String autor) {
        this.titulo = titulo;
        this.autor = autor;
        disponible = true;
    }
}

class Socio {
    String nombre;
    int librosPrestados;

    Socio(String nombre) {
        this.nombre = nombre;
        librosPrestados = 0;
    }
}

public class Main {
    public static void main(String[] args) {
        Libro l1 = new Libro("Cien anos de soledad", "Gabriel Garcia Marquez");
        Libro l2 = new Libro("Don Quijote", "Miguel de Cervantes");
        Libro l3 = new Libro("El principito", "Antoine de Saint-Exupery");
        Libro l4 = new Libro("La Odisea", "Homero");

        Libro[] libros = {l1, l2, l3, l4};

        Socio s1 = new Socio("Ana");
        Socio s2 = new Socio("Luis");

        l1.disponible = false;
        s1.librosPrestados++;

        l2.disponible = false;
        s1.librosPrestados++;

        l3.disponible = false;
        s2.librosPrestados++;

        int disponibles = 0;

        for (Libro libro : libros) {
            String estado = libro.disponible
                    ? "Disponible" : "Prestado";

            System.out.println(libro.titulo + " : " + estado);

            if (libro.disponible) {
                disponibles++;
            }
        }

        System.out.println(s1.nombre + " : " + s1.librosPrestados);
        System.out.println(s2.nombre + " : " + s2.librosPrestados);
        System.out.println("Libros disponibles: " + disponibles);
    }
}
