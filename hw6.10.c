#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,up,low,num,spa,oth;
	char text[3][80];
	up=low=num=spa=oth=0;
	for(i=0;i<3;i++)
	{printf("�������%d�����ݣ�\n",i+1);
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
	printf("\n��дӢ����ĸ������%d\n",up);
	printf("\nСдӢ����ĸ������%d\n",low);
	printf("\n���ָ�����%d\n",num);
	printf("\n�ո������%d\n",spa);
	printf("\n�����ַ�����%d\n",oth);
	return 0;
}
