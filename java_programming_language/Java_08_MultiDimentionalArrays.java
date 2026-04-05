package quiz_preperation_01;

public class Java_08_MultiDimentionalArrays {
	public static void main(String args[]) {
		//declaring: 
		int[][] my_matrix = new int[3][4];
		//initializing: 
		for(int i=0; i<my_matrix.length; i++) {
			for(int j=0; j<my_matrix[i].length; j++) {
				my_matrix[i][j] = (int) (Math.random() * 101) ;
			}
		}
		//or:
		int[][] my_matix2 = {
				{1,2,3},
				{4,5,6},
				{7,8,9}
		};
		
		//============================================
		//ragged arrays: 
		int[][] my_matrix3 = {
				{11,22,33},
				{44,55},
				{66}
		};
		/*
		 * my_matrix3.length = 3
		 * my_matrix3[0].length = 3
		 * my_matrix3[1].length = 2
		 * my_matrix3[2].length = 1
		 */
		
		//============================================
		//passing 2D array to methods:
		//students_answers_to the test = A
		//correct answer = B
		int [] [] A = {
				{243609220, 1, 3, 2, 4, 3, 1, 2, 4, 3, 1},
				{243609219, 1, 2, 4, 1, 3, 2, 1, 4, 3, 2},
				{243609218, 3, 4, 2, 1, 2, 1, 3, 4, 2, 2},
				{243609217, 3, 4, 2, 1, 3, 2, 1, 3, 4, 2},
				{243609216, 3, 4, 2, 1, 3, 2, 1, 3, 4, 2},
				{243609215, 3, 4, 2, 1, 3, 2, 1, 3, 4, 2},
				{243609214, 3, 4, 2 ,1, 3, 2, 1, 3, 4, 2}
		};
		int [] B =         {3, 4, 2, 1, 3, 2, 1, 3, 2, 1};
		
		int [][] controlled = exam_controller(A, B);
		
		//printing the result sheet:
		for (int i = 0; i < controlled.length; i++) {
		    System.out.println("ID: " + controlled[i][0] + 
		                       " Score: " + controlled[i][1]);
		}
	}
	
	//method to check the data with an answer key:
	public static int[][] exam_controller(int[][] data, int[]answers) {
		int [][] temp = new int[data.length][2];
		for(int i=0; i<data.length; i++) {
			int counter = 0; 
			for(int j=1; j<data[i].length; j++) {
				if(data[i][j] == answers[j-1]) 
					counter++;
			}
			temp[i][0] = data[i][0];
			temp[i][1] = counter;
		}
		return temp;
	}
}
