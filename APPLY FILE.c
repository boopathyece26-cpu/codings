#include <stdio.h>
struct Student
{
	int rollno;
	char names[50];
	float mark;
	
};
union Contact
{
	char phone[15];
	char email[50];
	
};
int main()
{
	struct Student s;
	union Contact c;
	FILE *fp;
	printf("Enter student roll number:");
	scanf("%d",&s.rollno);
	
	printf("Enter student name:");
	scanf("%s",s.names);
	
	printf("Enter student mark:");
	scanf("%f",&s.mark);
	printf("Enter the phone number:");
	scanf("%s",c.phone);
	
	//Writting data into file
	fp=fopen("student.txt","w");
	
	if(fp==NULL)
	{
		printf("Unable to open file.");
		return 1;
	}
	fprintf(fp,"Roll Number:%d\n",s.rollno);
	fprintf(fp,"name       :%s\n",s.names);
	fprintf(fp,"Mark       :%2f\n",s.mark);
	fprintf(fp,"Phone      :%s\n",c.phone);
	fclose(fp);
	printf("\nStudent deatils written to file successfully.\n");
	
	//Reading data from file 
	fp=fopen("student.txt","r");
	if(fp==NULL)
	{
		printf("Unable to open file.");
		return 1;
	}
	printf("\n-----STUDENT DEATILS-----\n");
	char line[100];
	while(fgets(line,sizeof(line),fp)!=NULL)
	{
		printf("%s",line);
	}
	fclose(fp);
	return 0;
	
	
	
	
}