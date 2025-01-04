#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char a[10];
int n=5;
printf("Enter the array elements...! :\n");
for (int i=0;i<n;i++)
{
   scanf("%d",&a[i]);
}
for (i=0;i<n-1;i++)
{
   for (int j=i+1;j<n;j++)
   {
     if (a[i]>a[j])
     {
       int temp=a[i];
       a[i]=a[j];
       a[j]=temp;
     }
   }
}

printf("Sorted array is : ");
for (i=0;i<n;i++)
{
printf("%d ",a[i]);
}

getch();
}