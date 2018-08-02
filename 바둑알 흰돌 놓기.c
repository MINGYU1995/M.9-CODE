#include <stdio.h>
int main()
{
	int a[20][20]={0};
	int n,i,j,x,y;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&x,&y);
		a[x][y]=1;
		
	}
	for(j=1;j<=19;j++){

		for(i=1;i<=19;i++){
		
		printf("%d ",a[j][i]);
		
		}
		printf("\n");
		
	}
	

	


			
		
			
	

	
		
	

	
		
	 

				   
			

	getchar();
	getchar();
	getchar();
	return 0;


}
