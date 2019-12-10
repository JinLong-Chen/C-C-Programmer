 //给出一个百分制成绩，要求输出成绩等级A、B、C、D、E。90分以上为A，81－89分为B，70－79分为C，60－69分为D，60分以下为E。
 //cjl_ahu@foxmail.com
 
 int main(){
	int score;//分数 
	char degree;
	printf("请输入分数："); 
	scanf("%d",&score);
	if(score<0||score>100){
		printf("输入错误请重新输入,分数应在0-100之间！");
		scanf("%d",&score);
	} 
	switch(score/10){
	case 10: 
	case 9: degree='A';printf("%d分为%c等级",score,degree);break;
	case 8: degree='B';printf("%d分为%c等级",score,degree);break; 
	case 7: degree='C';printf("%d分为%c等级",score,degree);break;
	case 6:	degree='D';printf("%d分为%c等级",score,degree);break;
	default: degree='E';printf("%d分为%c等级",score,degree);break;
	}
	getchar();
	getchar();
	return 0; 
}

//C语言程序设计-清华大学出版社-谭浩强
//C Primer Plus-人民邮电出版社
