#include "sudokulib.h"
int GetSudoku() //The function which scans from the user to 
an 9x9 array
{
 int row, column;
 printf("Enter sudoku.\nReplace empty boxes with 
0.\nLeave one space for each number.\nExample: 1 0 2 0 3 0 4 
0 5 0 ...\n");
 for (row = 0; row < 9; row++)
 {
 for (column = 0; column < 9; column++)
 {
 scanf("%d", &sudoku[row][column]);
 }
 }
 return 0;
}
int GetSudokutxt()//The function which scans from a .txt 
file to an 9x9 array
{
 char txt[1000];
 int row, column;
 printf("Enter the name of the file.\nFile must be a .txt 
file.\nPut .txt at the end of the file.\nFile Name: ");
 scanf("%s", txt);
 FILE *examples = fopen( txt, "r");
 if (examples == NULL )
 {
 printf("Couldn't open file: %s.\nAre you sure the 
program and file are in the same folder?\n\n", txt);
 exit(EXIT_FAILURE);
 }
 for (row = 0; row < 9; row++)
 {
 for (column = 0; column < 9; column++)
 {
 fscanf(examples,"%d ", &sudoku[row][column]); }
 }
 fclose(examples);
 return 0;
}
int Load(int array[9][9]) //The function which prints in 
order and shape of the scanned 9x9 array,also it will prints 
the solved sudoku too.
{
 int t, y;
 for (t = 0; t < 9; t++)
 {
 if (t == 0 || t == 3 || t == 6)
 {
 cyan();
 printf("===============================\n");
 standart();
 }
 cyan();
 printf("||");
 standart();
 for (y = 0; y < 9; y++)
 {
 printf(" ");
 printf("%d", array[t][y]);
 if (y == 2 || y == 5 || y == 8)
 {
 cyan();
 printf(" || ");
 standart();
 }
 }
 printf("\n");
 }
 cyan();
 printf("===============================\n");
 standart(); return
0
;
}
