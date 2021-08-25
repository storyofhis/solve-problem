import java.util.Scanner;
public class Main {
    public static void main(String args[]){
        String a1 = null, a2 = null;
        int num1 = 0, num2 = 0;
        Scanner scn= new Scanner(System.in);
        a1 = scn.next();
        char[] karakter1 = a1.toCharArray();
        for (char e : karakter1)
        {
            num1 += (int)e;
        }
        Scanner scn2 = new Scanner(System.in);
        a2 = scn2.next();
        char[] karakter2 = a2.toCharArray();
        for (char e : karakter2){
            num2 += (int)e;
        }
        if (num1 != num2){
            System.out.println("Yes");
        }else {
            System.out.println("No");
        }
    }
}