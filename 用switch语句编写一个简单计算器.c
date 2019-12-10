//用switch语句编写一个简单计算器(实现任意两个数的加减乘除运算),两个数及运算符由键盘输入
//cjl_ahu@fixmail.com

int  main(){
	int a,b;
	double r;
	//a,b为任意两实数，r为运算结果 
	char ope;
	printf("请输入任意两个数,和运算符号（格式为数字运算符数字）："); 
    scanf("%d%c%d",&a,&ope,&b);
    //printf("请输入一个运算符号："); 
    //	scanf("%c",&ope);
	//printf("%c\n",ope); 

//	getchar();
//	printf("%c",ope);
//	ope=getchar();
	switch(ope)
	{
		case '+':r=a+b;break;
		case '-':r=a-b;break;
		case '*':r=a*b;break;
		case '/':r=(double)a/b;break;
	}
	printf("结果为："); 
	printf("%lf",r);
	getchar();
	getchar();
	return 0;
} 

//C语言程序设计-清华大学出版社-谭浩强
//C Primer Plus-人民邮电出版社
