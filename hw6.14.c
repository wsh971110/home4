#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,resu;
	char s1[100],s2[100];
	printf("ÇëÊäÈë×Ö·û´®1£º");
	gets(s1);
	printf("ÇëÊäÈë×Ö·û´®2£º");
	gets(s2);
	i=0;
	while((s1[i]==s2[i])&&(s1[i]!='\0'))i++;
	if(s1[i]=='\0'&&s2[i]=='\0')
	resu=0;
	else
	resu=s1[i]-s2[i];
	printf("\n½á¹ûÎª£º%d",resu); 
	return 0;
}
