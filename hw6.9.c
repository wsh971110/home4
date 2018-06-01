#include <stdio.h>
#include <stdlib.h>
#define N 15
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,num,top,end,mid,loca,a[N],flag=1,sign;
	char c;
	printf("请从大到小输入15个数：\n");
	scanf("%d",&a[0]);
	i=1;
	while(i<N)
   {scanf("%d",&a[i]);
   if(a[i]>=a[i-1])
   i++;
   else
   printf("请重新输入一个数字：\n");
   }
   printf("\n");
   for(i=0;i<N;i++)
   printf("%5d",a[i]);
   printf("\n");
   while(flag)
   {printf("请问你要查找哪一个数字：");
   scanf("%d",&num);
   sign=0;
   top=0;
   end=N-1;
   if((num<a[0])||(num>a[N-1]))
   loca=-1;
   while((!sign)&&(top<=end))
   {mid=(end+top)/2;
   if(num==a[mid])
   {loca=mid;
   printf("找到该数字%d的位置在%d\n",num,loca+1);
 sign=1;
   }
   else if(num<a[mid])
   end=mid-1;
   else
   top=mid+1; 
   }
   if(!sign||loca==-1)
   printf("找不到该数字%d",num);
   printf("\n");

   flag=0;
   }
	return 0;
}
