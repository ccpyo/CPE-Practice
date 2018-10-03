#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int a,b,c;
	
while(scanf("%d %d",&a,&b)!=EOF)
{
	if(a>b)
	{
		
		int e[1000]={0};
		
		for(int i=0;i<b;i++)
		{
			scanf("%d",&c);
			e[c]=c;
			
		}
		
		for(int j=1;j<=a;j++)
		{
			if(e[j]!=j)
			{
				printf("%d ",j);
			}
		}
		
		printf("\n");
	}
	else
	{
		for(int i=0;i<a;i++)
		{
			scanf("%d",&c);
		}
		printf("*\n");
	}
	
}
	return 0;
	//printf("%d\n",ans);
}
