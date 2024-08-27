#pragma once

#include<stdio.h>
#include<string.h>

#define max 1000

struct peoinfo
{
	char name[20];
	int age;
	char sex[8];
	char tel[12];
	char address[40];
};

struct contact
{
	struct peoinfo data[max];
	int size;
};

void Initcon(struct contact* ps);
void AddContact(struct contact* ps);
void ShowContact(struct contact* ps);