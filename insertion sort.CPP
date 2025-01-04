/*#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char a[10],b[6];
int n=6;
printf("Enter the elements: \n");
for ( int i=0;i<n;i++)
{
   scanf("%d",&a[i]);
}

b[0]=a[0];
for (i=1;i<n;i++)
{
  b[i]=a[i];
  for (int j=i;j>0;j--)
  {
    if (b[j]<b[j-1])
    {
      int temp=b[j];
      b[j]=b[j-1];
      b[j-1]=temp;
    }
    else
    {
      break;
    }
  }
}

printf("The sorted elements are:");
for (i=0;i<n;i++)
{
   printf("%d ",b[i]);
}

getch();
}*/

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



















