#include <stdio.h>
#include <stdlib.h>
void red();
void cyan();
void standart();
int sudoku[9][9];
int GetSudoku();
int GetSudokutxt();
int Load();
int SolveSudoku();
int Miracle();
int rules();
//I combined all the functions in a library because I needed 
to use them all in a common place
