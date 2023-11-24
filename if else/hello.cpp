
#include <stdio.h>
int main()
{
	int a, b, sum, choice;
	printf(" addition perform\n");
	printf(" odd and even number\n ");
	printf(" natural number \n ");
	printf("exit");
	printf("enter your choice");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		printf("enter the  two number");
		scanf("%d%d", &a, &b);
		sum = a + b;
		printf("sum is %d", sum);
		break;

	case 2:
		printf("enter the number");
		scanf("%d", &a);
		if (a % 2 == 0)
		{
			printf("even number");
		}
		else
		{
			printf("odd number");
		}
		break;
	case 3:
		printf("enter the number");
		scanf("%d", &b);
		for (a = b; a <= b; a++)

			break;
	case 4:
		printf("exit");
		break;
	default:
		printf(" invalid number");
	}
}
