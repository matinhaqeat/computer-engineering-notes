package quiz_preperation_01;

public class Java_06_MathClass {
	public static void main(String args[]) {
		
		// Constants:
		double pi_value = Math.PI;
		double e__value = Math.E; 
		
		// Simple methods:
        int a= Math.abs(-56);          		//absolute value
	    int b= Math.max(34, 67);			//maximum of 2 numbers
	    int c= Math.min(12, 34);			//minimum of 2 numbers 
	    int z= (int) Math.pow(4,5);     	// = 4^5 
	    //it returns a double, if u want int, cast it!
	    int a1 = (int) Math.round(34.34); 	//-> 34
	    int a2 = (int) Math.ceil(3.4); 		//-> 4
	    int a3 = (int) Math.floor(3.4);		//-> 3
	    double qwerty = Math.log(z);        //ln(z)
	    double qwerti = Math.log10(z);      //log(z)   //base is ten!
	    
	    // Trigonometry (input in Radians):
	    double d= Math.sin(3.14);    		//sin function 
	    double e= Math.cos(23);				//cosine function 
	    double f= Math.tan(423); 			//tan function 
	    
	    // Angle Inversion:
	    double g= Math.toDegrees(343);
	    double h= Math.toRadians(3443);
	    
	    // Random Numbers:
	    double i= Math.random(); 			//interval->    [0, 0.99]   double
	    double j= Math.random() *100;    	//interval->    [0, 99.99]  double
	    
	    
	    //example: can be used also like:
	    double example = Math.sin(Math.toRadians(Math.abs(Math.min(-23, -30)))); 
	    System.out.println(example);
	}
}
