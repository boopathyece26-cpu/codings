#include <stdio.h>
int main()
{
	int a,b;
	int *p,*q;
	char str[100];
	char*s;
	int length=0;
	printf("Enter two number: ");
	scanf("%d %d",&a,&b);
	p=&a;
	q=&b;
	if(*p>*q)
	{
	    printf("Largest number=%d\n",*p);
	}
	else
	{
		printf("Largest number=%d\n",*q);
	}
	printf("Enter a string: ");
	scanf("%99s",str);
	s=str;
	while(*s!='\0')
	{
		length++;
		s++;
	}
	printf("Length of string=%d\n",length);
	return 0;
}