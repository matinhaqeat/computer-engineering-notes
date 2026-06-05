package proje1;
import java.util.Scanner;

public class Test01 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        System.out.println("Tic-Tac-Toe Game:");
        String choise = "Continue";
        int gameMode;
        int[][] gameMatrix = new int[3][3];
        
        while (choise.compareTo("-1") != 0) {
            reset(gameMatrix);
            System.out.println("Game Mode:");
            System.out.println("Press '1' for one-player game!");
            System.out.println("Press '2' for two-player game!");
            gameMode = input.nextInt();
            
            if (gameMode == 1) {
                System.out.println("Press '1' if u want to start the game,");
                System.out.println("any other key to make computer start!");
                int startter = input.nextInt();
                
                if (startter == 1) {
                    do {
                        print(gameMatrix);
                        takeInput(gameMatrix, 1, input);
                        if (!isSuitable(gameMatrix))
                            break;
                        computerMove(gameMatrix, 2);
                        
                    } while (isSuitable(gameMatrix));
                    
                    print(gameMatrix);
                    int winner = isWin(gameMatrix);
                    if (winner == 1)
                        System.out.println("Player 1 has won the match!");
                    else if (winner == 2)
                        System.out.println("Computer AI has won the match!");
                    else {
                        System.out.println("It is a draw!");
                    }
                } else {
                    do {
                        computerMove(gameMatrix, 1);
                        print(gameMatrix);
                        if (!isSuitable(gameMatrix))
                            break;
                        takeInput(gameMatrix, 2, input);
                    } while (isSuitable(gameMatrix));
                    
                    print(gameMatrix);
                    int winner = isWin(gameMatrix);
                    if (winner == 1)
                        System.out.println("Computer AI has won the match!");
                    else if (winner == 2)
                        System.out.println("Player has won the match!");
                    else {
                        System.out.println("It is a draw!");
                    }
                }
                
            } else if (gameMode == 2) {
                int player = 1;
                print(gameMatrix);
                
                while (isSuitable(gameMatrix)) {
                    takeInput(gameMatrix, player, input);
                    print(gameMatrix);
                    player = (player == 1) ? 2 : 1;
                }
                
                int w = isWin(gameMatrix); 
                switch (w) {
                    case 1:
                        System.out.println("Player 1('X') has WON the match!");
                        break;
                    case 2:
                        System.out.println("Player 2('O') has WON the match!");
                        break;
                    default: 
                        System.out.println("It's a Draw!");
                        break;
                }
            } else {
                System.out.println("Invalid input!");
            }
            
            System.out.println("Press '-1' to exit!");
            System.out.println("Any other key to continue!");
            input.nextLine(); // Clear buffer
            choise = input.nextLine();
        }
        System.out.println("Thanks for playing our game!");
        input.close();
    }
    private static boolean isSuitable(int[][] table) {
    	if(isFull(table))
    		return false;
    	if(isWin(table)!=0)
    		return false;
    	else
    		return true;
    }

    private static void computerMove(int[][] gameMatrix, int player) {
        int[][] temp = new int[gameMatrix.length][];
        for(int i=0; i<gameMatrix.length; i++) {
        	temp[i] = gameMatrix[i].clone();
        }
        
    	//checking for win:
        for(int i=0; i<gameMatrix.length; i++) {
        	for(int j=0; j<gameMatrix.length; j++) {
        		if(temp[i][j] != 0)
        			continue;
        		temp[i][j] = player;
        		if(isWin(temp) == player) {
        			gameMatrix[i][j] = player;
        			return;
        		}
        		else
        			temp[i][j] =0;
        	}
        }
    	
    	//checking for stopping opponent's win:
        int opponent = (player==1)? 2 : 1;
        for(int i=0; i<gameMatrix.length; i++) {
        	for(int j=0; j<gameMatrix.length; j++) {
        		if(temp[i][j] != 0)
        			continue;
        		temp[i][j] = opponent;
        		if(isWin(temp) == opponent) {
        			gameMatrix[i][j] = player;
        			return;
        		}
        		else
        			temp[i][j] =0;
        	}
        }
    	//some rules:
        if(gameMatrix[1][1] == 0) {
        	gameMatrix[1][1] = player;
        	return;
        }
        for(int i=0; i<3; i+=2) {
        	for (int j=0; j<3; j+=2) {
        		if(gameMatrix[i][j] == 0) {
        			gameMatrix[i][j] = player;
        			return;
        		}
        	}
        }

    	
    	
    	//last strategy: random move:
    	while(true) {
        	int i =(int) (Math.random() * 3);
        	int j =(int) (Math.random() * 3); 
        	if(gameMatrix[i][j] == 0) {
        		gameMatrix[i][j] = player;
        		return;
        	}
        }
    }

    private static void takeInput(int[][] table, int player, Scanner input) {
        System.out.println("Player number " + player + "!");
        int row; 
        int column;
        boolean mistake;
        do {
            mistake = false;
            System.out.println("Enter the row (1-3)!");
            row = input.nextInt();
            System.out.println("Enter the column (1-3)!");
            column = input.nextInt();
            
            if (row > 3 || row < 1 || column > 3 || column < 1) {
                mistake = true;
                System.out.println("Invalid input, try again!");
                continue;
            }
            row--;
            column--;
            if (table[row][column] != 0) {
                mistake = true;
                System.out.println("Invalid input, the grid is full, try again!");
                continue;
            }
            table[row][column] = player;
                
        } while (mistake);
    }

    private static void reset(int[][] gameMatrix) {
        for (int i = 0; i < gameMatrix.length; i++) {
            for (int j = 0; j < gameMatrix[i].length; j++) {
                gameMatrix[i][j] = 0;
            }
        }
    }

    private static void print(int[][] table) {
        System.out.print("\n");
        // Changed loop to print Row 1 at the top, Row 3 at the bottom
        for (int r = 0; r < 3; r++) {
            System.out.print("|");
            for (int c = 0; c < 3; c++) {
                System.out.print(" " + valueOf(table[r][c]) + " |");
            }
            System.out.println(" -->r" + (r + 1) + "\n-------------------");
        }
        System.out.println("| c1| c2| c3|\n");
    }

    private static char valueOf(int i) {
        if (i == 1)
            return 'X';
        if (i == 2) 
            return 'O';
        return ' ';
    }
    
    private static boolean isFull(int[][] gameMatrix) {
        for (int i = 0; i < gameMatrix.length; i++) {
            for (int j = 0; j < gameMatrix[i].length; j++) {
                if (gameMatrix[i][j] == 0) 
                    return false;
            }
        }
        return true;
    }

    private static int isWin(int[][] table) {
        if (table[1][1] != 0 && table[1][1] == table[2][2] && table[0][0] == table[2][2]) 
            return table[1][1];
        if (table[1][1] != 0 && table[2][0] == table[0][2] && table[1][1] == table[2][0])
            return table[1][1];
        for (int i = 0; i < 3; i++) {
            if (table[i][1] != 0 && table[i][1] == table[i][2] && table[i][1] == table[i][0]) 
                return table[i][1];
            if (table[1][i] != 0 && table[1][i] == table[2][i] && table[1][i] == table[0][i])
                return table[1][i];
        }
        return 0;
    }
}
