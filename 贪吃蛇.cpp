#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<time.h>  //�����������
typedef struct pointxy
{
	int x;
	int y;
}MYPOINT;
//�ߵ�����
struct Snake
{
	int num;         //�ߵĽ���
	MYPOINT xy[100];  //�������100��
	char postion;    //����
}snake;
//���������
struct Food
{
	MYPOINT fdxy;   //ʳ���x��y����
	int eatgrade;  //����ʳ���ж��ٷ�
	int flag;      //ʳ���Ƿ����
}food;
HWND hwnd = NULL; //��ʾ������
//�ѷ���ö�ٳ���
//С���̣�����ֵ
enum movpostion{ right = 72,left = 75, down = 77, up = 80 };
void initSnake();
void drawSnake();
void moveSnake();
void keyDown();
void initFood();
void drawFood();
void eatFood();
int snakeDie();
void showGrade();
void pauseMoment();
int main()
{
	srand((unsigned int)time(NULL));
	hwnd = initgraph(640, 480, 1);
	setbkcolor(WHITE);
	cleardevice();//�����ɫû�䣬ˢ��һ��
	initSnake();
	while(1)
	{
		cleardevice();
		drawFood();
		if (food.flag == 0)
		{
			initFood();
		}
		showGrade();
		drawSnake();
		if (snakeDie())
		{
			break;
		}
		eatFood();
		moveSnake();
		//ֻ�а�����ʱ�򣬽��ܼ�
		//keyDown();
		while (_kbhit())
		{
			pauseMoment();
			keyDown();
		}
		Sleep(100);
	}
	getchar();
	closegraph();
	return 0;
}
//�ߵ���Ҫģ��
void initSnake()
{
	snake.xy[2].x = 0;
	snake.xy[2].y = 0;

	snake.xy[1].x = 10;
	snake.xy[1].y = 0;

	snake.xy[0].x = 20;
	snake.xy[0].y = 0;

	snake.num = 3;
	snake.postion = right;
	food.flag = 0;
	food.eatgrade = 0;
}
void drawSnake()
{
	for (int i = 0; i < snake.num; i++)
	{
		setlinecolor(BLACK);
		setfillcolor(RGB(rand() % 255, rand() % 255, rand() % 255));
		fillrectangle(snake.xy[i].x, snake.xy[i].y, snake.xy[i].x + 10, snake.xy[i].y + 10);
	}
}
void moveSnake()
{
	//���˵�һ��֮�⣻�����ÿһ�ڶ���ǰ��ÿһ�ڵ�����
	for (int i = snake.num - 1; i > 0; i--)
	{
		snake.xy[i].x = snake.xy[i - 1].x;
		snake.xy[i].y = snake.xy[i - 1].y;
	}
	//��һ�ڵĴ���
	switch (snake.postion)
	{
	case right:
		snake.xy[0].x += 10;
		break;
	case left:
		snake.xy[0].x -= 10;
		break;
	case down:
		snake.xy[0].y += 10;
		break;
	case up:
		snake.xy[0].y -= 10;
		break;
	default:
		break;
	}
}
void keyDown()
{
	char userKey = 0;
	userKey = _getch();
	switch (userKey)
	{
	case right:
		if (snake.postion != down)
			snake.postion = up;
		break;
	case left:
		if (snake.postion != right)
			snake.postion = left;
		break;
	case down:
		if (snake.postion != left)
			snake.postion = right;
		break;
	case up:
		if (snake.postion != up)
			snake.postion = down;
		break;
	default:
		break;
	}
}
//ʳ���������
//��ô����ʳ�
void initFood()
{
	//ΪʲĪҪ��д����ֹ�߳Բ�������
	food.fdxy.x = rand() % 65*10;
	food.fdxy.y = rand() % 48*10;
	food.flag = 1;
}
void drawFood()
{
	setlinecolor(BLACK);
	setfillcolor(RGB(rand() % 255, rand() % 255, rand() % 255));
	fillrectangle(food.fdxy.x, food.fdxy.y, food.fdxy.x + 10, food.fdxy.y + 10);
}
void eatFood()
{
	//�߱䳤
	//ʳ��Ҫ��������
	//����Ҫ����
	if (snake.xy[0].x == food.fdxy.x&&snake.xy[0].y == food.fdxy.y)
	{
		snake.num++;
		food.eatgrade += 10;
		food.flag = 0;
	}
}
int snakeDie()
{
	if (snake.xy[0].x > 640 || snake.xy[0].x<0 || snake.xy[0].y>480 || snake.xy[0].y < 0)
	{
		outtextxy(200, 200, "��ײ��ǽ��");
		MessageBox(hwnd, "GameOver!", "ײǽ����", MB_OK);
		return 1;
	}
	//�Լ����Լ�
	for (int i = 1; i < snake.num; i++)
	{
		if (snake.xy[0].x == snake.xy[i].x&&snake.xy[0].y == snake.xy[i].y)
		{
			outtextxy(200, 200, "��ײ�����Լ�");
			MessageBox(hwnd, "GameOver!", "��ɱ����", MB_OK);
			return 1;
		}
	}
	return 0;
}
void showGrade()
{
	char grade[100] = "";
	sprintf(grade, "%d", food.eatgrade);
	setbkmode(TRANSPARENT);
	settextcolor(LIGHTBLUE);
	outtextxy(580-20, 20, "����");
	outtextxy(580 + 50-20, 20, grade);
}
void pauseMoment()
{
	if (_getch() == 32)
	{
		while (_getch() != 32);//ͣ������
	}
}