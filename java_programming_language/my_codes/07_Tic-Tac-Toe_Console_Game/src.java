package proje1;

import java.util.Scanner;

public class Test01 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		//welcome to game:
		System.out.println("TIC TAC TOE");
		System.out.println("'X' for first player! and");
		System.out.println("'O' for second player!");
		String ccc ="1";
		//several games loop:
		do {
			
			int[][] table = {	{0,0,0},
								{0,0,0},
								{0,0,0} 	}; //--> table[3][3]
			
			
			int player =1;
			printTable(table);
			//several moves loop; until tie or win!
			while(!(isItWin(table)!=0 || isItFull(table))) {
				takeInput(table, player, input);
				printTable(table);
				
				player = (player==1)? 2 : 1;
			}
			//presenting win
			int w = isItWin(table); 
			switch(w) {
			case 1:
				System.out.println("player 1('X') has WON the match!");
				break;
			case 2:
				System.out.println("player 2('O') has WON the match!");
				break;
			default: 
				System.out.println("It's a Draw");
				break;
			}
			
			System.out.println("do u want to play again!");
			System.out.println("'-1' for exit");
			System.out.println("any other key for continue!");
			String buffer = input.nextLine();
			ccc = input.nextLine();
		} while(ccc.compareTo("-1")!=0);
		System.out.println("shutting down the council!!!");
	}
	private static boolean isItFull(int[][] table) {
		for(int i=0;i<3; i++) {
			for (int j=0; j<3; j++) {
				if(table[i][j] == 0)
					return false;
			}
		}
		return true;
	} 	//done:
	private static void takeInput(int[][] table, int player, Scanner input) {
		System.out.println("player number " + player + "!");
		int row; 
		int column;
		boolean mistake;
		do {
			mistake = false;
			System.out.println("enter the row!");
			row = input.nextInt();
			System.out.println("enter the column!");
			column = input.nextInt();
			
			if(row>3 || row<1 || column>3 || column<1) {
				mistake = true;
				System.out.println("invalid input, try again!");
				continue;
			}
			row--;
			column--;
			if(table[row][column] != 0) {
				mistake = true;
				System.out.println("invalid input, the grid is full, try agian!");
				continue;
			}
			table[row][column] = player;
				
		} while(mistake);
	}
	private static void printTable(int[][] table) {
		System.out.print("\n");
		for(int r=2; r>=0; r--) {
			System.out.print("|");
			for(int c=0; c<3; c++) {
				System.out.print(" " + valueof(table[r][c]) + " |");
			}
			System.out.println(" -->r" + (r+1) +"\n-------------------");
			
		}
		System.out.println("| c1| c2| c3|\n");
	}
	private static char valueof(int i) {
		return (i==1)?'X':(i==2)?'O':' ';
	}
	private static int isItWin(int[][] table) {
		if(table[1][1]!=0 && table[1][1]==table[2][2] && table[0][0]==table[2][2]) 
			return table[1][1];
		if(table[1][1]!=0 && table[2][0]==table[0][2] && table[1][1]==table[2][0])
			return table[1][1];
		for(int i=0; i<3; i++) {
			if(table[i][1]!= 0 && table[i][1]==table[i][2] && table[i][1]==table[i][0]) 
				return table[i][1];
			if(table[1][i]!= 0 && table[1][i]==table[2][i] && table[1][i]==table[0][i])
				return table[1][i];
		}
		return 0;
	}

}
