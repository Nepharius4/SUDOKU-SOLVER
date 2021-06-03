#include "sudokulib.h"
int main()
{
 int askway;
 printf("This is a Sudoku Solver.\n");
 printf("1-Enter Sudoku with keyboard.\n");
 printf("2-Load sudoku with a .txt file.\n");
 printf("3-Exit the program.\n\n");
 printf("Enter the number in front of the line like 
'0'.\n");
 scanf("%d", &askway);
 system("cls");//Clears the output
 switch (askway)
 {
 case 0://EasterEGG
 Miracle();
 return 0;
 break;
 case 1:
 GetSudoku();
 system("cls");
 printf("Sudoku Loaded.\n");
 Load(sudoku);
 break;
 case 2:
 GetSudokutxt();
 system("cls");
 printf("Sudoku Loaded.\n");
 Load(sudoku);
 break;
 case 3:
 red();
 printf("\nExiting...\n");
 standart();
 exit(0);
 break;
 default: printf("The information you entered could not be 
understood.\nExiting...\n");
 exit(0);
 break;
 }
 printf("\nDo you want to solve the loaded Sudoku? ");
 printf("\033[0;32m"); //Changes to green text color
 printf("Y ");
 standart();
 printf("/ ");
 red();
 printf("N\n");
 standart();
 char askSolve;
 scanf("%s", &askSolve);
 switch (askSolve)
 {
 case 'Y':
 system("cls");
 printf("Solved Sudoku:\n");
 if(SolveSudoku())
 Load(sudoku);
 else
 {
 red();
 printf("\nNo solution found!\n");
 }
 red();
 printf("\nExiting...\n");
 standart();
 break;
 case 'N':
 system("cls");
 red();
 printf("\nExiting...\n");
 standart();
 exit(0);
 break; default:
 system("cls");
 printf("Option not recognized.\n");
 red();
 printf("Exiting...\n");
 standart();
 break;
 }
return 0;
}
