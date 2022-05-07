import java.util.Scanner;

public class Problema01{
    public static void main(String[] args) {
        // Variables
        int num1, num2, suma;

        try (// Crear objeto de la clase Scanner.
        Scanner teclado = new Scanner(System.in)) {
            // Ingresar Datos
            System.out.printf(
                "*******************************\n"+
                "*              SUMA           *\n"+
                "*******************************\n");

            System.out.print("Número 1: ");
            num1 = teclado.nextInt();

            System.out.print("Número 2: ");
            num2 = teclado.nextInt();
        }

        // Solución
        suma = num1 + num2;

        // Mostrar Datos
        System.out.printf(
            "\n\n**************\n"+
            "* RESPUESTA  *\n"+
            "**************\n");
        
        System.out.printf("Suma: %d", suma);
    }
}
