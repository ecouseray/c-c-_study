#pragma once

#include <stdio.h>
#include <string.h>
#include <assert.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;


typedef struct Contact
{
	PeoInfo data[MAX];
	int count;
}Contact;



void initContact(Contact* pc);


void AddContact(Contact* pc);

void ShowContact(Contact* pc);