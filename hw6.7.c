#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[15][15],j,i,k,p,n;
	p=1;
	while(p==1)
	{printf("������1��15֮���������\n");
	scanf("%d",&n);
	if((n!=0)&&(n<=15)&&(n%2!=0))
	p=0;
	}
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	a[i][j]=0;
	j=n/2+1;
	a[1][j]=1;
	for(k=2;k<=n*n;k++)
	{i=i-1;
	j=j+1;
	if((i<1)&&(j>n))
	{i=i+2;
	j=j-1;
	}
	else{if(i<1)i=n;
	if(j>n)j=1;
	}
	if(a[i][j]==0)
	a[i][j]=k;
	else{i=i+2;
	j=j-1;
	a[i][j]=k;
	
	}
	}
	printf("\nħ����Ϊ��\n");
	for(i=1;i<=n;i++)
	{for(j=1;j<=n;j++)
	printf("%5d",a[i][j]);
	printf("\n");
	}
	return 0;
}
