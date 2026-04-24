package time;

//class for Stop-watch: 
class Stopwatch {
	long start, end; 
	Stopwatch() { 
	}
	void startTime() {
		start = System.nanoTime();
	}
	void endTime() {
		end = System.nanoTime();
	}
	long takenTime () {
		return end - start;  
	}
}

public class test03 {
	static long callCount=0;
	// recursive method for Fibonacci series:
	public static int fibo(int x) {
		callCount++;
		if (x<=2) {
			return 1;
		}
		else {
			return fibo(x-1) + fibo(x-2);
		}
	}
	
	
	
	//main method:
	public static void main(String[] args) {
		Stopwatch ch1 = new Stopwatch(); 
		System.out.println("The 30 first elements of Fibonacci Series,");
		System.out.println("and time taken to count them using recursive method:\n");
		
		//for loop for printing them all: 
		for(int i=1; i<=30; i++) {
			callCount=0;
			ch1.startTime(); 
			int x = fibo(i);
			ch1.endTime(); 
			long takenTime = ch1.takenTime();
      //printing collected data:
			System.out.println(i + ":\t" + x + "  (" + takenTime + " nano-seconds)" + "\t\t(" + callCount + "calls)");
		}
		
	}

	
}
