#include <stdio.h>
#include <stdlib.h>
#define N 5 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[N],i,temp;
	printf("请输入5个数字：\n");
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	printf("初始数组为：\n");
	for(i=0;i<N;i++)
	printf("%4d",a[i]);
	for(i=0;i<N/2;i++)
	{temp=a[i];
	a[i]=a[N-i-1];
	a[N-i-1]=temp;
	}
	printf("\n排列后数组为：\n");
	for(i=0;i<N;i++)
	printf("%4d",a[i]);
	printf("\n");
	return 0;
}
