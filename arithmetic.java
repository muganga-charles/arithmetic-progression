import java.util.Scanner;

/**
 * arithmetic
 */
public class arithmetic {

    public static void main(String[] args) {
        //a program that accepts the starting age from a group of people value,common diffrence and the number of terms and prints the series of the series.
        int start, diff, n;
        Scanner entry = new Scanner(System.in);
        System.out.println("Enter the starting age: ");
        start = entry.nextInt();
        System.out.println("Enter the common diffrence: ");
        diff = entry.nextInt();
        System.out.println("Enter the number of people: ");
        n = entry.nextInt();
        // the ages of the people are stored in an array
        int[] ages = new int[n];
        for (int i = 0; i < n; i++) {
            ages[i] = start + i * diff;
            System.out.printf( "The ages of %d is %d\n",i+1,ages[i]);
        }
    
        
        

    }
}