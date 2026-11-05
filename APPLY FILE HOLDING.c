#include <stdio.h>
struct Student 
{
    int rollono;
    char name[50];
    float mark;

};
union Contact
    {
    char phone[50];
    char email[20];

    };
int main()
    {
    struct Student s;
    union Contact c;
    FILE *fp;
    fp=fopen("student.tex","w");
    
    printf("Enter student roll number: "); 
    scanf("%d", &s.rollono);
    printf("Enter student name: ");
    scanf("%s", s.name);
    printf("Enter student mark: ");
    scanf("%f", &s.mark);
    printf("Enter phone number: ");
    scanf("%s", c.phone);
    // Writing data into file
    if (fp == NULL)
{
    printf("Unable to open file.");
    return 1;
}
fprintf(fp, "Rollno Number : %d\n", s.rollono);

fprintf(fp, "Name     : %s\n", s.name);
fprintf(fp, "Mark      : %.2f\n", s.mark);
fprintf(fp, "Phone     : %s\n", c.phone);
fclose(fp);
printf("\nStudent details written to file successfully.\n");
// Reading data from file
fp = fopen("student.txt", "r");
if (fp == NULL) 
{
    printf("Unable to open file."); 
    return 1;
}
printf("\n----- STUDENT DETAILS-----\n"); 
char line[100]; 
while (fgets(line, sizeof(line), fp) != NULL)
{
    printf("%s", line);
    
}

fclose(fp);
return 0;
    }