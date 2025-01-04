#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char a[10];
int n=5;
printf("Enter the elements:\n");
for (int i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}

for(i=1;i<n;i++)
{
  int temp=a[i];
  int j=i-1;
  while (j>=0 && a[j]>temp)
  {
    a[j+1]=a[j];
    j--;
  }
  a[j+1]=temp;
}

printf(" The sorted elements are: ");
for (i=0;i<n;i++)
{
  printf("%d ",a[i]);
}

getch();
}



















