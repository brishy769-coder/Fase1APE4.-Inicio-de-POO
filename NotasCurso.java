class Estudiante {
    String nombre;
    double nota1, nota2, nota3, promedio;

    Estudiante(String nombre, double nota1, double nota2, double nota3) {
        this.nombre = nombre;
        this.nota1 = nota1;
        this.nota2 = nota2;
        this.nota3 = nota3;
        promedio = (nota1 + nota2 + nota3) / 3.0;
    }
}

public class Main {
    public static void main(String[] args) {
        Estudiante[] estudiantes = {
            new Estudiante("Ana", 8, 7, 9),
            new Estudiante("Luis", 6, 5, 6),
            new Estudiante("Mia", 4, 3, 4),
            new Estudiante("Carlos", 9, 8, 10),
            new Estudiante("Sofia", 7, 7, 6)
        };

        int aprobados = 0;

        for (Estudiante e : estudiantes) {
            String estado;

            if (e.promedio >= 7) {
                estado = "Aprobado";
                aprobados++;
            } else if (e.promedio >= 5) {
                estado = "Supletorio";
            } else {
                estado = "Reprobado";
            }

            System.out.printf("%s : %.2f - %s%n",
                    e.nombre, e.promedio, estado);
        }

        System.out.println("Total de aprobados: " + aprobados);
    }
}
