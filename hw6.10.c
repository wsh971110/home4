#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,up,low,num,spa,oth;
	char text[3][80];
	up=low=num=spa=oth=0;
	for(i=0;i<3;i++)
	{printf("请输入第%d行数据：\n",i+1);
	gets(text[i]);
	for(j=0;j<80&&text[i][j]!='\0';j++)
	{if(text[i][j]>='A'&&text[i][j]<='Z')
	up++;
	else if(text[i][j]>='a'&&text[i][j]<='z')
	low++;
	else if(text[i][j]>='0'&&text[i][j]<='9')
	num++;
	else if(text[i][j]==' ')
	spa++;
	else
	oth++;
	} 
	
	}
	printf("\n大写英文字母个数：%d\n",up);
	printf("\n小写英文字母个数：%d\n",low);
	printf("\n数字个数：%d\n",num);
	printf("\n空格个数：%d\n",spa);
	printf("\n其他字符数：%d\n",oth);
	return 0;
}
