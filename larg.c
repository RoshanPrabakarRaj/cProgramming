/*
 * larg.c
 *
 *  Created on: Dec 22, 2015
 *      Author: prosh
 */

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter the three numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("%d is the largest number",a);

	}
	else if(b>a && b>c)
	{
		printf("%d is the largest number",b);
	}
	else
	{
		printf("%d is greatest number",c);
	}
	//
	return 0;

	getch();

}
