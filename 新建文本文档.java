链接：https://www.nowcoder.com/questionTerminal/069e2130430c41229ab25e47fa0949a6
来源：牛客网

import java.util.*;
public class FindKey {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] array = new int[n];
        for (int i = 0; i < n; i++) {
            array[i] = sc.nextInt();
        }
        int x = sc.nextInt();
        findKey(array, x);
    }
 
    public static void findKey(int[] s, int k) {
        for (int j = 0; j < s.length; j++) {
            if (s[j] == k) {
                System.out.println(j);
                break;
            }
            if (j == s.length-1) {
                System.out.println("-1");
            }
 
        }
    }
}