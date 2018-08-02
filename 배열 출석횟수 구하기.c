#include <stdio.h>
int main()
{
	int a[24]={};
	int i,n,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&j);
		a[j]=a[j]+1;
	}

	
	for(i=1;i<=23;i++)
		{

		printf("%d ",a[i]);


	}

	 

				   
			

	getchar();
	getchar();
	getchar();
	return 0;


}
