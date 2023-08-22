import java.util.Scanner;

public class beecrowd_1004 {
    public static void main(String[] args){
        Scanner dado = new Scanner(System.in);
        int a, b;
        a = dado.nextInt();
        b = dado.nextInt();
        a *= b;
        System.out.println("PROD = " + a);
    }
}
