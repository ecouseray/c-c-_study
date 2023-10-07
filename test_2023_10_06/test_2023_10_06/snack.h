#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

#define WIDE 40
#define HIGH 40


struct FOOD
{
	int x;
	int y;
}food;

// 蛇的每一节身体的对象(变量)
struct SNACKBODY
{
	int x;
	int y;
}snackBody;

// 蛇的整体的对象(变量)
struct SNACK
{
	struct SNACKBODY snackBodyList[WIDE * HIGH];
	// snackBodyList[0] == 蛇头
	int snackBodyCount;
	// 用于记录当前蛇的长 
}snack;





void initFood(void);

void initSnack(void);

void initUI(void);

void playGame(void);