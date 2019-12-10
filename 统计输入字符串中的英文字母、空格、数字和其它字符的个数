//输入两个正整数m和n，求它们的最大公约数和最小公倍数。（P137习题3）
//cjl_ahu@foxmail.com

#include<stdio.h> 
int main(){
	char a;
	int digital=0,letter=0,space=0,other=0;
	printf("请输入一串字符：\n");
	while((a=getchar())!='\n'){
		if((a>='a' && a<='z')||(a>='A'&&a<='Z'))
			letter++;
		else if(a>='0'&a<='9')
			digital++;
		else if(a==' ')
			space++;
		else 
			other++;
	}
	printf("这串字符中共有英文字母%d个，数字%d个，空格%d个，其他字符%d个\n",letter,digital,space,other);
	return 0;
}
//C语言程序设计-清华大学出版社-谭浩强
