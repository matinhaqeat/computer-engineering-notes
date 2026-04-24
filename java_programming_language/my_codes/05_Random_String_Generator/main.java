package Muatable; 
import java.util.Scanner;
import java.util.Random; 

public class RandomString {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		Random rand = new Random(); 
		System.out.println("please enter the maximum length for the text u want!");
		int max_length = input.nextInt();
		System.out.println("please enter the minimum length for the text u want!");
		int min_length = input.nextInt(); 
		if(min_length>max_length) {
			//swapping values:
			min_length = min_length ^ max_length;
			max_length = min_length ^ max_length;
			min_length = min_length ^ max_length;
			/*
			 * the following code also swap x and y (be careful, in this technique, u can face overflowing!):  
			 * x = x + y;
			 * y = x - y; 
			 * x = x - y;
			 */
		}
		int length;
		if(max_length!=min_length)
			length = rand.nextInt(max_length - min_length) + min_length; 
		else 
			length = max_length;
		String str = "";
		for (int i=0; i<length; i++) {
			char ch = (char)(rand.nextInt(26) + 'a');
			str = str + ch ;
		}
		System.out.println("done:");
		System.out.println("a string with a length of " + length + " is generated as follow:");
		System.out.println(str);
		
		
	}
}
