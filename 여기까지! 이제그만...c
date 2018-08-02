#include <stdio.h>
int main()
{
	int a,b,c=0;
	scanf("%d",&a);
	for(b=1;a>=b;b++)
	{
		c+=b;
		
		if(c>=a)break;
				
			
	}
	printf("%d",c);



	

	getchar();
	getchar();
	getchar();
	

	return 0;


}

