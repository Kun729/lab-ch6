#include<stdio.h>
#include<stdlib.h>
#include"main.h";

void sub(student *p);

int main(void)
{
	int i;
	student std[3] = { {"970101","�|�l�@��","���p��",61,71,81 },
					   {"970102","�|�l�@��","������",92,82,72 },
					   {"970103","�|�l�@��","�i�j��",73,63,83 } };
	student *ps;
	ps = std;
	printf("\n");
	printf("=================================================\n");
	printf("  �Ǹ�  �Z��\t�m�W\t  ���  �^��  �ƾ�\n");
	printf("=================================================\n");
	for (i = 0; i < 3; i++)
	{
		printf("%6s %-10s %-8s %4d %4d %4d\n", (ps + i)->num, (ps + i)->clas, (ps + i)->name, (ps + i)->score[0], (ps + i)->score[1], (ps + i)->score[2]);
	}
	printf("\t�I�s�禡�e\n\n");
	sub(ps);
	printf("\t�I�s�禡��\n\n");
	for (i = 0; i < 3; i++)
	{
		printf("%6s %-10s %-8s %4d %4d %4d\n", (ps + i)->num, (ps + i)->clas, (ps + i)->name, (ps + i)->score[0], (ps + i)->score[1], (ps + i)->score[2]);
	}
	printf("\n");
}
void sub(student *p)
{
	for (int i = 0; i < 3; i++)
	{
		(p + i)->score[0] += 10;
		(p + i)->score[1] += 10;
		(p + i)->score[2] += 10;
	}
}