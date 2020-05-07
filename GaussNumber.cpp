#include <iostream>
#include<string.h>
#include <time.h>

using namespace std;
int max = 100, min = 1, m, n, num = 0;
string user;

void printCaidan()
{
	cout << "********************" << endl;
	cout << "进入主菜单，请选择：" << endl;
	cout << "1.设定猜数范围" << endl;
	cout << "2.开始猜数游戏" << endl;
	cout << "3.显示用户猜对成功次数" << endl;
	cout << "4.退出游戏" << endl;
	cout << "********************" << endl;
}
void Gauss(int x)
{
	switch (x)
	{
	case 1:
		cout << "最大值设置为：";
		cin >> max;
		cout << "最小值设置为:";
		cin >> min;
		// num = rand() % max +min; 
		break;
	case 2:
		m = min + rand()% (max-min);
		while (1)
		{
			cout << "请输入您所猜的数字：" << endl;
			cin >> n;
			while (!cin)
			{
				cin.clear();
				cin >> n;
			}
			if (n == 0)
				cin >> n;
			if (n == m)
			{
				cout << "恭喜您猜对了" << endl;
				num = num + 1;
				break;
			}
			else if (n > m)
			{
				cout << "您猜大了" << endl;
			}
			else
			{
				cout << "您猜小了" << endl;
			}
		}
	case 3:
		cout << user << "共猜对" << num << "次！" << endl;
		break;
	case 4:
		cout << "退出游戏！" << endl;
		break;
		return;
	}
}


int main()
{
	void printCaidan();
	void Gauss(int x);
	srand(time(0));
	char ch;
	int x;
	cout << "*********************"<<endl;
	cout << "开始游戏,请输入用户名" << endl;
	cin >> user;
	cout << endl;
	printCaidan();
	while ((cin >> x) && x != 4)
	{
		Gauss(x);
		if (x == 4)
			return 0;
		printCaidan();
	}
	system("pause");
	return 0;
}
