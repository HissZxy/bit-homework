class Group{
	String name;
	int num;
	
	
	//构造方法
Group(String n,int m){
	name = n;
    num = m;
}
void print(String welcome){
		System.out.printf("%s %s的%d位同学们%n",welcome,name,num);
	}
}
public class group{
	public static void main(String[] args){
		Group group=new Group("java10班",50);
		group.print("欢迎来到比特科技,");
	}
}
