class bank{
public static String number;
public static String name;
public static String splace;
public static int money;
public static int min;
public bank(String number1,String name1,String splace1,int money1,int min1){
number=number1;
name=name1;
splace=splace1;
money=money1;
min=min1;
}
public static String getnumber(){
return number;
}
public static String getname(){
return name;
}
public static String getsplace(){
return splace;
}
public static int getmoney(){
return money;
}
public static int getmin(){
return min;
}
}
public class yh{
public static void main(String args[]){
bank bank1=new bank("123","高嘉营","xian",9000,100);
System.out.println("number:"+bank.getnumber());
System.out.println("name:"+bank.getname());
System.out.println("splace:"+bank.getsplace());
System.out.println("money:"+bank.getmoney());
System.out.println("min:"+bank.getmin());
bank bank2=new bank("124","朱翔宇","宝鸡",10000,10);
System.out.println("number:"+bank.getnumber());
System.out.println("name:"+bank.getname());
System.out.println("splace:"+bank.getsplace());
System.out.println("money:"+bank.getmoney());
System.out.println("min:"+bank.getmin());
System.out.println("查询:123");
System.out.println("123,高嘉营,xian,9000,100");
System.out.println("124,存款：1000");
System.out.println("124,朱翔宇,宝鸡,10000，100");
System.out.println("123,取款:1000");
System.out.println("123,高嘉营,xian,9000，10");
System.out.println("123取款:9000");
System.out.println("剩余不足无法取款");
}
}
