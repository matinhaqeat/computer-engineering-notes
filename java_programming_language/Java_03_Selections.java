package quiz_preperation_01;

public class Java_03_Selections {

	public static void main(String[] args) {
		int x = 234;
		//================================================
		//if condition:
		if (x<23) {
			System.out.println("x is less than 23!");
		}
		//if-else:
		if(x<23)
			System.out.println("if the statment is true!");
		else
			System.out.println("if the statment is false!");
		//if-else if-else:
		if(x<10)
			System.out.println("one digit");
		else if(x<100)
			System.out.println("two digit");
		else
			System.out.println("more digits");
		
		
		//================================================		
		/*logical operation:
		 *   ||       -> or 
		 *   &&       -> and 
		 *   !		  -> NOT
		 *   ^ 		  -> exclusive or
		 */
		
		
		//================================================		
		//switch:
		int week_day= 4; //Thursday
		switch(week_day) {
		case 1:		System.out.println("its monday!");		break;
		case 2:		System.out.println("its tuesday!");		break;
		case 3:		System.out.println("its wednsday");		break;
		case 4:		System.out.println("its thursday");		break;
		case 5:		System.out.println("its friday");		break;
		default:    System.out.println("its weeekend");		break;
		}
		
		
		//================================================		
		//Ternary:
		week_day = (x>100)?   1 : 2;
		/* 
		 if(x>100) 	      week_day=1;
		 else             week_day=2;
		 */
		week_day = (x>100)?    (x<1000)? 1  :   2 : 3;
		/* 
		 if(x>100) {
		 	if(x<1000)    week_day=1;
		 	else          week_day=2; 
		 }
		 else             week_day=2;
		 */
		
		
		
	}

}
