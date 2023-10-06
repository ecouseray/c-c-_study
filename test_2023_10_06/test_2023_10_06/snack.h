#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

#define WIDE 70
#define HIGH 20


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

int score = 0;
// 用于记录分数


void initFood(void);

void initSnack(void);

void initUI(void);