//求一分段函数
//cjl_ahu@foxmail.com
int main(){
	float x,y;
	printf("请输入X的值："); 
	scanf("%f",&x);
	if(x<1){
		y=x;
	}
	if(x>=1&x<10){
		y=2*x-1;
	}
	if(x>=10){
		y=3*x-11;
	}
	printf("y的值为%f",y);
	getchar();
	getchar();
	return 0; 
}
//C语言程序设计-清华大学出版社-谭浩强
