#include<stdio.h>
int main()
{
	printf("ÇëÊäÈëÈı±ß³¤£º");
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a<0||b<0||c<0||a+b<=c||a+c<=b||b+c<=a)
	{
		printf("FALSE");
	}	
	else
	{
		printf("TRUE");
	}
	return 0;
}

