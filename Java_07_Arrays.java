package quiz_preperation_01;

import java.lang.reflect.Array;

public class Java_07_Arrays {
	public static void main(String args[]) {
		// Declaration and initializing:
		int numbers1 []; //not prefered!
		int [] numbers2;
		numbers2 = new int[5];  
		//or:
		int [] numbers3 = new int[5];
		int [] numbers4 = {12,34,45,567};
		//if u don't initialize the array while declaring it, u should do as follow:
		int [] numbers5 = new int [5];
		numbers5[0] = 12;
		numbers5[1] = 13;
		numbers5[2] = 14;
		numbers5[3] = 15;
		numbers5[4] = 16;
		
		//enhanced 'for' loop:
		for(int i: numbers5) {
			System.out.println(i);
		}
		//caution: the following loop does not change the array!!!
		for(int i: numbers5) {
			i++;
		}
		
		//==================================================================
		//coping arrays:
		numbers2 = numbers5; //it just copy the address --> now they both show the same array;
		numbers2[0] = 123;   //same as-->  numbers5[0] = 123;
		//method: System.arraycopy(sourceArray, sourcePos, destArray, destPos, length);
		System.arraycopy(numbers5,0,numbers3,0,5);
		
		//==================================================================
		//passing arrays to methods:
		//method #1:
		positive(numbers5);
		
		//method #2: it does'nt destroy data in 'numbers5'!
		numbers3 = Double(numbers5);

		//method #3: working with anonymous arrays: 
		numbers4 = Double(new int[] {5,4,3,2,1});
		//numbers4= {10, 8, 6, 4, 2};
		
		
		//==================================================================
		//sorting Arrays: 
		java.util.Arrays.sort(numbers5);  
		//original order is gone!!
		
		int[] new_array = new int[numbers4.length];
		System.arraycopy(numbers5,0,new_array,0,5);
		//another way to copy: 
		//int [] new_array = java.util.Arrays.copyOf(numbers4, numbers4.length);
		java.util.Arrays.sort(new_array);
		//we declared another array, copied the array and then sorted it. 
		//so 'new_array' is the sorted form of 'numbers4', without destroying 'number4' !!!
		
	}
	
	
	//method #1: absolute value of the elements:
	public static void positive(int[] my_array) {
		for(int i=0; i<my_array.length; i++)
			my_array[i] = Math.abs(my_array[i]);
	}
	
	//method #2: double all the elements:
	public static int[] Double(int[] my_array) {
		int [] temp = new int[my_array.length];
		for(int i=0; i<temp.length; i++)
			temp[i] = 2* my_array[i];
		return temp; 
	}
	

}
