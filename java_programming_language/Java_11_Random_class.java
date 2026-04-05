package quiz_preperation_01;

import java.util.Random;

public class Java_11_Random_class {

	public static void main(String[] args) {
		Random y = new Random(100); 			//constant seed, 
		Random x = new Random();				//seed is current time!
		double num1 = x.nextDouble();			//[0,1)  !!! one is excluded
		float numb2 = x.nextFloat(); 			//[0,1)  !!! one is excluded
		int number3 = x.nextInt(); 				//(-) and (+) int
		int number4 = x.nextInt(100); 			//[0,100)   !! 100 is excluded
		boolean nu5 = x.nextBoolean(); 			// 'False' or 'True'
		long numbe6 = x.nextLong(); 			//(-) and (+) long

	}

}
