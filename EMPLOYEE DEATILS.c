#include<stdio.h>
struct Employee
{
	int id;
	float salary;
	
};
union Department
{
	int deptno;
	
};
int main ()
{
	struct Employee e;
	union Department d;
	FILE*fp;
	char ch;
	printf("Enter Employee 	ID:");
	scanf("%d",&e.id);
	printf("Enter Salary:");
	scanf("%f",&e.salary);
	printf("Enter Department Number:");
	scanf("%d",&d.deptno);
	fp=fopen("emp.txt","w");
	fprintf(fp,"Employee ID;%d\n,e.id");
	fprintf(fp,"salary:%2f\n",e.salary);
	fprintf(fp,"Department Number:%d\n",d.deptno);
	fclose(fp);
	fp=fopen("emp.txt","r");
	printf("\nEmployee Details:\n");
	while ((ch=fgetc(fp))!=EOF)
	{
		printf("%C",ch);
		
	}
	fclose(fp);
	return 0;
}