#include<stdio.h>
#include<stdlib.h>
#define STUDENTS 3
#define EXAMS 4

int mini(const int grades[][EXAMS], int pupils, int test);
int maxi(const int grades[][EXAMS], int pupils, int test);
double aver(const int setOfGrades[], int tests);
void printArray(const int grades[][EXAMS], int pupils, int tests);


int main(void)
{
	int student;
	const int setOfGrades[STUDENTS][EXAMS]=
	{
		{77,68,86,73},
		{96,87,89,78},
		{70,90,86,81}
	};
	printf("The array is:\n");
	printArray(setOfGrades, STUDENTS, EXAMS);

	printf("\n\nLowest grade: %d\nHighest grade: %d\n",
		mini(setOfGrades,STUDENTS,EXAMS),
		maxi(setOfGrades, STUDENTS, EXAMS));
	for ( student = 0; student < STUDENTS; student++)
		printf("The average grade for student %d is %.2f\n",
			student, aver(setOfGrades[student], EXAMS));

	system("pause");
	return 0;
}

int mini(const int grades[][EXAMS], int pupils, int test)
{
	int i, j;
	int low = 100;
	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < test; j++)
		{
			if (grades[i][j] < low)
				low = grades[i][j];
		}
	}
	return low;
}
int maxi(const int grades[][EXAMS], int pupils, int test)
{
	int i, j;
	int high = 0;
	for (i = 0; i < pupils; i++)
	{
		for ( j = 0; j < test; j++)
		{
			if (grades[i][j] > high)
				high = grades[i][j];
		}
	}
	return high;
}
double aver(const int setOfGrades[], int tests)
{
	int i;
	int total = 0;

	for (i = 0; i < tests; i++)
		total += setOfGrades[i];

	return(double)total / tests;
}
void printArray(const int grades[][EXAMS], int pupils, int tests)
{
    int i, j;
	printf("                 [0]  [1]  [2]  [3]");
	for ( i = 0; i < pupils; i++)
	{
		printf("\n studentfGrades[%d]", i);
		for (j = 0; j < tests; j++)
			printf("%-5d", grades[i][j]);
	}
}