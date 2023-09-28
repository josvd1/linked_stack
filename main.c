#include "stack_functions.h"

int main()
{
	int choice = 0;

	printf("\n*********Stack operations using inked ist*********\n");
	printf("---\n");

	while (choice != 4)
	{
		printf("\n\nChoose one from the below options...\n");
		printf("\n1. Push\n2. Pop\n3. Show\n4. Exit\n");
		printf("\n Enter your choice\n");

		scanf("%d", & choice);

		if (choice > 4 || choice < 1)
		{
			printf("Invalid Input, closing program\n");
			return (0);
		}

		switch(choice)
		{

			case 1:
			{
				push();
				break;
			}

			case 2:
			{
				pop();
				break;
			}

			case 3:
			{
				display();
				break;
			}

			case 4:
			{
				printf("Exiting...\n");
				return (0);
			}

		}
	}
}