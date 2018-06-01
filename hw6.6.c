#include <stdio.h>
#include <stdlib.h>
#define N 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,a[N][N];
	for(i=0;i<N;i++)
	{a[i][i]=1;
	a[i][0]=1;
	}
	for(i=2;i<N;i++)
	for(j=1;j<=i-1;j++)
	a[i][j]=a[i-1][j-1]+a[i-1][j];
	for(i=0;i<N;i++)
	{for(j=0;j<=i;j++)
	printf("%6d",a[i][j]);
	printf("\n");
	}
	printf("\n");
	return 0;
}
