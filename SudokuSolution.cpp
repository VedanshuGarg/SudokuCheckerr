// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> readSolution()
// {
//     cout << "\nEnter sudoku puzzle solution : \n"
//          << endl;

//     vector<vector<int>> grid(9, vector<int>(9));

//     for (int i = 0; i < 9; i++)
//     {
//         for (int j = 0; j < 9; j++)
//         {
//             cin >> grid[i][j];
//         }
//     }

//     return grid;
// }

// bool isPossible(int i, int j, vector<vector<int>> &grid)
// {
//     for (int column = 0; column < 9; column++)
//     {
//         if (column != j && grid[i][column] == grid[i][j])
//         {
//             return false;
//         }
//     }

//     for (int row = 0; row < 9; row++)
//     {
//         if (row != i && grid[row][j] == grid[i][j])
//         {
//             return false;
//         }
//     }

//     for (int row = (i / 3) * 3; row < (i / 3) * 3 + 3; row++)
//     {
//         for (int col = (j / 3) * 3; col < (j / 3) * 3 + 3; col++)
//         {
//             if (row != i && col != j && grid[row][col] == grid[i][j])
//             {
//                 return false;
//             }
//         }
//     }

//     return true;
// }

// bool isValid(vector<vector<int>> grid)
// {
//     for (int i = 0; i < 9; i++)
//     {
//         for (int j = 0; j < 9; j++)
//         {
//             if (grid[i][j] < 1 || grid[i][j] > 9 || !isPossible(i, j, grid))
//             {
//                 return false;
//             }
//         }
//     }

//     return true;
// }

// int main()
// {

//     cout << "\nSudoku is a 9 x 9 grid divided into smaller 3 x 3 boxes.\nSome cells, called fixed cells, are populated with numbers from 1 to 9.\n";
//     cout << "\nThe objective is to fill the empty cell, also called free cells with the numbers 1 to 9 so that every row,\nevery column and every 3 x 3 box contains the number 1 to 9.\n";
//     cout << "\nWe use value 0 to indicate a free cell.\n" << endl;

//     vector<vector<int>> sudoku{
//         {5, 3, 0, 0, 7, 0, 0, 0, 0},
//         {6, 0, 0, 1, 9, 5, 0, 0, 0},
//         {0, 9, 8, 0, 0, 0, 0, 6, 0},
//         {8, 0, 0, 0, 6, 0, 0, 0, 3},
//         {4, 0, 0, 8, 0, 3, 0, 0, 1},
//         {7, 0, 0, 0, 2, 0, 0, 0, 6},
//         {0, 6, 0, 0, 0, 0, 0, 0, 0},
//         {0, 0, 0, 4, 1, 9, 0, 0, 5},
//         {0, 0, 0, 0, 8, 0, 0, 7, 9}};

//     cout << "\nSudoku : \n" << endl;
//     for (int i = 0; i < 9; i++)
//     {
//         for (int j = 0; j < 9; j++)
//         {
//             cout << sudoku[i][j] << " ";
//         }
//         cout << endl;
//     }

//     vector<vector<int>> grid = readSolution();

//     if (isValid(grid))
//     {
//         cout << "\nValid Solution!\n"
//              << endl;
//     }
//     else
//     {
//         cout << "\nInvalid Solution\n"
//              << endl;
//     }

//     return 0;
// }

// /*
//     5 3 4 6 7 8 9 1 2
//     6 7 2 1 9 5 3 4 8
//     1 9 8 3 4 2 5 6 7
//     8 5 9 7 6 1 4 2 3
//     4 2 6 8 5 3 7 9 1
//     7 1 3 9 2 4 8 5 6
//     9 6 1 5 3 7 2 8 4
//     2 8 7 4 1 9 6 3 5
//     3 4 5 2 8 6 1 7 9
// */