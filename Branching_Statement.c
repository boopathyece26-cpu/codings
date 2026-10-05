#include <stdio.h>
int main()
{
	int a,b,choice,res ;
	printf("==== BRANCHING STATEMENT ====\n");
	printf("Enter The First Number:");
	scanf("%d",&a);
	printf("Enter The Second Number:");
	scanf("%d",&b);
	printf("=== MENU ===\n");
	printf("1. Check Positive, Negative ,or Zero\n");
	printf("2. Check Even or Odd\n");
	printf("3. Find Largest Of Two NUmbers\n");
	printf("4. Check Divisiblity By 5\n");
	printf("\nEnter YOur Choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			if (a>0)
			{
				printf("%d is Positive",a);
			}
			else if (a<0)
			{
				printf("%d is Negative",a);
			}
			else
			{
				printf("%d is Zero",a);
			}
			break;
		case 2:
			if (a % 2 == 0)
			{
				printf("%d is Even",a);
			}
			else
			{
				printf("%d is Odd",a);
			}
			break;
		case 3:
			if (a > b)
			{
				res=a;
				printf("%d is Largest Number",res);
			}
			else if (a<b)
			{
				res=b;
				printf("%d is Largest Number",res);
			}
			else
			{
				printf("Both Numbers Are Equal");
			}
			break;
		case 4:
			if (a % 5 == 0)
			{
				res=a;
				printf("%d is Divisible By 5",res);
			}
			else
			{
				res=a;
				printf("%d is NOT Divisible By 5",res);
			}
			break;
		default:
			printf("Invalid Choice.");
	}
	return 0;
}