#include<stdio.h>

int is leap(int year);
int main()
{
int year,
printf("enter year\n",);
{
	scanf("%d,"&year);
	int r=is leap(year);
	switch(r)
{
		case-1;
		printf("%d is not a leap year\n",year);
		break;
		case 0;
		printf("%d is a quadremal leap year\n",year);
		break;
		case 1;
		printf("%d is a centuary year&not a leap year\n",year);
		case 2;
	
		printf("%d is a leap year\n",year);
		break;
		default;
		break;
	}
	return 0;
}
