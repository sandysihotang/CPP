#include <stdio.h>

int main(){
	int X,i;
	
	scanf("%d", &X);
	
	for( i=1; i<=X; i++)
	{
		if (1==i%2)
		{
		printf("%d\n", i);
		}		
	}
	
	return 0;
}

