# Tic Tac Toe — Console Game (Java)

A two-player Tic Tac Toe game that runs in the terminal. Player 1 uses `X` and Player 2 uses `O`.

## How to Run

1. Open the project in any Java IDE (e.g. Eclipse, IntelliJ).
2. Run `Test01.java` inside the `proje1` package.
3. Follow the on-screen prompts.

## Gameplay

- The board is a 3×3 grid. Rows and columns are numbered 1–3.
- Players take turns entering a **row** and **column** number to place their mark.
- The game rejects out-of-range or already-occupied cells and asks again.
- After each game ends (win or draw), you can replay or exit by typing `-1`.

## Code Structure

| Method | Purpose |
|---|---|
| `main()` | Game loop — initializes the board, alternates turns, and handles replay |
| `printTable()` | Prints the current board state to the console |
| `takeInput()` | Reads and validates a player's move |
| `isItWin()` | Checks all rows, columns, and diagonals for a winner |
| `isItFull()` | Returns `true` if no empty cells remain (draw condition) |
| `valueof()` | Converts `0 / 1 / 2` to `' ' / 'X' / 'O'` for display |

## Win Detection

`isItWin()` checks:
- Both diagonals
- All 3 rows
- All 3 columns

Returns `1` (Player 1 wins), `2` (Player 2 wins), or `0` (no winner yet).

## Notes

- Input is read via `Scanner` from `System.in`.
- The board is stored as a 3×3 `int[][]` array (`0` = empty, `1` = X, `2` = O).
- There is an extra `input.nextLine()` buffer call after the game ends to flush the newline left by `nextInt()`.
