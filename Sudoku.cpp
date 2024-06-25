#include <iostream>
#include <vector>
#define N 9
using namespace std;
void printGrid(int grid[N][N]) {
    for (int row = 0; row < N; row++) {
        if (row % 3 == 0 && row != 0) {
            cout << "------+-------+------" << std::endl;
        }
        for (int col = 0; col < N; col++) {
            if (col % 3 == 0 && col != 0) {
                cout << "| ";
            }
			cout << grid[row][col] << " ";
        }
        cout << std::endl;
    }
}
bool isSafe(int grid[N][N], int row, int col, int num) {
    for (int x = 0; x < N; x++) {
        if (grid[row][x] == num) {
            return false;
        }
    }
    for (int x = 0; x < N; x++) {
        if (grid[x][col] == num) {
            return false;
        }
    }
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + startRow][j + startCol] == num) {
                return false;
            }
        }
    }
    return true;
}
bool findEmptyCell(int grid[N][N], int &row, int &col) {
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (grid[row][col] == 0) {
                return true;
            }
        }
    }
    return false;
}
bool solveSudoku(int grid[N][N]) {
    int row, col;
    if (!findEmptyCell(grid, row, col)) {
        return true;
    }
    for (int num = 1; num <= 9; num++) {
        if (isSafe(grid, row, col, num)) {
            grid[row][col] = num;
            if (solveSudoku(grid)) {
                return true;
            }
            grid[row][col] = 0;
        }
    }
    return false;
}
int main() {
    int grid[N][N];
    cout << "Enter the Sudoku puzzle (use 0 for empty cells):" << std::endl;
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            cin >> grid[row][col];
        }
    }
    cout << "\nOriginal Sudoku puzzle:" << std::endl;
    printGrid(grid);
    if (solveSudoku(grid)) {
        cout << "\nSolved Sudoku puzzle:" << std::endl;
        printGrid(grid);
    } else {
        cout << "No solution exists" << std::endl;
    }
    return 0;
}