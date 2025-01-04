#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n=5,s,f=0;
char a[5];
printf("Enter the elements to be searched:\n");
for (int i=0; i<n; i++)
{
	scanf("%d",&a[i]);
}
printf("Enter the element to be searched: ");
scanf("%d",&s);

for (i=0; i<n; i++)
{
	if(a[i] == s)
	{
		printf("Element is found at index--> %d",i);
		f=1;
		break;
	}

}
if (f!=1)
printf("Element not found");

getch();
}