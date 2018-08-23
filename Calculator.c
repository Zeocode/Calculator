#include<stdio.h>
#include<stdlib.h>
void sum(int x, int y);
void sub(int,int);
void multiply(int,int);
int main()
{
	int check;
	do 
	{
		
		printf("Calculator\n");
		printf("Insert numbers and use add sign etc etc in a single line like 1+2\n");
		int a,b;
		char ch;
		scanf("%d%c%d",&a,&ch,&b);
		switch(ch)
		{
			case '+':
				sum(a,b);
				break;
			case '-':
				sub(a,b);
				break;
			case '*':
				multiply(a,b);
				break;
			default:
				printf("Wrong Entry\n");
		}
		
		printf("press 0 to Quit\nor press any whole number\n");
		scanf("%d",&check);
	}while(check!=0);
		
}

void sum(int x, int y)
{
	int sum=x+y;
	printf("SUM = %d\n",sum);
	return;
}
void sub(int x, int y)
{
	int sum=x-y;
	printf("DIFFERENCE = %d\n",sum);
	return;
}
void multiply(int x, int y)
{
	int p=x*y;
	printf("PRODUCT = %d\n",p);
	return;
}
// end of code finally


