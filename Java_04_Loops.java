package quiz_preperation_01;

public class Java_04_Loops {

	public static void main(String[] args) {
		//===================================================
		//While:
		int counter= 0;
		while(counter<100) {
			System.out.println("it will run 100 times!");
			counter++; 
		}
		
		//===================================================
		//Do-While:
		counter=0;
		do {
			System.out.println("this will run at least once");
			counter++;
		} while(counter<100);
		
		//===================================================
		//For:
		for(int i=0; i<100; i++) {
			System.out.println("this will also run 100 times, now itteration number #" + (i+1));
		// The variable 'i' is local and will be garbage collected after the loop.
		// If you want to use it elsewhere, it should be declared outside the loop.
		}
		
		//===================================================
		/* Loop Control Statments:
		 *     continue --> skips the rest of the current iteration and moves to the next iteration of the loop
		 *     break --> immediately exits the loop and continues execution after the loop
		 */
		
				
	}

}
