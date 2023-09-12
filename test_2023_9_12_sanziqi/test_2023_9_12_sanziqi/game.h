#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



#define COL 3
#define ROW 3


void menu();
void game();

void initBoard(int board[ROW][COL], int row, int col);

void printBoard(int board[ROW][COL], int row, int col);

void playerMove(int board[ROW][COL], int row, int col);

void computerMove(int board[ROW][COL]);

char isWin(int board[ROW][COL], int row, int col);