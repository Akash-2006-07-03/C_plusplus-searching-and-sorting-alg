#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char a[5];
int s,f=0,n=5;
printf("Enter the elements to be searched:\n");
for (int i=0; i<n; i++)
{
	scanf("%d",&a[i]);
}

printf("Enter the element to be searched: ");
scanf("%d",&s);

int low = 0;
int high = n-1;
int mid;
while (low<=high)
{
	mid=(low+high)/2;
	if (a[mid] == s)
	{
	  f=1;
	  printf("Element found at index--> %d",mid);
	  break;
	}
	if (a[mid]  > s)
	{
	  high=mid-1;
	}
	else
	{
	  low = mid+1;
	}

}

if (f!=1)
printf("Element not found");

getch();
}