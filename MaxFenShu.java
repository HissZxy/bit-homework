
import java.util.Arrays;
import java.util.Scanner;

class MaxFenShu{

    public static void main(String[] args) {
        Scanner keyin = new Scanner(System.in);
        while(keyin.hasNextLine()){
            int action, num  ;  //表示操作数和学生数
            String putIn = keyin.nextLine() ;
            action = getAction(putIn);
            num = getNum(putIn);
            int data[] = new int [num] ;
            putIn = keyin.nextLine() ;
            LogIn(putIn,data);
            int result[] = new int [action];
            for(int x = 0 ; x < action ; x ++){
                putIn = keyin.nextLine();
                String all [] = putIn.split(" ");
                if(all[0].equals("Q")){
                    result [x] = compare(data,Integer.parseInt(all[1]),Integer.parseInt(all[2]));
                }else{
                    result[x] = -1 ;
                    data[Integer.parseInt(all[1]) - 1] = Integer.parseInt(all[2]) ;
                }
            }
            for(int x = 0 ; x < result.length ; x ++){
                if(result[x] >= 0){
                    System.out.println(result[x]);
                }
            }}
    }

    public static int compare(int[] data, int x, int y) {
        int all[] = new int [y - x + 1] ;
        int n = 0 ;
        for(int z = x - 1 ; z < y ;z ++){
            all[n] = data [z] ;
            n ++ ;
        }
        Arrays.sort(all);
        return all[all.length - 1] ;
    }
    public static void LogIn(String putIn, int[] data) {
        String all[] = putIn.split(" ");
        for(int x = 0 ; x < data.length ; x ++){
            data[x] = Integer.parseInt(all[x]) ;
        }
    }
    public static int getAction(String str){
        String all[] = str.split(" ");
        return Integer.parseInt(all[1]) ;
    }
    public static int getNum(String str){
        String all[] = str.split(" ");
        return Integer.parseInt(all[0]) ;
    }

}