#include <stdio.h>
int main()
{
   int a,b,n,m,i;
   scanf("%d %d %d %d",&a,&m,&b,&n);
   for(i=0;i<n-1;i++)
		 {
			 a*=m;
			 a+=b;

				   }
			printf("%d",a);

	getchar();
	getchar();
	getchar();
}
