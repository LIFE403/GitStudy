#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main()
{
	int a = 0, b = 0, mathInput = 0, answer = 0;
	char mathOutput = 0;

	srand(time(NULL));

	a = (rand() % 20) + 1;
	b = (rand() % 20) + 1;
	mathInput = rand() % 4;

	switch (mathInput)
	{
	case 0:
		mathOutput = '+';
		answer = a + b;
		break;
	case 1:
		mathOutput = '-';
		answer = a - b;
		break;
	case 2:
		mathOutput = '*';
		answer = a * b;
		break;
	case 3:
		mathOutput = '/';
		answer = a / b;
		break;
	}

	printf("[1/10] %d %c %d = %d", a, mathOutput, b, answer);

	return 0;
}