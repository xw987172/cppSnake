#include "iostream"
#include "stdafx.h"
#include <conio.h>
#include <time.h>
//using namespace std;
using std::cout;
using std::endl;
using std::cin;

char direction_a, direction_b; // 方向a,b 用于方向的限制
int score, num, fool_x, fool_y, speed = 100; // 得分，num用于蛇身起步，x,y是食物坐标
bool end;

struct node {	// 蛇身节点
	int x, y;
	node *next;
}*head =NULL,*p,*tail;

void myinit();			// 初始化开始界面
void start();			//游戏开始入场
void init_snake();		//初始化蛇身
void delete_snake();	// 删除蛇身
//void control();			// 方向控制
//void move();			// 蛇身移动
//void limit();			// 方向限制
//void panduan();			// 配合limit限制方向
//void fool();			// 食物的出现以及食物被吞
//void isEnd();			// 结束判断
//void zhuangwei();		// 撞尾判断
//void zhuangqiang();		// 撞墙判断

int main() {
	srand((unsigned)time(NULL));
	myinit();
	cin >> direction_a;
	cout << direction_a << endl;
	if (direction_a != 'y' && direction_b != 'Y')
		return 0;
	do {
		system("cls");
		end = false;
		start();
		delete_snake();
		init_snake();
		score = 0;
		num = 0;
		fool_x = (rand() % (79 - 2 + 1)) + 2;
		fool_y = (rand() % (22 - 2 + 1)) + 2;
		gotoxy(fool_x, fool_y);
		Sleep(1000);
	} while (!end);

}

void myinit() {
	cout << "System is init..." << endl;
	direction_b = 'Y';
}

void start() 
{
	cout << "gaming is starting..." << endl;
}

void delete_snake() 
{
}

void init_snake()
{
}

