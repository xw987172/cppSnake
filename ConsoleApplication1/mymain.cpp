#include "iostream"
#include "stdafx.h"
#include <conio.h>
#include <time.h>
//using namespace std;
using std::cout;
using std::endl;
using std::cin;

char direction_a, direction_b; // ����a,b ���ڷ��������
int score, num, fool_x, fool_y, speed = 100; // �÷֣�num���������𲽣�x,y��ʳ������
bool end;

struct node {	// ����ڵ�
	int x, y;
	node *next;
}*head =NULL,*p,*tail;

void myinit();			// ��ʼ����ʼ����
void start();			//��Ϸ��ʼ�볡
void init_snake();		//��ʼ������
void delete_snake();	// ɾ������
//void control();			// �������
//void move();			// �����ƶ�
//void limit();			// ��������
//void panduan();			// ���limit���Ʒ���
//void fool();			// ʳ��ĳ����Լ�ʳ�ﱻ��
//void isEnd();			// �����ж�
//void zhuangwei();		// ײβ�ж�
//void zhuangqiang();		// ײǽ�ж�

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

