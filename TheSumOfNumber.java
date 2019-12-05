import java.util.Scanner;
public class Main
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = a*a;
        System.out.print(add(a));
        System.out.print(" " + add(b));

    }
    public static int add(int a)
    {
        int sum=0;
        int c=0;
        String b="";
        String s = String.valueOf(a);
        for(int i=0; i<=s.length()-1;i++)
        {
            b = s.substring(i,i+1);
            c = Integer.parseInt(b);
            sum = sum + c;
        }
        return sum;
    }
}
//看了前面的回答，修改了一下
import java.util.Scanner;
public class Main
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = a*a;
        System.out.print(add1(a));
        System.out.print(" " + add1(b));
    }
    public static int add1(int a)
    {
        int sum=0;

        for(;a != 0;)
        {
            sum = sum + a % 10;
            a = a/10;
        }
        return sum;
    }
}
