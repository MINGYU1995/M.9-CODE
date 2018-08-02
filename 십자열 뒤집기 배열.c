#include <stdio.h>
int main()
{
	int a[20][20]={0};
	int n,x,y,i,j;
	for(i=1;i<=19;i++){
		{
		for(j=1;j<=19;j++)
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d",&n);//2
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&x,&y);//10 10 12 12
	
	for(j=1;j<=19;j++)
	{
		if(a[x][j]==0) a[x][j]=1;//가로줄
		else a[x][j] = 0;
		
	}
	for(j=1;j<=19;j++)
	{
			if(a[j][y]==0) a[j][y]=1;	//세로줄			
			else a[j][y] = 0;	
	
	}
	}
	for(i=1;i<=19;i++)
	{
		for(j=1;j<=19;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}





	getchar();
	getchar();
	getchar();
	return 0;


}
