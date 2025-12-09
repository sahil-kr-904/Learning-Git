import Java.util.Scanner;

public class temp{

    public static int factorial(int n){
        if(n==1){
            return 1;
        }
        return n*factorial(n-1);
    }

    public static void main(String args[]){
        System.out.println("Hello World!");
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Number:");
        int n = sc.nextInt();
        System.out.println("Factorial of "+n+"is"+factorial(n));
    }
}