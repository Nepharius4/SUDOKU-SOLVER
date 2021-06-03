#include "sudokulib.h"
int miracle[9][9] = {{0, 0, 0, 0, 0, 0, 0, 0, 
0},//Miracle sudoku
 {0, 0, 0, 0, 6, 0, 0, 0, 0},
 {0, 0, 0, 8, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 5, 0, 0, 0},
 {0, 0, 0, 0, 7, 0, 0, 0, 0},
 {0, 0, 0, 0, 0, 0, 0, 0, 0}};
int solvedmiracle[9][9] = {{2, 6, 1, 5, 9, 4, 8, 3, 
7},//Solved miracle sudoku
 {8, 3, 7, 2, 6, 1, 5, 9, 4},
 {5, 9, 4, 8, 3, 7, 2, 6, 1},
 {7, 2, 6, 1, 5, 9, 4, 8, 3},
 {4, 8, 3, 7, 2, 6, 1, 5, 9},
 {1, 5, 9, 4, 8, 3, 7, 2, 6},
 {3, 7, 2, 6, 1, 5, 9, 4, 8},
 {9, 4, 8, 3, 7, 2, 6, 1, 5},
 {6, 1, 5, 9, 4, 8, 3, 7, 2}};
int Miracle()
{
 system("cls");
 char ask;
 printf("Thanks to your curiosity, you qualified to see 
the miracle sudoku.\n");
 printf("Here you go.\n\n");
 Load(miracle);//loads miracle sudoku in a shape and 
order.
 rules();//Prints the rules.
 printf("If you want to solved form just write 'S'.\n"); printf("If you want to exit just write 'X'.\n");
 scanf("%s", &ask);
 switch (ask)
 {
 case 'S'://Solved version
 system("cls");
 printf("Here you go.\nA bit hard isn't it but worth 
the time.\n");
 Load(solvedmiracle);
 printf("It's perfect...\nIf you look closely all the 
numbers have a symetry.\nThis is the beauty of miracle 
sudoku.\n");
 printf("Thanks for playing.\n");
 red();
 printf("\nExiting...\n");
 standart();
 exit (0);
 break;
 case 'X':
 system("cls");
 red();
 printf("\nExiting...\n");
 standart();
 exit (0);
 default:
 printf("\nI did not understand what you wrote.\n");
 red();
 printf("\nExiting...\n");
 standart();
 exit (0);
 break;
 }
 return 0;
}
int rules()//Rules of the miracle sudoku
{
 red();
 printf("\n\n--------RULES--------\n"); standart();
 printf("1-In Miracle Sudoku, every row,column and box 
must have all numbers from 1 to 9 exactly once.\n2-In 
addition, two directly adjacent cells cannot contain 
consecutie numbers.\n");
 printf("3-You cannot have the same number twice within a 
chess knight's move (2 over and 1 across in any direction) 
or a king's move (the 8 cells directly surrounding each 
cell).\n\n");
 return 0;
}
