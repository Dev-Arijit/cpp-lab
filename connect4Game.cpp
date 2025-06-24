#include <iostream>
#include <vector>
using namespace std;

const int ROWS = 6;
const int COLS = 7;
const char PLAYER1 = 'X';
const char PLAYER2 = 'O';

void printBoard(const  vector< vector<char>>& board) {
     cout << "\n";
    for (int row = 0; row < ROWS; ++row) {
        for (int col = 0; col < COLS; ++col) {
             cout << "| " << board[row][col] << " ";
        }
         cout << "|\n";
    }
    for (int col = 0; col < COLS; ++col) {
         cout << "----";
    }
     cout << "-\n";
    for (int col = 1; col <= COLS; ++col) {
         cout << "  " << col << " ";
    }
     cout << "\n\n";
}

bool isValidMove(const  vector< vector<char>>& board, int col) {
    return col >= 0 && col < COLS && board[0][col] == ' ';
}

bool makeMove( vector< vector<char>>& board, int col, char player) {
    for (int row = ROWS - 1; row >= 0; --row) {
        if (board[row][col] == ' ') {
            board[row][col] = player;
            return true;
        }
    }
    return false;
}

bool checkWin(const  vector< vector<char>>& board, char player) {
    // Check horizontal, vertical, and two diagonal directions
    for (int row = 0; row < ROWS; ++row) {
        for (int col = 0; col < COLS; ++col) {
            if (board[row][col] == player) {
                if (col + 3 < COLS && board[row][col + 1] == player &&
                    board[row][col + 2] == player && board[row][col + 3] == player)
                    return true;
                if (row + 3 < ROWS && board[row + 1][col] == player &&
                    board[row + 2][col] == player && board[row + 3][col] == player)
                    return true;
                if (row + 3 < ROWS && col + 3 < COLS && board[row + 1][col + 1] == player &&
                    board[row + 2][col + 2] == player && board[row + 3][col + 3] == player)
                    return true;
                if (row + 3 < ROWS && col - 3 >= 0 && board[row + 1][col - 1] == player &&
                    board[row + 2][col - 2] == player && board[row + 3][col - 3] == player)
                    return true;
            }
        }
    }
    return false;
}

bool isDraw(const  vector< vector<char>>& board) {
    for (int col = 0; col < COLS; ++col) {
        if (board[0][col] == ' ') {
            return false;
        }
    }
    return true;
}

int main() {
     vector< vector<char>> board(ROWS,  vector<char>(COLS, ' '));
    char currentPlayer = PLAYER1;

    while (true) {
        printBoard(board);
        int col;
         cout << "Player " << currentPlayer << ", enter column (1-" << COLS << "): ";
         cin >> col;
        col -= 1; // Convert to 0-indexed

        if (!isValidMove(board, col)) {
             cout << "Invalid move. Try again.\n";
            continue;
        }

        makeMove(board, col, currentPlayer);

        if (checkWin(board, currentPlayer)) {
            printBoard(board);
             cout << "Player " << currentPlayer << " wins!\n";
            break;
        }

        if (isDraw(board)) {
            printBoard(board);
             cout << "It's a draw!\n";
            break;
        }

        currentPlayer = (currentPlayer == PLAYER1) ? PLAYER2 : PLAYER1;
    }

    return 0;
}