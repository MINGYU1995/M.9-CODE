#include <stdio.h>
int main()
{
	int a[101][101]={};
	int h,w,k,j,i;
	int n;
	int l;
	int d;
	int x,y;
	scanf("%d %d",&h,&w);

	scanf("%d",&n);
	for(i=1;i<=n;i++){
			scanf("%d %d %d %d",&l,&d,&x,&y);
	
	
	for(j=0;j<l;j++)
	{
		if(d==0) a[x][y+j]=1;
		else a[x+j][y]=1;
		
	}
	}
	for(j=1;j<=h;j++)
	{
		for(k=1;k<=w;k++){
			printf("%d ",a[j][k]);
		}
		printf("\n");
	}
	

	getchar();
	getchar();
	getchar();
	return 0;


}
