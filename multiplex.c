#include <stdio.h>
int main ()
{
	int n,m;

	for(n=2; n<=9; ++n){
		for(m=1; m<=9; ++m)
			printf("%d * %d = %d\n",n,m, n*m);
		printf("\n");
	}
	return 0;
}
