#include <stdio.h>
int main()
{
	int a,b,choice,res ;
	printf("==== BITWISE OPERATIONS ====\n");
	printf("Enter The First Number:");
	scanf("%d",&a);
	printf("Enter The Second Number:");
	scanf("%d",&b);
	printf("=== MENU ===\n");
	printf("1. Bitwise AND\n");
	printf("2. Bitwise OR\n");
	printf("3. Bitwise XOR\n");
	printf("4. Bitwise NOT\n");
	printf("5. Left Shift (<<)\n");
	printf("6. Right Shift (>>)\n");
	printf("\nEnter YOur Choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			res = a & b;
			printf("Bitwise AND Result = %d",res);
			break;
		case 2:
			res = a | b;
			printf("Bitwise OR Result = %d",res);
			break;
		case 3:
			res = a ^ b;
			printf("Bitwise XOR Result = %d",res);
			break;
		case 4:
			res = ~a;
			printf("Bitwise NOT Result = %d",res);
			break;
		case 5:
			res = a << b;
			printf("Left Shift Result = %d",res);
			break;
		case 6:
			res = a >> b;
			printf("Right Shift Result = %d",res);
			break;
		default:
			printf("Invalid Choice.");
	}
	return 0;
}