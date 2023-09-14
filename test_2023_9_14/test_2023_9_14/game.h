#pragma once

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 9
#define COL 9

#define ROWS ROW + 2
#define COLS COL + 2

#define COUNT_EASY 80

void initBoard(char board[ROWS][COLS], int row, int col, char set);
void printBoard(char board[ROWS][COLS], int row, int col);
void setMine(char board[ROWS][COLS], int row, int col);
void findMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);