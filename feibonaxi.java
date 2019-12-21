
import java.util.Scanner;
    public class Main{
        public static void main(String[] args){
            Scanner in = new Scanner(System.in);
            int n = in.nextInt();
            int a = 0;
            int b = 1;
            int tmp = 0;
            while(true){
                tmp = b+a;
                a = b;
                b = tmp;
                if(tmp>n)
                    break;
            }
            System.out.print((tmp-n)>(n-a)?(n-a):(tmp-n));
        }
    }


