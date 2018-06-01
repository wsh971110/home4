#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,min,temp,a[11];
	printf("请输入10个整数:\n");
	for(i=1;i<=10;i++)
	{printf("a[%d]=",i);
	scanf("%d",&a[i]);
	}
	printf("\n");
	printf("原数为：\n");
	for(i=1;i<=10;i++)
	pritnf("%5d",a[i]);
	printf("\n");
	for(i=1;i<=9;i++)
	{min=i;
	for(j=i+1;j<=10;j++)
	if(a[min]>a[j]) min=j;
	temp=a[i];
	a[i]=a[min];
	a[min]=temp;
	}
	printf("\n排序完后数字为：\n");
	for(i=1;i<=10;i++)
	printf("%5d",a[i]);
	printf("\n");
	return 0;
}
