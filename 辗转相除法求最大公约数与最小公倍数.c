
//输入两个正整数m和n，求它们的最大公约数和最小公倍数。（P137习题3）
//cjl_ahu@foxmail.com

#include<stdio.h> 
int main(){
	int m,n,r,i,j;
	printf("Please input: (m  n)\n");
	scanf("%d%d",&m,&n);
	i=m,j=n;
	r=m%n;
	while(r!=0){
		m=n;
		n=r;
		printf("%4d,%4d\n",m,n);
		r=m%n;
	}
	printf("--------result---------\n");
	printf("最大公约数为：%2d\n",n);	
	printf("最小公倍数为：%2d",i*j/n);
	return 0; 
}


//C语言程序设计-清华大学出版社-谭浩强

