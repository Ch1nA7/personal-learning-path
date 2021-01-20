#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<graphics.h>
#include<windows.h>
#include<math.h>
#define WIN_WIDTH 1024
#define WIN_HEIGHT 640
#define MAP_WIDTH 1024*3
#define MAP_HEIGHT 640*3
#define FOOD_NUM 500
#define AI_NUM 200

struct Ball// 球结构，食物，玩家，Ai
{
	int x;
	int y;
	int r;
	DWORD  color;
	int flag;
};
struct Ball player;
struct Ball food[FOOD_NUM];
struct Ball ai[AI_NUM];
IMAGE map(MAP_WIDTH, MAP_HEIGHT);
POINT g_CameraPos;//定义摄像机坐标，左上角的位置，地图贴图的位置
float DisTance(struct Ball b1, struct Ball b2);
void ChaseAlgorithom(struct Ball *chase, struct Ball *run);
//摄像机位置
void CameraPos()
{
	g_CameraPos.x = player.x - WIN_WIDTH/2;
	g_CameraPos.y = player.y - WIN_HEIGHT/2;
	if (g_CameraPos.x < 0)g_CameraPos.x = 0;
	if (g_CameraPos.y < 0)g_CameraPos.y = 0;
	if (g_CameraPos.x > MAP_WIDTH - WIN_WIDTH) g_CameraPos.x = MAP_WIDTH - WIN_WIDTH;
	if (g_CameraPos.y > MAP_HEIGHT - WIN_HEIGHT) g_CameraPos.y = MAP_HEIGHT - WIN_HEIGHT;
}
//初始化数据
void GameInit()
{
	srand(GetTickCount());
	player.x = rand() % MAP_WIDTH;
	player.y = rand() % MAP_HEIGHT;
	player.r = rand() % 10 + 10;
	player.flag = 1;
	player.color = RGB(rand() % 256, rand() % 256, rand() % 256);
	for (int i = 0; i < FOOD_NUM; i++)
	{
		food[i].x = rand() % MAP_WIDTH;
		food[i].y = rand() % MAP_HEIGHT;
		food[i].r = rand() % 5+1;
		food[i].flag = 1;
		food[i].color = RGB(rand() % 256, rand() % 256, rand() % 256);

	}
	for (int i = 0; i <AI_NUM; i++)
	{
		ai[i].x = rand() % MAP_WIDTH;
		ai[i].y = rand() % MAP_HEIGHT;
		ai[i].r = rand() % 10 + 10;
		ai[i].flag = 1;
		ai[i].color = RGB(rand() % 256, rand() % 256, rand() % 256);
	}
}
void GameDraw()
{
	SetWorkingImage(&map);
	setbkcolor(WHITE);
	cleardevice();
	//画食物
	for (int i = 0; i < FOOD_NUM; i++)
	{
		if (food[i].flag == 1)
		{
			setfillcolor(food[i].color);
			solidcircle(food[i].x, food[i].y, food[i].r);
		}
		else
		{
			food[i].x = rand() % MAP_WIDTH;
			food[i].y = rand() % MAP_HEIGHT;
			food[i].r = rand() % 5 + 1;
			food[i].flag = 1;
			food[i].color = RGB(rand() % 256, rand() % 256, rand() % 256);
		}

	}
	//画Ai
	for (int i = 0; i < AI_NUM; i++)
	{
		if (ai[i].flag == 1)
		{
			setfillcolor(ai[i].color);
			solidcircle(ai[i].x, ai[i].y, ai[i].r);
		}
		else
		{
			ai[i].x = rand() % MAP_WIDTH;
			ai[i].y = rand() % MAP_HEIGHT;
			ai[i].r = rand() % 10 + 10;
			ai[i].flag = 1;
			ai[i].color = RGB(rand() % 256, rand() % 256, rand() % 256);
		}
	}
	//画玩家
	setfillcolor(player.color);
	solidcircle(player.x, player.y, player.r);
	//显示名字
	setbkmode(TRANSPARENT);
	settextcolor(player.color + 200);
	outtextxy(player.x-20, player.y, "顽皮老师");
	SetWorkingImage();
	CameraPos();
	putimage(0, 0, WIN_WIDTH, WIN_HEIGHT, &map, g_CameraPos.x, g_CameraPos.y);
}
void Gamemove(int speed)
{
	if (GetAsyncKeyState(VK_UP) && player.y - player.r > 0)
	{
		player.y -= speed;
	}
	if (GetAsyncKeyState(VK_DOWN) && player.y + player.r < MAP_HEIGHT)
	{
		player.y += speed;
	}
	if (GetAsyncKeyState(VK_LEFT) && player.x - player.r > 0)
	{
		player.x -= speed;
	}
	if (GetAsyncKeyState(VK_RIGHT) && player.x + player.r < MAP_WIDTH)
	{
		player.x += speed;
	}
	// 作弊测试
	if (GetAsyncKeyState(VK_SPACE) && player.y - player.r > 0)
	{
		player.r += speed;
	}
	if (GetAsyncKeyState('A') && player.y - player.r > 0)
	{
		player.r -= speed;
	}

}
//吃食物
void EatFood()
{
	for (int i = 0; i < FOOD_NUM; i++)
	{
		if (food[i].flag == 1 && DisTance(food[i],player) < player.r)
		{
			food[i].flag = 0;
			player.r += food[i].r / 4;
		}
	}
}
//吃Ai
void EatAi()
{
	for (int i = 0; i < AI_NUM; i++)
	{
		if (ai[i].flag == 0)
			continue;
		if (DisTance(ai[i], player) < player.r - ai[i].r/3)
		{
			ai[i].flag = 0;
			player.r += ai[i].r / 4;
			break;
		}
		else if (DisTance(ai[i], player) < ai[i].r - player.r / 3)
		{
			player.x = rand() % MAP_WIDTH;
			player.y = rand() % MAP_HEIGHT;
			player.r = rand() % 10 + 10;
			ai[i].r += player.r / 4;
			break;
		}

	}
}
//追逐算法
void AiMove()
{
	for (int i = 0; i < AI_NUM; i++)
	{
		int min = MAP_WIDTH;
		int index = -1;
		if (ai[i].flag == 1)
		{
			for (int j = i + 1; j < AI_NUM; j++)
			{
				if(ai[i].r>ai[j].r && ai[i].flag == 1)
				{
					if (DisTance(ai[i], ai[j]) < min)
					{
						min = DisTance(ai[i], ai[j]);
						index = j;
					}
				}
			}
			if (index != -1)
			{
				ChaseAlgorithom(&ai[i], &ai[index]);
			}

		}
	}
}
int main()
{
	initgraph(WIN_WIDTH, WIN_HEIGHT, 1);
	GameInit();
	while (1)
	{
		EatFood();
		EatAi();
		AiMove();
		GameDraw();
		Gamemove(5);
	}
	getchar();
	return 0;
}
//两点之间的距离
float DisTance(struct Ball b1, struct Ball b2)
{
	return sqrt((float)(b1.x - b2.x)*(b1.x - b2.x) + (b1.y - b2.y)*(b1.y - b2.y));
}
void ChaseAlgorithom(struct Ball *chase, struct Ball *run)
{
	if (rand() % 2 == 0)
	{
		if (chase->x < run->x)
		{
			chase->x += 2;
		}
		else
		{
			chase->x -= 2;
		}
	}
	else
	{
		if (chase->y < run->y)
		{
			chase->y += 2;
		}
		else
		{
			chase->y -= 2;
		}
	}

}