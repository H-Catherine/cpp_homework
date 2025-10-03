#include<stdio.h>
int main()
{
	int A,B,C,a,b,c;
	scanf("%d %d %d\n",&A,&B,&C);
	scanf("%d %d %d",&a,&b,&c);
	if(A>a)printf("First");
	if(A<a)printf("Second");
	if(A==a)
	{
	  if(B>b)printf("First");
	  if(B<b)printf("Second");
	  if(B==b){
	           if(C>c)printf("First");
			   if(C>c)printf("Second");
	           if(C==c)printf("Same");  
	  }
	}	
	return 0;
}
