import java.util.Scanner;

public class ejemplo {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int num1, num2, suma;
        num1 = 0;
        num2 = 0;

        try {
            

            System.out.print("Número 1: ");
            num1 = scan.nextInt();

            System.out.print("Número 2: ");
            num2 = scan.nextInt();
        } catch(Exception e){
            System.out.print("ERROR:");
        }

        // Solucion

        suma = num1 + num2;

        if (suma != 0){
            System.out.println("Suma: " + suma);
        }
        
    }
    
}
