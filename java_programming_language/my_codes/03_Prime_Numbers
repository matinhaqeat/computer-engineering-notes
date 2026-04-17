package pakage01;
import java.util.Scanner;

public class Test01 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.println("This application founds all prime numbers in the interval You provide!");
		System.out.println("Enter the upper bound, please!");
		int maxRange = input.nextInt();
		System.out.println("Enter the lower bound, please!");
		int minRange = input.nextInt();
		if(minRange<2 &&maxRange<2) {
			System.out.println("no prime number in the given interval!");
			return;
		}
		if(minRange<2)
			minRange = 2;
		if(maxRange<2) 
			maxRange = 2;
		if(maxRange<minRange) {
			maxRange = maxRange ^ minRange;
			minRange = maxRange ^ minRange;
			maxRange = maxRange ^ minRange;
		}
		int counter = 0;
		System.out.println("all the prime numbers between the range given([" + minRange + ", " + maxRange + "]) is/are as follow:");
		for(int i= minRange; i<=maxRange; i++) {
			if(isPrime(i)) {
				System.out.println(i);
				counter++;
			}
		}
		if(counter==0)
			System.out.println("no prime numbers in the given interval!");
		else
			System.out.println("There are a totlal of " + counter + " prime numbers in the given interval!");
	}
	public static boolean isPrime(int i) {
		if(i ==2) 
			return true;
		if(i % 2==0 )
			return false;
		for(int j=3; j<=Math.sqrt(i); j+=2) {
			if(i%j==0)
				return false;
		}
		return true;
	}

}
