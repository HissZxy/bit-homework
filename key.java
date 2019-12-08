import java.util.Scanner;
 
public class Main{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        while(sc.hasNext()){
            int a=sc.nextInt();
            int b=a*a;
 
            if(a<10){
                if((b-a)%10==0){
                    System.out.println("Yes!");
                }
                else System.out.println("No!");
            }
            //a是两位数的话，最后除以100
            else{
                if((b-a)%100==0)
                    System.out.println("Yes!");
                else
                     System.out.println("No!");
            }
        }
    }
}
