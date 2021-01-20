#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<time.h>  //随机函数种子
typedef struct pointxy
{
	int x;
	int y;
}MYPOINT;
//蛇的属性
struct Snake
{
	int num;         //蛇的节数
	MYPOINT xy[100];  //蛇最多有100节
	char postion;    //方向
}snake;
//事物的属性
struct Food
{
	MYPOINT fdxy;   //食物的x和y坐标
	int eatgrade;  //吃了食物有多少分
	int flag;      //食物是否存在
}food;
HWND hwnd = NULL; //表示主窗口
//把方向枚举出来
//小键盘，键码值
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
	cleardevice();//如果颜色没变，刷新一下
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
		//只有按键的时候，接受键
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
//蛇的主要模块
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
	//除了第一节之外；后面的每一节都是前面每一节的坐标
	for (int i = snake.num - 1; i > 0; i--)
	{
		snake.xy[i].x = snake.xy[i - 1].x;
		snake.xy[i].y = snake.xy[i - 1].y;
	}
	//第一节的处理
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
//食物随机出现
//怎么产生食物？
void initFood()
{
	//为什莫要拆开写，防止蛇吃不到东西
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
	//蛇变长
	//食物要重新生成
	//分数要增加
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
		outtextxy(200, 200, "你撞南墙了");
		MessageBox(hwnd, "GameOver!", "撞墙警告", MB_OK);
		return 1;
	}
	//自己吃自己
	for (int i = 1; i < snake.num; i++)
	{
		if (snake.xy[0].x == snake.xy[i].x&&snake.xy[0].y == snake.xy[i].y)
		{
			outtextxy(200, 200, "你撞了你自己");
			MessageBox(hwnd, "GameOver!", "自杀警告", MB_OK);
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
	outtextxy(580-20, 20, "分数");
	outtextxy(580 + 50-20, 20, grade);
}
void pauseMoment()
{
	if (_getch() == 32)
	{
		while (_getch() != 32);//停在这里
	}
}