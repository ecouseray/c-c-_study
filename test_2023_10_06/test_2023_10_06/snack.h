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

// �ߵ�ÿһ������Ķ���(����)
struct SNACKBODY
{
	int x;
	int y;
}snackBody;

// �ߵ�����Ķ���(����)
struct SNACK
{
	struct SNACKBODY snackBodyList[WIDE * HIGH];
	// snackBodyList[0] == ��ͷ
	int snackBodyCount;
	// ���ڼ�¼��ǰ�ߵĳ� 
}snack;

int score = 0;
// ���ڼ�¼����


void initFood(void);

void initSnack(void);

void initUI(void);