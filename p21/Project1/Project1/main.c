#include<stdio.h>
#include<stdlib.h>

void stat(void);
void autom(void);

int main(void)
{
	printf("First call to each function:\n");
	stat();
	autom();

	printf("\n\nSecond call to each function:\n");
	stat();
	autom();
	printf("\n");
	system("pause");
	return 0;
}

void stat(void)
{
	static int array1[3];
	int i;

	printf("\nValues on entering staticArrayInt:\n");

	for (i = 0; i <= 2; i++)
		printf("array1[%d] = %d ", i, array1[i]);

	printf("\nValues on exiting staticArrayInt:\n");

	for (i = 0; i <= 2; i++)
		printf("array1[%d] = %d ", i, array1[i]+=5);

}


void autom(void)
{
	int array2[3] = { 1,2,3 };
	int i;

	printf("\n\nValues on entering staticArrayInt:\n");

	for (i = 0; i <= 2; i++)
		printf("array1[%d] = %d ", i, array2[i]);

	printf("\nValues on exiting staticArrayInt:\n");

	for (i = 0; i <= 2; i++)
		printf("array1[%d] = %d ", i, array2[i] += 5);

}