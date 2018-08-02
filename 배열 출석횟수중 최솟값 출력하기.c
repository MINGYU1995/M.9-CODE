#include <stdio.h>
int main()
{
	int a[24]={};
	int i,n,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	
	if(a[i]<n)
		n=a[i];
	}
		
	printf("%d ",n);

	
		
	 

				   
			

	getchar();
	getchar();
	getchar();
	return 0;


}
