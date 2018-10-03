#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i,j,n,ans=1,count=1;

	while(scanf("%d %d",&i,&j)!=EOF){
		//for(int a=i;a<=j;a++){
		int i2=i;
		while(i<=j){
			int a=i;
			while(a!=1){
				if(a%2==0)
				{a=a/2; count=count+1;}
				else
				{a=a*3+1; count=count+1;}
			}
		//}
		if(count>ans)
		{ans=count;}
		count=1;i=i+1;
		}
		printf("%d %d %d\n",i2,j,ans);ans=1;
	}
	return 0;
	//printf("%d\n",ans);
}
