#include <iostream>
#include <math.h>
#include <string.h>
#define max0 10
#define max1 81
using namespace std;
 
#define  N (3)
 
/************************************************************************/
/*
        求向量按模最大值(相当于向量的无穷范数)
*/
/************************************************************************/
	double A[max0][max0] = { 0 };//定义矩阵A 
	double Ani[max0][max0] = { 0 };//定义矩阵A的逆矩阵 
	double temp[max0][max0]={0};
	double result[max0]={0}; 
	double X[max0] = { 0 };//定义一个初始向量
	double conddd[max1]={0};
	int t_kmax,t_kmin;
double GetMax(double *Array)
{
        double max=0;
        for (int i=0;i<N;++i)
        {
                if (max < fabs(*(Array+i)))
                {
                        max = fabs(*(Array+i));
                        t_kmax=i;
                }
        }
        return max;
}
double GetMin(double *Array)
{
	int i;
        double Min=10000;
        for (i=0;i<max0;++i)
        {
                if (Min > fabs(*(Array+i)))
                {
                        Min = fabs(*(Array+i));
                        t_kmin=i;
                }
        }
        return Min;
}
 
/************************************************************************/
/*
        矩阵相乘函数
*/
/************************************************************************/
void matrixMulti(double array[max0][max0],double *a0)
{
        int i ,j; 
        double *result = new double[max0];
        memset(result,0,max0*sizeof(double));
 
        for (i=0;i<max0;++i)
        {        
                
                for (j =0;j<max0;++j)
                {
                        result[i]+=array[i][j]*a0[j];
        
                }
                //cout<<"a0["<<i<<"]=" <<result[i]<<endl;        
        }
        for (i=0;i<max0;++i)
        {
                *(a0+i)=result[i];
        }
        delete [] result;
}
int wmax(int a, int b) 
{
	if (a > b)
		return a;
	else
		return b;
}

int wmin(int a, int b) {
	if (a > b)
		return b;
	else
		return a;
}
void initArray(double A[max0][max0], double t) {
	int i,j;
	for ( i = 0; i < max0; i++) {
		for (j = 0; j < max0; j++) {
			
			if (i == j) {
				A[i][j] = 100 * (i + 1 + 0.1) / (i + 1 + t);
			}
			if (((i + 1) >= wmax(j + 1 - 3, 1))&(i < j)) 
				A[i][j] = -(i + 1 + j + 1) / (1 + t);
			if ((i > j)&(i + 1) <= wmin((j + 1 + 3), 1000))
				A[i][j] = -(i + 1 + j + 1) / (1 + t);
			}
		}
	}


int main()
{
	int i,j,k,l,m,n,p,q,t,num_x,xx1,iter;
	double t_k[max1],maxcond = 0, mincond = 10000,delta,maxElemt1,maxElemt2,minElemt2,condd;
	double e;
	for(i=0;i<max1;i++){
		t_k[i]=0.05*i;
	}

	for(t=0;t<max1;t++){
	initArray(A,t_k[t]);
	initArray(Ani,t_k[t]);
	}
	for ( num_x=0; num_x < max1; num_x++) {

		maxcond = 0, mincond = 10000;
		initArray(A,t_k[num_x]);
		for(i=0;i<max0;i++){
			X[i]=0;
		}
		X[0]=1;
		e = 0.0000001, delta = 1;
		iter = 0;//定义迭代次数 
		do
	{        
		++iter;                
	    maxElemt1=GetMax(X);

		for (int j=0 ;j<max0;++j)
		{
			*(X+j)=*(X+j)/maxElemt1;                //列向量归一化
		}
		matrixMulti(A,X);                
		maxElemt2 = GetMax(X);
		minElemt2 = GetMin(X);

	}while(fabs((maxElemt2-maxElemt1)/maxElemt1 )> 0.0000001);
	conddd[num_x]=maxElemt2/minElemt2;
	printf("t_k = %e,",t_k[num_x]);
	printf("迭代次数 = %d,",iter);
	printf("最大特征值 = %d\n",maxElemt2);
	// cout<<" t_k = "<<t_k[num_x];
		//cout<<" 迭代次数n = "<<iter;
	//cout<<" 最大特征值="<<maxElemt2<<endl;
	//cout<<"最小特征数="<<minElemt2<<endl;
	}
	maxcond = GetMax(conddd); 
	mincond = GetMin(conddd);
	printf("当t_k = %e,条件数最大 = %e",t_kmax,maxcond); 
	printf("当t_k = %e,条件数最小 = %e",t_kmin,mincond);	
	 return 0;
}
