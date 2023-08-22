import java.text.DecimalFormat;
import java.util.Scanner;
import java.lang.Math;
import java.text.DecimalFormat;
public class beecrowd_1002 {
    public static void main(String[] args){
        Scanner dado = new Scanner(System.in);
        double a, raio, pi = 3.14159;
        raio = dado.nextDouble();
        a = Math.pow(raio, 2.0) * pi;
        DecimalFormat deci = new DecimalFormat("0.0000");
        System.out.print("A=");
        System.out.println(deci.format(a));
    }
}
