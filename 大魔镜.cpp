#include <stdio.h>
int main()
{
	int n,a,b,c;
	scanf("%d",&n);
	int max,mid,min;
	if(100>n||n>999)
	{printf("WRONG DATA");}
	else
	{
	printf("x=");
	a=n/100;
	b=(n%100)/10;
	c=n%10;
	max =(a>b)?((a>c)?a:c):((b>c)?b:c);
	min =(a<b)?((a<c)?a:c):((b<c)?b:c);
	mid =a+b+c-max-min;
	printf("%d%d%d",max,mid,min);
	}	
	return 0;
}
