package quiz_preperation_01;

import java.util.Scanner;                      // imported for "Scanner" Class!

public class Java_01_Basics {

	public static void main(String[] args) {
		float x = 4.3345343f;
		
		System.out.println("ur Passage!");		// for printing text to console 
												// print -->  without going to new line 
												// println --> goes to new line
		System.out.printf("numbe:%.3f ", x);    // printf --> for formating the text!
		
		
		/**some assigning notes:**/
		int number = 123;                       // 
		float number2 = 3.14f;                  // 'f' is mandatory
		double number3 = 3.234;                 // 'd' is optional 
		long num = 5675734234L;                 // 'L' is mandatory when the number is bigger than int; 
		long num2 = 234; 						// when the number is small, you can ignore 'L'
		
		char c = 'f';                           // u cant use double quatatoin (")!
		char f = 34;                            // small numbers can be assigned to 'char'
		char g = '\uAE56';                      // can be assigned by unicode(hexadecimal) 
		String name = "Ergun";                  // although String is a class, we can do it like this;
		String last_name = new String();        // this is the other way!
		
		
		
		/**taking input from user:**/
		Scanner Input = new Scanner(System.in); // we need to make a class first!
												// that "new" word, means creating a class!
												// "System.in" means that the data is coming from the keyboard!
											    // 'Input' is just the class name, any other word could also be used!
		
		String MyName =    Input.next();        // to take a word(ends with a space)
		String UniName=    Input.nextLine();    // to take a sentence(ends with new line '\n')
		Boolean M_State=   Input.nextBoolean(); // for Boolean
		Byte p  =          Input.nextByte();    // for Byte
		Short y =          Input.nextShort();   // for short
		int z =            Input.nextInt();     // for int
		float q =          Input.nextFloat();   // for int
		double r =         Input.nextDouble();  // for int
		long u =           Input.nextLong();    // for long numbers
		
		
		
		
		//constants:
		final int my_number = 234; 
		
		
		
		//Displaying time:
	    long totalMilliseconds = System.currentTimeMillis();          // Obtain the total milliseconds since midnight, Jan 1, 1970
	    long totalSeconds = totalMilliseconds / 1000;                 // Obtain the total seconds since midnight, Jan 1, 1970
	    long currentSecond = totalSeconds % 60;        	              // Compute the current second in the minute in the hour
	    
	    long totalMinutes = totalSeconds / 60;      	              // Obtain the total minutes
	    long currentMinute = totalMinutes % 60;                       // Compute the current minute in the hour

	    long totalHours = totalMinutes / 60;    	                  // Obtain the total hours
	    long currentHour = totalHours % 24; 	                       // Compute the current hour
	    
	    // Display results
	    System.out.println("Current time is " + currentHour + ":" + currentMinute + ":" + currentSecond + " GMT");
		
		
	    
	    // type casting: 
	    int casted_number = (int) 3.345; 
	    
	    
	    /*
	     * \b  -> Backspace
	     * \t  -> Tab
	     * \n  -> Line feed
	     * \r  -> Carriage return
	     * \\  -> Backslash
	     * \'  -> Single Quote
	     * \"  -> Double Quote
	     */
	    
	    
	    
	    // StringsS:
	    String A = "ali";
	    String B = "gokturk";
	    String C = A + ' ' + B;
	    
	    
	    
		/*Note:
		 * converting celsius to ferenhaut:  (5/9) * (F-32)
		 * 
		*/
		
		
		
	}

}
