# Tic-Tac-Toe Game (Java)

A console-based Tic-Tac-Toe game written in Java. This project supports both single-player (against a simple AI) and two-player local modes, making it an excellent practice project for core Java concepts.

---

## 🚀 Features

* **Single-Player Mode:** Play against a computer opponent.
* **Two-Player Mode:** Play locally with a friend (Player vs. Player).
* **Smart Detection:** Automatic win and draw condition checks.
* **Replay System:** Option to restart and play another round without restarting the application.
* **Layered AI Strategy:** The computer opponent makes calculated decisions rather than just random moves.

---

## 🛠️ How to Run

1. Open the project folder in your preferred Java IDE (Eclipse, IntelliJ IDEA, VS Code, etc.).
2. Locate and run the `Test01.java` file.
3. Follow the console prompts to choose a game mode and start playing!

---

## 🎮 Game Flow

1. **Select Game Mode:**
   * `1` ➔ Single Player (vs. Computer)
   * `2` ➔ Two Players
2. **Gameplay:** Players take turns placing their marks (`X` or `O`) on the grid.
3. **Game Over Conditions:** The game continues until:
   * A player successfully gets three consecutive marks (row, column, or diagonal).
   * The board is completely full (resulting in a draw).
4. **Post-Game:** Choose whether to play again or exit the program.

---

## 🤖 AI Strategy

When playing in Single-Player mode, the computer prioritizes its moves using the following decision hierarchy:

1. **Win:** Make a winning move if one is available.
2. **Block:** Block the opponent from getting a winning move.
3. **Center:** Take the center position of the board if it is free.
4. **Corner:** Take any available corner position.
5. **Random:** Make a random valid move if no strategic positions are left.

---

## 💻 Main Methods

The core logic is driven by the following methods inside `Test01.java`:

| Method | Description |
| :--- | :--- |
| `main()` | Controls the overall game loop and flow. |
| `takeInput()` | Handles and validates user inputs for player moves. |
| `computerMove()` | Executes the AI logic and places the computer's mark. |
| `print()` | Renders the current state of the board in the console. |
| `isWin()` | Checks the board arrays to see if a player has won. |
| `isFull()` | Checks if the board is full to declare a draw. |
| `isSuitable()` | Determines if the current move or game state allows play to continue. |
| `reset()` | Clears the board array to prepare for a new game. |

---

## ✍️ Author & Purpose

This is a Java practice project focused on mastering fundamental programming concepts, including:
* Two-dimensional arrays
* Conditional loops (`while`, `for`)
* Method modularization
* Game state logic 
* Basic AI decision trees
