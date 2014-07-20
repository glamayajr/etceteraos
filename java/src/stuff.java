import java.util.Scanner;

class stuff{
	public static void main(String args[]) {
		System.out.println("Hello world!");
		Scanner wow = new Scanner(System.in);
		int num1;
		int i = 0;
		num1 = 1;
		while(i<10) {
			System.out.println(i);
			i++;
		}
		switch(num1) {
		case 1:
			System.out.println("stuff");
			break;
		}
		if(num1 == 1 || num1 != 10){
			System.out.println("num1 is a 9.");
		}else{
			System.out.println("num1 is not a 9.");
		}
		amazing argsnstuff = new amazing();
		System.out.println(num1);
		String arg = wow.nextLine();
		
		argsnstuff.argmessage(arg);
		
		wow.close();
		// classname objectvar     classname()
		amazing amazingObject = new amazing();
		// objectvar.methodname
		amazingObject.message();
	}
}