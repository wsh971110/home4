#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[11]={1,3,5,7,9,11,13,15,17,19};
	int temp1,temp2,num,end,i,j;
	printf("原数组为：\n");
	for(i=0;i<10;i++)
	printf("%5d",a[i]);
	printf("\n");
	printf("请输入一个数据：\n");
	scanf("%d",&num);
	end=a[9];
	if(num>end)
	a[10]=num;
	else
	{for(i=0;i<10;i++)
	{if(a[i]>num)
	{temp1=a[i];
	a[i]=num;
	for(j=i+1;j<11;j++)
	{temp2=a[j];
	a[j]=temp1;
	temp1=temp2;
	}
	break;}
	}
    }
    printf("重新排列后的数组为：\n");
    for(i=0;i<11;i++)
    printf("%5d",a[i]);
    printf("\n");
	return 0;
}
