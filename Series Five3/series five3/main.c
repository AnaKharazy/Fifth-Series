#include <stdio.h>

int main ()

{
	int time,cost1=0,cost2=0,ch;
	printf("call type:(foreign=1/internal=2:)");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("call time:(min)");
		scanf("%d",&time);
		cost1+=(4000*time);
	}
	else if(ch==2)
	{
		printf("call time:(min)");
		scanf("%d",&time);
		cost1+=(150*time);
	}
	printf("internet type:(foreign=1/internal=2:)");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("internet usage time:(min)");
		scanf("%d",&time);
		cost2+=(1300*time);
	}
	else if(ch==2)
	{
		printf("connection time:(min)");
		scanf("%d",&time);
		cost2+=(800*time);
	}
	printf(" call fee : %d \n internet cost: %d ",cost1,cost2);

    return 0;

}