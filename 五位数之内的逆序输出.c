//给一个不多于5位的正整数，要求：①求出它是几位数；②分别打印出每一位数字；③按逆序打印出各位数字，例如原数为321，应输出123。（习题9）
//cjl_ahu@foxmail.com

int main(){
	int integer,integer2,i,result=0,one,two,three,four,five;
	//integer为给定的某一不多于5位的正整数
	//result 为逆序打印的数 
	printf("请输入某一整数(不多于五位)："); 
	scanf("%d",&integer) ;
	integer2=integer;
	if(integer>99999||integer<0){ 
		printf("输入的数超过五位，发生错误，退出程序！");
		return 0; 
	} 
	else
	{
		for(i=1;i<=5;i++) 
		{
			integer=integer/10;
			result=result*10+integer; 
			if(integer==0){
				printf("输入的数为%d位数.\n",i);
				break;
	                                                		}			
		}
	}
	switch(i){
	case 1:
		one=integer2;
		result=one;
		printf("逆序输出结果为：%d.\n",result);
		break;
	case 2:
		two=integer2/10;
		one=integer2-two*10;
		result=one*10+two;
		printf("逆序输出结果为：%d.\n",result);
		break;
	case 3:
		three=integer2/100;
		two=(integer2-three*100)/10;
		one=integer2-three*100-two*10;
		result=one*100+two*10+three;
		printf("逆序输出结果为：%d.\n",result);
		break;
	case 4:
		four=(integer2-five*10000)/1000;
		three=(integer2-five*10000-four*1000)/100;
		two=(integer2-five*10000-four*1000-three*100)/10;
		one=integer2-five*10000-four*1000-three*100-two*10;
		result=one*1000+two*100+three*10+four;
		printf("逆序输出结果为：%d.\n",result);
		break;
	case 5:
		five=integer2/10000;
		four=(integer2-five*10000)/1000;
		three=(integer2-five*10000-four*1000)/100;
		two=(integer2-five*10000-four*1000-three*100)/10;
		one=integer2-five*10000-four*1000-three*100-two*10;
		result=one*10000+two*1000+three*100+four*10+five;
		printf("逆序输出结果为：%d.\n",result);
		break; 
	}
	getchar();
	getchar();
	return 0;
}  

//C语言程序设计-清华大学出版社-谭浩强
//C Primer Plus-人民邮电出版社
