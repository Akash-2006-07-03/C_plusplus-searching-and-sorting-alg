#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char a[7];
int n=7;
printf("Enter the elements:\n");
for (int i=0; i<n; i++)
{
	scanf("%d",&a[i]);
}

for (int x=0; x<n-1; x++)
{
	for (i=0; i<n-1; i++)
	{
	   if (a[i]>a[i+1])
	   {
	     int temp=a[i];
	     a[i]=a[i+1];
	     a[i+1]=temp;
	   }
	}
}
printf("Sorted array is: ");
for (i=0; i<n; i++)
{
	printf("%d ",a[i]);
}

getch();
}