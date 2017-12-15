#include<stdio.h>
int main()
{
	printf("program for sum and avg");
	int i,a,sum=0,n;
	float avg=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		sum=sum+a;
	}
	avg=sum/n;
	printf("sum is %d",sum);
	printf("AVG IS %d",avg);
}
