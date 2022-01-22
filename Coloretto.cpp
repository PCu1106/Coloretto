#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	void table(int card_num, int a[3], int b[3], int c[3], int d[3], int yours[10], int AI1s[10], int AI2s[10], int AI3s[10]);
	void your_turn(int &first, int &card_num, int(&a)[3], int(&b)[3], int(&c)[3], int(&d)[3], int(&yours)[10], int(&AI1s)[10], int(&AI2s)[10], int(&AI3s)[10], int(&card_group)[76], int &over, int &you_finish, int &AI1_finish, int &AI2_finish, int &AI3_finish, int &take, char &e, int &gameover, char &t, int &put, int &get, int &g);
	void AI1s_turn(int &first, int &card_num, int(&a)[3], int(&b)[3], int(&c)[3], int(&d)[3], int(&yours)[10], int(&AI1s)[10], int(&AI2s)[10], int(&AI3s)[10], int(&card_group)[76], int &over, int &you_finish, int &AI1_finish, int &AI2_finish, int &AI3_finish, int &take, char &e, int &gameover, char &t, int &put, int &get, int &g);
	void AI2s_turn(int &first, int &card_num, int(&a)[3], int(&b)[3], int(&c)[3], int(&d)[3], int(&yours)[10], int(&AI1s)[10], int(&AI2s)[10], int(&AI3s)[10], int(&card_group)[76], int &over, int &you_finish, int &AI1_finish, int &AI2_finish, int &AI3_finish, int &take, char &e, int &gameover, char &t, int &put, int &get, int &g);
	void AI3s_turn(int &first, int &card_num, int(&a)[3], int(&b)[3], int(&c)[3], int(&d)[3], int(&yours)[10], int(&AI1s)[10], int(&AI2s)[10], int(&AI3s)[10], int(&card_group)[76], int &over, int &you_finish, int &AI1_finish, int &AI2_finish, int &AI3_finish, int &take, char &e, int &gameover, char &t, int &put, int &get, int &g);
	int card_group[76] = { 1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,4,4,4,4,4,4,4,4,4,5,5,5,5,5,5,5,5,5,6,6,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,8,8,8,8,8,8,8,8,8,8,9,9,9 };
	int a[3] = { 0 };
	int b[3] = { 0 };
	int c[3] = { 0 };
	int d[3] = { 0 };
	int yours[10] = { 0 };
	int AI1s[10] = { 0 };
	int AI2s[10] = { 0 };
	int AI3s[10] = { 0 };
	int card_num = 76;
	int over = 0;
	int you_finish = 0, AI1_finish = 0, AI2_finish = 0, AI3_finish = 0;
	int take;
	char e;
	int gameover=0;
	char t;
	int put = 0;
	int get = -1;
	int g;
	int first = 0;
	int champion=1, max;
	int point[9] = { 0 };
	int total = 0;

	cout << "歡迎光臨變色龍\n";
	while (gameover == 0)
	{
		srand(time(0));
		if (first == 0)//順序
		{
			your_turn(first, card_num, a, b, c, d, yours, AI1s, AI2s, AI3s, card_group, over, you_finish, AI1_finish, AI2_finish, AI3_finish, take, e, gameover, t, put, get, g);
			AI1s_turn(first, card_num, a, b, c, d, yours, AI1s, AI2s, AI3s, card_group, over, you_finish, AI1_finish, AI2_finish, AI3_finish, take, e, gameover, t, put, get, g);
			AI2s_turn(first, card_num, a, b, c, d, yours, AI1s, AI2s, AI3s, card_group, over, you_finish, AI1_finish, AI2_finish, AI3_finish, take, e, gameover, t, put, get, g);
			AI3s_turn(first, card_num, a, b, c, d, yours, AI1s, AI2s, AI3s, card_group, over, you_finish, AI1_finish, AI2_finish, AI3_finish, take, e, gameover, t, put, get, g);
		}
		else if (first == 1)
		{
			AI1s_turn(first, card_num, a, b, c, d, yours, AI1s, AI2s, AI3s, card_group, over, you_finish, AI1_finish, AI2_finish, AI3_finish, take, e, gameover, t, put, get, g);
			AI2s_turn(first, card_num, a, b, c, d, yours, AI1s, AI2s, AI3s, card_group, over, you_finish, AI1_finish, AI2_finish, AI3_finish, take, e, gameover, t, put, get, g);
			AI3s_turn(first, card_num, a, b, c, d, yours, AI1s, AI2s, AI3s, card_group, over, you_finish, AI1_finish, AI2_finish, AI3_finish, take, e, gameover, t, put, get, g);
			your_turn(first, card_num, a, b, c, d, yours, AI1s, AI2s, AI3s, card_group, over, you_finish, AI1_finish, AI2_finish, AI3_finish, take, e, gameover, t, put, get, g);
		}
		else if (first == 2)
		{
			AI2s_turn(first, card_num, a, b, c, d, yours, AI1s, AI2s, AI3s, card_group, over, you_finish, AI1_finish, AI2_finish, AI3_finish, take, e, gameover, t, put, get, g);
			AI3s_turn(first, card_num, a, b, c, d, yours, AI1s, AI2s, AI3s, card_group, over, you_finish, AI1_finish, AI2_finish, AI3_finish, take, e, gameover, t, put, get, g);
			your_turn(first, card_num, a, b, c, d, yours, AI1s, AI2s, AI3s, card_group, over, you_finish, AI1_finish, AI2_finish, AI3_finish, take, e, gameover, t, put, get, g);
			AI1s_turn(first, card_num, a, b, c, d, yours, AI1s, AI2s, AI3s, card_group, over, you_finish, AI1_finish, AI2_finish, AI3_finish, take, e, gameover, t, put, get, g);
		}
		else if (first == 3)
		{
			AI3s_turn(first, card_num, a, b, c, d, yours, AI1s, AI2s, AI3s, card_group, over, you_finish, AI1_finish, AI2_finish, AI3_finish, take, e, gameover, t, put, get, g);
			your_turn(first, card_num, a, b, c, d, yours, AI1s, AI2s, AI3s, card_group, over, you_finish, AI1_finish, AI2_finish, AI3_finish, take, e, gameover, t, put, get, g);
			AI1s_turn(first, card_num, a, b, c, d, yours, AI1s, AI2s, AI3s, card_group, over, you_finish, AI1_finish, AI2_finish, AI3_finish, take, e, gameover, t, put, get, g);
			AI2s_turn(first, card_num, a, b, c, d, yours, AI1s, AI2s, AI3s, card_group, over, you_finish, AI1_finish, AI2_finish, AI3_finish, take, e, gameover, t, put, get, g);
		}
		if(you_finish == 1 && AI1_finish == 1 && AI2_finish == 1 && AI3_finish == 1)//重置
		{
			you_finish = 0;
			AI1_finish = 0;
			AI2_finish = 0;
			AI3_finish = 0;
			for (int i = 0; i < 3; i++)
			{
				a[i] = { 0 };
				b[i] = { 0 };
				c[i] = { 0 };
				d[i] = { 0 };
			}
			if (over == 1)//結束排抽出
			{
				table(card_num, a, b, c, d, yours, AI1s, AI2s, AI3s);
				gameover = 1;
				//算分
				for (int i = 0; i < yours[9]; i++)//彩色處理
				{
					max = yours[1];
					champion = 1;
					for (int j = 2; j <= 7; j++)
					{
						if (max < yours[j])
						{
							if (yours[j] >= 6)
							{
								continue;
							}
							else
							{
								max = yours[j];
								champion = j;
							}
						}
					}
					yours[champion]++;
				}
				for (int i = 1; i <= 7; i++) { point[i] = 0; }
				for (int i = 1; i <= 7; i++)
				{
					if (yours[i] == 0) { point[i] = 0; }
					if (yours[i] == 1) { point[i] = 1; }
					if (yours[i] == 2) { point[i] = 3; }
					if (yours[i] == 3) { point[i] = 6; }
					if (yours[i] == 4) { point[i] = 10; }
					if (yours[i] == 5) { point[i] = 15; }
					if (yours[i] == 6) { point[i] = 21; }
					if (yours[i] == 7) { point[i] = 21; }
					if (yours[i] == 8) { point[i] = 21; }
					if (yours[i] == 9) { point[i] = 21; }
				}
				for (int i = 0; i < 3; i++)//找到三個最大的數，變負號
				{
					max = point[1];
					champion = 1;
					for (int j = 2; j <= 7; j++)
					{
						if (max < point[j])
						{
							max = point[j];
							champion = j;
						}
					}
					point[champion] = -1 * point[champion];
				}
				point[8] = 2 * yours[8];
				total = -1 * (point[1] + point[2] + point[3] + point[4] + point[5] + point[6] + point[7]) + point[8];
				cout << "\n遊戲結束\n";
				/*for (int i = 1; i <= 8; i++) { cout << yours[i]; }
				cout << endl;
				for (int i = 1; i <= 8; i++) { cout << point[i]; }*/
				cout << " 你的分數:" << total << endl;
				for (int i = 0; i < AI1s[9]; i++)//彩色處理
				{
					max = AI1s[1];
					champion = 1;
					for (int j = 2; j <= 7; j++)
					{
						if (max < AI1s[j])
						{
							if (AI1s[j] >= 6)
							{
								continue;
							}
							else
							{
								max = AI1s[j];
								champion = j;
							}
						}
					}
					AI1s[champion]++;
				}
				for (int i = 1; i <= 7; i++) { point[i] = 0; }
				for (int i = 1; i <= 7; i++)
				{
					if (AI1s[i] == 0) { point[i] = 0; }
					if (AI1s[i] == 1) { point[i] = 1; }
					if (AI1s[i] == 2) { point[i] = 3; }
					if (AI1s[i] == 3) { point[i] = 6; }
					if (AI1s[i] == 4) { point[i] = 10; }
					if (AI1s[i] == 5) { point[i] = 15; }
					if (AI1s[i] == 6) { point[i] = 21; }
					if (AI1s[i] == 7) { point[i] = 21; }
					if (AI1s[i] == 8) { point[i] = 21; }
					if (AI1s[i] == 9) { point[i] = 21; }
				}
				for (int i = 0; i < 3; i++)//找到三個最大的數，變負號
				{
					max = point[1];
					champion = 1;
					for (int j = 2; j <= 7; j++)
					{
						if (max < point[j])
						{
							max = point[j];
							champion = j;
						}
					}
					point[champion] = -1 * point[champion];
				}
				point[8] = 2 * AI1s[8];
				total = -1 * (point[1] + point[2] + point[3] + point[4] + point[5] + point[6] + point[7]) + point[8];
				/*for (int i = 1; i <= 8; i++) { cout << AI1s[i]; }
				cout << endl;
				for (int i = 1; i <= 8; i++) { cout << point[i]; }*/
				cout << "AI1的分數:" << total << endl;
				for (int i = 0; i < AI2s[9]; i++)//彩色處理
				{
					max = AI2s[1];
					champion = 1;
					for (int j = 2; j <= 7; j++)
					{
						if (max < AI2s[j])
						{
							if (AI2s[j] >= 6)
							{
								continue;
							}
							else
							{
								max = AI2s[j];
								champion = j;
							}
						}
					}
					AI2s[champion]++;
				}
				for (int i = 1; i <= 7; i++) { point[i] = 0; }
				for (int i = 1; i <= 7; i++)
				{
					if (AI2s[i] == 0) { point[i] = 0; }
					if (AI2s[i] == 1) { point[i] = 1; }
					if (AI2s[i] == 2) { point[i] = 3; }
					if (AI2s[i] == 3) { point[i] = 6; }
					if (AI2s[i] == 4) { point[i] = 10; }
					if (AI2s[i] == 5) { point[i] = 15; }
					if (AI2s[i] == 6) { point[i] = 21; }
					if (AI2s[i] == 7) { point[i] = 21; }
					if (AI2s[i] == 8) { point[i] = 21; }
					if (AI2s[i] == 9) { point[i] = 21; }
				}
				for (int i = 0; i < 3; i++)//找到三個最大的數，變負號
				{
					max = point[1];
					champion = 1;
					for (int j = 2; j <= 7; j++)
					{
						if (max < point[j])
						{
							max = point[j];
							champion = j;
						}
					}
					point[champion] = -1 * point[champion];
				}
				point[8] = 2 * AI2s[8];
				total = -1 * (point[1] + point[2] + point[3] + point[4] + point[5] + point[6] + point[7]) + point[8];
				/*for (int i = 1; i <= 8; i++) { cout << AI2s[i]; }
				cout << endl;
				for (int i = 1; i <= 8; i++) { cout << point[i]; }*/
				cout << "AI2的分數:" << total << endl;
				for (int i = 0; i < AI3s[9]; i++)//彩色處理
				{
					max = AI3s[1];
					champion = 1;
					for (int j = 2; j <= 7; j++)
					{
						if (max < AI3s[j])
						{
							if (AI3s[j] >= 6)
							{
								continue;
							}
							else
							{
								max = AI3s[j];
								champion = j;
							}
						}
					}
					AI3s[champion]++;
				}
				for (int i = 1; i <= 7; i++) { point[i] = 0; }
				for (int i = 1; i <= 7; i++)
				{
					if (AI3s[i] == 0) { point[i] = 0; }
					if (AI3s[i] == 1) { point[i] = 1; }
					if (AI3s[i] == 2) { point[i] = 3; }
					if (AI3s[i] == 3) { point[i] = 6; }
					if (AI3s[i] == 4) { point[i] = 10; }
					if (AI3s[i] == 5) { point[i] = 15; }
					if (AI3s[i] == 6) { point[i] = 21; }
					if (AI3s[i] == 7) { point[i] = 21; }
					if (AI3s[i] == 8) { point[i] = 21; }
					if (AI3s[i] == 9) { point[i] = 21; }
				}
				for (int i = 0; i < 3; i++)//找到三個最大的數，變負號
				{
					max = point[1];
					champion = 1;
					for (int j = 2; j <= 7; j++)
					{
						if (max < point[j])
						{
							max = point[j];
							champion = j;
						}
					}
					point[champion] = -1 * point[champion];
				}
				point[8] = 2 * AI3s[8];
				total = -1 * (point[1] + point[2] + point[3] + point[4] + point[5] + point[6] + point[7]) + point[8];
				/*for (int i = 1; i <= 8; i++) { cout << AI3s[i]; }
				cout << endl;
				for (int i = 1; i <= 8; i++) { cout << point[i]; }*/
				cout << "AI3的分數:" << total << endl;
			}
			else{cout << endl << "下一輪" << endl;}
		}
	}
	system("pause");
	return 0;
}

void table(int card_num, int a[3], int b[3], int c[3], int d[3], int yours[10], int AI1s[10], int AI2s[10], int AI3s[10])
{
	cout << "\n牌組有" << card_num << "張牌\n";
	cout << "A牌堆:";
	for (int i = 0; i < 3; i++)
	{
		if (a[i] == 1) { cout << "(紅)"; }
		if (a[i] == 2) { cout << "(黃)"; }
		if (a[i] == 3) { cout << "(粉)"; }
		if (a[i] == 4) { cout << "(灰)"; }
		if (a[i] == 5) { cout << "(綠)"; }
		if (a[i] == 6) { cout << "(棕)"; }
		if (a[i] == 7) { cout << "(藍)"; }
		if (a[i] == 8) { cout << "(+2)"; }
		if (a[i] == 9) { cout << "(彩)"; }
		if (a[i] == -1) { cout << "X"; }
		if (i == 2) { cout << endl; }
	}
	cout << "B牌堆:";
	for (int i = 0; i < 3; i++)
	{
		if (b[i] == 1) { cout << "(紅)"; }
		if (b[i] == 2) { cout << "(黃)"; }
		if (b[i] == 3) { cout << "(粉)"; }
		if (b[i] == 4) { cout << "(灰)"; }
		if (b[i] == 5) { cout << "(綠)"; }
		if (b[i] == 6) { cout << "(棕)"; }
		if (b[i] == 7) { cout << "(藍)"; }
		if (b[i] == 8) { cout << "(+2)"; }
		if (b[i] == 9) { cout << "(彩)"; }
		if (b[i] == -1) { cout << "X"; }
		if (i == 2) { cout << endl; }
	}
	cout << "C牌堆:";
	for (int i = 0; i < 3; i++)
	{
		if (c[i] == 1) { cout << "(紅)"; }
		if (c[i] == 2) { cout << "(黃)"; }
		if (c[i] == 3) { cout << "(粉)"; }
		if (c[i] == 4) { cout << "(灰)"; }
		if (c[i] == 5) { cout << "(綠)"; }
		if (c[i] == 6) { cout << "(棕)"; }
		if (c[i] == 7) { cout << "(藍)"; }
		if (c[i] == 8) { cout << "(+2)"; }
		if (c[i] == 9) { cout << "(彩)"; }
		if (c[i] == -1) { cout << "X"; }
		if (i == 2) { cout << endl; }
	}
	cout << "D牌堆:";
	for (int i = 0; i < 3; i++)
	{
		if (d[i] == 1) { cout << "(紅)"; }
		if (d[i] == 2) { cout << "(黃)"; }
		if (d[i] == 3) { cout << "(粉)"; }
		if (d[i] == 4) { cout << "(灰)"; }
		if (d[i] == 5) { cout << "(綠)"; }
		if (d[i] == 6) { cout << "(棕)"; }
		if (d[i] == 7) { cout << "(藍)"; }
		if (d[i] == 8) { cout << "(+2)"; }
		if (d[i] == 9) { cout << "(彩)"; }
		if (d[i] == -1) { cout << "X"; }
		if (i == 2) { cout << endl; }
	}
	cout << " 你的牌:(紅)" << yours[1] << " (黃)" << yours[2] << " (粉)" << yours[3] << " (灰)" << yours[4] <<
		" (綠)" << yours[5] << " (棕)" << yours[6] << " (藍)" << yours[7] << " (+2)" << yours[8] << " (彩)" << yours[9] << endl;
	cout << "AI1的牌:(紅)" << AI1s[1] << " (黃)" << AI1s[2] << " (粉)" << AI1s[3] << " (灰)" << AI1s[4] <<
		" (綠)" << AI1s[5] << " (棕)" << AI1s[6] << " (藍)" << AI1s[7] << " (+2)" << AI1s[8] << " (彩)" << AI1s[9] << endl;
	cout << "AI2的牌:(紅)" << AI2s[1] << " (黃)" << AI2s[2] << " (粉)" << AI2s[3] << " (灰)" << AI2s[4] <<
		" (綠)" << AI2s[5] << " (棕)" << AI2s[6] << " (藍)" << AI2s[7] << " (+2)" << AI2s[8] << " (彩)" << AI2s[9] << endl;
	cout << "AI3的牌:(紅)" << AI3s[1] << " (黃)" << AI3s[2] << " (粉)" << AI3s[3] << " (灰)" << AI3s[4] <<
		" (綠)" << AI3s[5] << " (棕)" << AI3s[6] << " (藍)" << AI3s[7] << " (+2)" << AI3s[8] << " (彩)" << AI3s[9] << endl;
	cout << endl;
}
void your_turn(int &first, int &card_num, int(&a)[3], int(&b)[3], int(&c)[3], int(&d)[3], int(&yours)[10], int(&AI1s)[10], int(&AI2s)[10], int(&AI3s)[10], int(&card_group)[76], int &over, int &you_finish, int &AI1_finish, int &AI2_finish, int &AI3_finish, int &take, char &e, int &gameover, char &t, int &put, int &get, int &g)
{
	while (you_finish == 0)
	{
		srand(time(0));
		table(card_num, a, b, c, d, yours, AI1s, AI2s, AI3s);
		cout << "輸入1:抽卡,2:拿牌堆\n";
		char move;
		cin >> move;
		if (move == '1')
		{
			if (a[2] != 0 && b[2] != 0 && c[2] != 0 && d[2] != 0)//沒地方放牌
			{
				cout << "只能拿牌堆囉\n";
				continue;
			}
			else//有地方放牌
			{
				get = -1;
				while (get == -1)//確認有沒有卡
				{
					g = rand() % 76;//0~75
					get = card_group[g];
				}
				card_group[g] = -1;
				cout << "你抽到了";
				if (get == 1) { cout << "(紅)"; }
				if (get == 2) { cout << "(黃)"; }
				if (get == 3) { cout << "(粉)"; }
				if (get == 4) { cout << "(灰)"; }
				if (get == 5) { cout << "(綠)"; }
				if (get == 6) { cout << "(棕)"; }
				if (get == 7) { cout << "(藍)"; }
				if (get == 8) { cout << "(+2)"; }
				if (get == 9) { cout << "(彩)"; }
				cout << endl;
				if (card_num == 15)
				{
					cout << "\n這輪完遊戲就結束囉\n\n";
					over = 1;
				}
				card_num--;
				put = 0;
				while (put == 0)
				{

					cout << "想放到哪個牌堆?\n";
					cin >> t;
					if (t == 'a' || t == 'A')
					{
						if (a[2] == -1)
						{
							cout << "A牌堆已被取走\n";
							continue;
						}
						else if (a[2] != 0)
						{
							cout << "A牌堆已滿\n";
							continue;
						}
						for (int i = 0; i < 3; i++)
						{
							if (a[i] == 0)
							{
								a[i] = get;
								put = 1;
								break;
							}
						}
					}
					else if (t == 'b' || t == 'B')
					{
						if (b[2] == -1)
						{
							cout << "B牌堆已被取走\n";
							continue;
						}
						else if (b[2] != 0)
						{
							cout << "B牌堆已滿\n";
							continue;
						}
						for (int i = 0; i < 3; i++)
						{
							if (b[i] == 0)
							{
								b[i] = get;
								put = 1;
								break;
							}
						}
					}
					else if (t == 'c' || t == 'C')
					{
						if (c[2] == -1)
						{
							cout << "C牌堆已被取走\n";
							continue;
						}
						else if (c[2] != 0)
						{
							cout << "C牌堆已滿\n";
							continue;
						}
						for (int i = 0; i < 3; i++)
						{
							if (c[i] == 0)
							{
								c[i] = get;
								put = 1;
								break;
							}
						}
					}
					else if (t == 'd' || t == 'D')
					{
						if (d[2] == -1)
						{
							cout << "D牌堆已被取走\n";
							continue;
						}
						else if (d[2] != 0)
						{
							cout << "D牌堆已滿\n";
							continue;
						}
						for (int i = 0; i < 3; i++)
						{
							if (d[i] == 0)
							{
								d[i] = get;
								put = 1;
								break;
							}
						}
					}
					else
					{
						cout << "輸入錯誤\n";
						continue;
					}
					table(card_num, a, b, c, d, yours, AI1s, AI2s, AI3s);
				}
				break;
			}
		}
		else if (move == '2')
		{
			if ((a[0] == 0 || a[0] == -1) && (b[0] == 0 || b[0] == -1) && (c[0] == 0 || c[0] == -1) && (d[0] == 0 || d[0] == -1))//(0,0,0,0||-1,0,0,0||-1,-1,0,0||-1,-1,-1,0)
			{
				cout << "牌堆沒有牌喔\n";
				continue;
			}
			take = 0;
			while (take == 0)//可以收
			{
				cout << "要收哪份牌堆呢?\n";
				cin >> e;
				if (e == 'a' || e == 'A')
				{
					if (a[2] == -1)
					{
						cout << "A牌堆已被取走\n";
						continue;
					}
					else if (a[0] == 0)
					{
						cout << "A牌堆是空的\n";
						continue;
					}
					else//拿到牌堆
					{
						for (int i = 0; i < 3; i++)
						{
							if (i == 2)//跑完三張
							{
								take = 1;
							}
							if (a[i] == 1) { yours[1]++; }
							if (a[i] == 2) { yours[2]++; }
							if (a[i] == 3) { yours[3]++; }
							if (a[i] == 4) { yours[4]++; }
							if (a[i] == 5) { yours[5]++; }
							if (a[i] == 6) { yours[6]++; }
							if (a[i] == 7) { yours[7]++; }
							if (a[i] == 8) { yours[8]++; }
							if (a[i] == 9) { yours[9]++; }
						}
						for (int i = 0; i < 3; i++) { a[i] = -1; }
					}
				}
				else if (e == 'b' || e == 'B')
				{
					if (b[2] == -1)
					{
						cout << "B牌堆已被取走\n";
						continue;
					}
					else if (b[0] == 0)
					{
						cout << "B牌堆是空的\n";
						continue;
					}
					else//拿到牌堆
					{
						for (int i = 0; i < 3; i++)
						{
							if (i == 2)//跑完三張
							{
								take = 1;
							}
							if (b[i] == 1) { yours[1]++; }
							if (b[i] == 2) { yours[2]++; }
							if (b[i] == 3) { yours[3]++; }
							if (b[i] == 4) { yours[4]++; }
							if (b[i] == 5) { yours[5]++; }
							if (b[i] == 6) { yours[6]++; }
							if (b[i] == 7) { yours[7]++; }
							if (b[i] == 8) { yours[8]++; }
							if (b[i] == 9) { yours[9]++; }
						}
						for (int i = 0; i < 3; i++) { b[i] = -1; }
					}
				}
				else if (e == 'c' || e == 'C')
				{
					if (c[2] == -1)
					{
						cout << "C牌堆已被取走\n";
						continue;
					}
					else if (c[0] == 0)
					{
						cout << "C牌堆是空的\n";
						continue;
					}
					else//拿到牌堆
					{
						for (int i = 0; i < 3; i++)
						{
							if (i == 2)//跑完三張
							{
								take = 1;
							}
							if (c[i] == 1) { yours[1]++; }
							if (c[i] == 2) { yours[2]++; }
							if (c[i] == 3) { yours[3]++; }
							if (c[i] == 4) { yours[4]++; }
							if (c[i] == 5) { yours[5]++; }
							if (c[i] == 6) { yours[6]++; }
							if (c[i] == 7) { yours[7]++; }
							if (c[i] == 8) { yours[8]++; }
							if (c[i] == 9) { yours[9]++; }
						}
						for (int i = 0; i < 3; i++) { c[i] = -1; }
					}
				}
				else if (e == 'd' || e == 'D')
				{
					if (d[2] == -1)
					{
						cout << "D牌堆已被取走\n";
						continue;
					}
					else if (d[0] == 0)
					{
						cout << "D牌堆是空的\n";
						continue;
					}
					else//拿到牌堆
					{
						for (int i = 0; i < 3; i++)
						{
							if (i == 2)//跑完三張
							{
								take = 1;
							}
							if (d[i] == 1) { yours[1]++; }
							if (d[i] == 2) { yours[2]++; }
							if (d[i] == 3) { yours[3]++; }
							if (d[i] == 4) { yours[4]++; }
							if (d[i] == 5) { yours[5]++; }
							if (d[i] == 6) { yours[6]++; }
							if (d[i] == 7) { yours[7]++; }
							if (d[i] == 8) { yours[8]++; }
							if (d[i] == 9) { yours[9]++; }
						}
						for (int i = 0; i < 3; i++) { d[i] = -1; }
					}
				}
				else
				{
					cout << "輸入錯誤\n";
					continue;
				}
				table(card_num, a, b, c, d, yours, AI1s, AI2s, AI3s);
			}
			you_finish = 1;
			if (a[0] == -1 && b[0] == -1 && c[0] == -1 && d[0] == -1)
			{
				first = 0;
			}
		}
		else
		{
			cout << "輸入錯誤\n";
			continue;
		}
	}
}
void AI1s_turn(int &first, int &card_num, int(&a)[3], int(&b)[3], int(&c)[3], int(&d)[3], int(&yours)[10], int(&AI1s)[10], int(&AI2s)[10], int(&AI3s)[10], int(&card_group)[76], int &over, int &you_finish, int &AI1_finish, int &AI2_finish, int &AI3_finish, int &take, char &e, int &gameover, char &t, int &put, int &get, int &g)
{
	while (AI1_finish == 0)
	{
		int AI1_move = rand() % 2 + 1;
		if (AI1_move == 1)
		{
			if (a[2] != 0 && b[2] != 0 && c[2] != 0 && d[2] != 0) { continue; }//沒地方放牌
			else//有地方放牌
			{
				get = -1;
				while (get == -1)//確認有沒有卡
				{
					g = rand() % 76;//0~75
					get = card_group[g];
				}
				card_group[g] = -1;
				cout << "AI1抽到了";
				if (get == 1) { cout << "(紅)"; }
				if (get == 2) { cout << "(黃)"; }
				if (get == 3) { cout << "(粉)"; }
				if (get == 4) { cout << "(灰)"; }
				if (get == 5) { cout << "(綠)"; }
				if (get == 6) { cout << "(棕)"; }
				if (get == 7) { cout << "(藍)"; }
				if (get == 8) { cout << "(+2)"; }
				if (get == 9) { cout << "(彩)"; }
				cout << endl;
				if (card_num == 15)
				{
					cout << "\n這輪完遊戲就結束囉\n\n";
					over = 1;
				}
				card_num--;
				put = 0;
				while (put == 0)
				{
					t = rand() % 4 + 1;//1~4
					if (t == 1)
					{
						if (a[2] == -1 || a[2] != 0) { continue; }
						for (int i = 0; i < 3; i++)
						{
							if (a[i] == 0)
							{
								a[i] = get;
								put = 1;
								cout << "AI1放到了牌堆A\n";
								break;
							}
						}
					}
					if (t == 2)
					{
						if (b[2] == -1 || b[2] != 0) { continue; }
						for (int i = 0; i < 3; i++)
						{
							if (b[i] == 0)
							{
								b[i] = get;
								put = 1;
								cout << "AI1放到了牌堆B\n";
								break;
							}
						}
					}
					if (t == 3)
					{
						if (c[2] == -1 || c[2] != 0) { continue; }
						for (int i = 0; i < 3; i++)
						{
							if (c[i] == 0)
							{
								c[i] = get;
								put = 1;
								cout << "AI1放到了牌堆C\n";
								break;
							}
						}
					}
					if (t == 4)
					{
						if (d[2] == -1 || d[2] != 0) { continue; }
						for (int i = 0; i < 3; i++)
						{
							if (d[i] == 0)
							{
								d[i] = get;
								put = 1;
								cout << "AI1放到了牌堆D\n";
								break;
							}
						}
					}
				}
				break;
			}
		}
		else if (AI1_move == 2)
		{
			if ((a[0] == 0 || a[0] == -1) && (b[0] == 0 || b[0] == -1) && (c[0] == 0 || c[0] == -1) && (d[0] == 0 || d[0] == -1)) { continue; }
			take = 0;
			while (take == 0)
			{
				e = rand() % 4 + 1;//1~4
				if (e == 1)
				{
					if (a[2] == -1 || a[0] == 0) { continue; }
					else//拿到牌堆
					{
						for (int i = 0; i < 3; i++)
						{
							if (i == 2)//跑完三張
							{
								take = 1;
							}
							if (a[i] == 1) { AI1s[1]++; }
							if (a[i] == 2) { AI1s[2]++; }
							if (a[i] == 3) { AI1s[3]++; }
							if (a[i] == 4) { AI1s[4]++; }
							if (a[i] == 5) { AI1s[5]++; }
							if (a[i] == 6) { AI1s[6]++; }
							if (a[i] == 7) { AI1s[7]++; }
							if (a[i] == 8) { AI1s[8]++; }
							if (a[i] == 9) { AI1s[9]++; }
						}
						for (int i = 0; i < 3; i++) { a[i] = -1; }
						cout << "AI1拿了A牌堆\n";
					}
				}
				if (e == 2)
				{
					if (b[2] == -1 || b[0] == 0) { continue; }
					else//拿到牌堆
					{
						for (int i = 0; i < 3; i++)
						{
							if (i == 2)//跑完三張
							{
								take = 1;
							}
							if (b[i] == 1) { AI1s[1]++; }
							if (b[i] == 2) { AI1s[2]++; }
							if (b[i] == 3) { AI1s[3]++; }
							if (b[i] == 4) { AI1s[4]++; }
							if (b[i] == 5) { AI1s[5]++; }
							if (b[i] == 6) { AI1s[6]++; }
							if (b[i] == 7) { AI1s[7]++; }
							if (b[i] == 8) { AI1s[8]++; }
							if (b[i] == 9) { AI1s[9]++; }
						}
						for (int i = 0; i < 3; i++) { b[i] = -1; }
						cout << "AI1拿了B牌堆\n";
					}
				}
				if (e == 3)
				{
					if (c[2] == -1 || c[0] == 0) { continue; }
					else//拿到牌堆
					{
						for (int i = 0; i < 3; i++)
						{
							if (i == 2)//跑完三張
							{
								take = 1;
							}
							if (c[i] == 1) { AI1s[1]++; }
							if (c[i] == 2) { AI1s[2]++; }
							if (c[i] == 3) { AI1s[3]++; }
							if (c[i] == 4) { AI1s[4]++; }
							if (c[i] == 5) { AI1s[5]++; }
							if (c[i] == 6) { AI1s[6]++; }
							if (c[i] == 7) { AI1s[7]++; }
							if (c[i] == 8) { AI1s[8]++; }
							if (c[i] == 9) { AI1s[9]++; }
						}
						for (int i = 0; i < 3; i++) { c[i] = -1; }
						cout << "AI1拿了C牌堆\n";
					}
				}
				if (e == 4)
				{
					if (d[2] == -1 || d[0] == 0) { continue; }
					else//拿到牌堆
					{
						for (int i = 0; i < 3; i++)
						{
							if (i == 2)//跑完三張
							{
								take = 1;
							}
							if (d[i] == 1) { AI1s[1]++; }
							if (d[i] == 2) { AI1s[2]++; }
							if (d[i] == 3) { AI1s[3]++; }
							if (d[i] == 4) { AI1s[4]++; }
							if (d[i] == 5) { AI1s[5]++; }
							if (d[i] == 6) { AI1s[6]++; }
							if (d[i] == 7) { AI1s[7]++; }
							if (d[i] == 8) { AI1s[8]++; }
							if (d[i] == 9) { AI1s[9]++; }
						}
						for (int i = 0; i < 3; i++) { d[i] = -1; }
						cout << "AI1拿了D牌堆\n";
					}
				}
			}
			AI1_finish = 1;
			if (a[0] == -1 && b[0] == -1 && c[0] == -1 && d[0] == -1)
			{
				first = 1;
			}
		}
	}
}
void AI2s_turn(int &first, int &card_num, int(&a)[3], int(&b)[3], int(&c)[3], int(&d)[3], int(&yours)[10], int(&AI1s)[10], int(&AI2s)[10], int(&AI3s)[10], int(&card_group)[76], int &over, int &you_finish, int &AI1_finish, int &AI2_finish, int &AI3_finish, int &take, char &e, int &gameover, char &t, int &put, int &get, int &g)
{
	while (AI2_finish == 0)
	{
		int AI2_move = rand() % 2 + 1;
		if (AI2_move == 1)
		{
			if (a[2] != 0 && b[2] != 0 && c[2] != 0 && d[2] != 0) { continue; }//沒地方放牌
			else//有地方放牌
			{
				get = -1;
				while (get == -1)//確認有沒有卡
				{
					g = rand() % 76;//0~75
					get = card_group[g];
				}
				card_group[g] = -1;
				cout << "AI2抽到了";
				if (get == 1) { cout << "(紅)"; }
				if (get == 2) { cout << "(黃)"; }
				if (get == 3) { cout << "(粉)"; }
				if (get == 4) { cout << "(灰)"; }
				if (get == 5) { cout << "(綠)"; }
				if (get == 6) { cout << "(棕)"; }
				if (get == 7) { cout << "(藍)"; }
				if (get == 8) { cout << "(+2)"; }
				if (get == 9) { cout << "(彩)"; }
				cout << endl;
				if (card_num == 15)
				{
					cout << "\n這輪完遊戲就結束囉\n\n";
					over = 1;
				}
				card_num--;
				put = 0;
				while (put == 0)
				{
					t = rand() % 4 + 1;//1~4
					if (t == 1)
					{
						if (a[2] == -1 || a[2] != 0) { continue; }
						for (int i = 0; i < 3; i++)
						{
							if (a[i] == 0)
							{
								a[i] = get;
								put = 1;
								cout << "AI2放到了牌堆A\n";
								break;
							}
						}
					}
					if (t == 2)
					{
						if (b[2] == -1 || b[2] != 0) { continue; }
						for (int i = 0; i < 3; i++)
						{
							if (b[i] == 0)
							{
								b[i] = get;
								put = 1;
								cout << "AI2放到了牌堆B\n";
								break;
							}
						}
					}
					if (t == 3)
					{
						if (c[2] == -1 || c[2] != 0) { continue; }
						for (int i = 0; i < 3; i++)
						{
							if (c[i] == 0)
							{
								c[i] = get;
								put = 1;
								cout << "AI2放到了牌堆C\n";
								break;
							}
						}
					}
					if (t == 4)
					{
						if (d[2] == -1 || d[2] != 0) { continue; }
						for (int i = 0; i < 3; i++)
						{
							if (d[i] == 0)
							{
								d[i] = get;
								put = 1;
								cout << "AI2放到了牌堆D\n";
								break;
							}
						}
					}
				}
				break;
			}
		}
		else if (AI2_move == 2)
		{
			if ((a[0] == 0 || a[0] == -1) && (b[0] == 0 || b[0] == -1) && (c[0] == 0 || c[0] == -1) && (d[0] == 0 || d[0] == -1)) { continue; }
			take = 0;
			while (take == 0)
			{
				e = rand() % 4 + 1;//1~4
				if (e == 1)
				{
					if (a[2] == -1 || a[0] == 0) { continue; }
					else//拿到牌堆
					{
						for (int i = 0; i < 3; i++)
						{
							if (i == 2)//跑完三張
							{
								take = 1;
							}
							if (a[i] == 1) { AI2s[1]++; }
							if (a[i] == 2) { AI2s[2]++; }
							if (a[i] == 3) { AI2s[3]++; }
							if (a[i] == 4) { AI2s[4]++; }
							if (a[i] == 5) { AI2s[5]++; }
							if (a[i] == 6) { AI2s[6]++; }
							if (a[i] == 7) { AI2s[7]++; }
							if (a[i] == 8) { AI2s[8]++; }
							if (a[i] == 9) { AI2s[9]++; }
						}
						for (int i = 0; i < 3; i++) { a[i] = -1; }
						cout << "AI2拿了A牌堆\n";
					}
				}
				if (e == 2)
				{
					if (b[2] == -1 || b[0] == 0) { continue; }
					else//拿到牌堆
					{
						for (int i = 0; i < 3; i++)
						{
							if (i == 2)//跑完三張
							{
								take = 1;
							}
							if (b[i] == 1) { AI2s[1]++; }
							if (b[i] == 2) { AI2s[2]++; }
							if (b[i] == 3) { AI2s[3]++; }
							if (b[i] == 4) { AI2s[4]++; }
							if (b[i] == 5) { AI2s[5]++; }
							if (b[i] == 6) { AI2s[6]++; }
							if (b[i] == 7) { AI2s[7]++; }
							if (b[i] == 8) { AI2s[8]++; }
							if (b[i] == 9) { AI2s[9]++; }
						}
						for (int i = 0; i < 3; i++) { b[i] = -1; }
						cout << "AI2拿了B牌堆\n";
					}
				}
				if (e == 3)
				{
					if (c[2] == -1 || c[0] == 0) { continue; }
					else//拿到牌堆
					{
						for (int i = 0; i < 3; i++)
						{
							if (i == 2)//跑完三張
							{
								take = 1;
							}
							if (c[i] == 1) { AI2s[1]++; }
							if (c[i] == 2) { AI2s[2]++; }
							if (c[i] == 3) { AI2s[3]++; }
							if (c[i] == 4) { AI2s[4]++; }
							if (c[i] == 5) { AI2s[5]++; }
							if (c[i] == 6) { AI2s[6]++; }
							if (c[i] == 7) { AI2s[7]++; }
							if (c[i] == 8) { AI2s[8]++; }
							if (c[i] == 9) { AI2s[9]++; }
						}
						for (int i = 0; i < 3; i++) { c[i] = -1; }
						cout << "AI2拿了C牌堆\n";
					}
				}
				if (e == 4)
				{
					if (d[2] == -1 || d[0] == 0) { continue; }
					else//拿到牌堆
					{
						for (int i = 0; i < 3; i++)
						{
							if (i == 2)//跑完三張
							{
								take = 1;
							}
							if (d[i] == 1) { AI2s[1]++; }
							if (d[i] == 2) { AI2s[2]++; }
							if (d[i] == 3) { AI2s[3]++; }
							if (d[i] == 4) { AI2s[4]++; }
							if (d[i] == 5) { AI2s[5]++; }
							if (d[i] == 6) { AI2s[6]++; }
							if (d[i] == 7) { AI2s[7]++; }
							if (d[i] == 8) { AI2s[8]++; }
							if (d[i] == 9) { AI2s[9]++; }
						}
						for (int i = 0; i < 3; i++) { d[i] = -1; }
						cout << "AI2拿了D牌堆\n";
					}
				}
			}
			AI2_finish = 1;
			if (a[0] == -1 && b[0] == -1 && c[0] == -1 && d[0] == -1)
			{
				first = 2;
			}
		}
	}
}
void AI3s_turn(int &first, int &card_num, int(&a)[3], int(&b)[3], int(&c)[3], int(&d)[3], int(&yours)[10], int(&AI1s)[10], int(&AI2s)[10], int(&AI3s)[10], int(&card_group)[76], int &over, int &you_finish, int &AI1_finish, int &AI2_finish, int &AI3_finish, int &take, char &e, int &gameover, char &t, int &put, int &get, int &g)
{
	while (AI3_finish == 0)
	{
		int AI3_move = rand() % 2 + 1;
		if (AI3_move == 1)
		{
			if (a[2] != 0 && b[2] != 0 && c[2] != 0 && d[2] != 0) { continue; }//沒地方放牌
			else//有地方放牌
			{
				get = -1;
				while (get == -1)//確認有沒有卡
				{
					g = rand() % 76;//0~75
					get = card_group[g];
				}
				card_group[g] = -1;
				cout << "AI3抽到了";
				if (get == 1) { cout << "(紅)"; }
				if (get == 2) { cout << "(黃)"; }
				if (get == 3) { cout << "(粉)"; }
				if (get == 4) { cout << "(灰)"; }
				if (get == 5) { cout << "(綠)"; }
				if (get == 6) { cout << "(棕)"; }
				if (get == 7) { cout << "(藍)"; }
				if (get == 8) { cout << "(+2)"; }
				if (get == 9) { cout << "(彩)"; }
				cout << endl;
				if (card_num == 15)
				{
					cout << "\n這輪完遊戲就結束囉\n\n";
					over = 1;
				}
				card_num--;
				put = 0;
				while (put == 0)
				{
					t = rand() % 4 + 1;//1~4
					if (t == 1)
					{
						if (a[2] == -1 || a[2] != 0) { continue; }
						for (int i = 0; i < 3; i++)
						{
							if (a[i] == 0)
							{
								a[i] = get;
								put = 1;
								cout << "AI3放到了牌堆A\n";
								break;
							}
						}
					}
					if (t == 2)
					{
						if (b[2] == -1 || b[2] != 0) { continue; }
						for (int i = 0; i < 3; i++)
						{
							if (b[i] == 0)
							{
								b[i] = get;
								put = 1;
								cout << "AI3放到了牌堆B\n";
								break;
							}
						}
					}
					if (t == 3)
					{
						if (c[2] == -1 || c[2] != 0) { continue; }
						for (int i = 0; i < 3; i++)
						{
							if (c[i] == 0)
							{
								c[i] = get;
								put = 1;
								cout << "AI3放到了牌堆C\n";
								break;
							}
						}
					}
					if (t == 4)
					{
						if (d[2] == -1 || d[2] != 0) { continue; }
						for (int i = 0; i < 3; i++)
						{
							if (d[i] == 0)
							{
								d[i] = get;
								put = 1;
								cout << "AI3放到了牌堆D\n";
								break;
							}
						}
					}
				}
				break;
			}
		}
		else if (AI3_move == 2)
		{
			if ((a[0] == 0 || a[0] == -1) && (b[0] == 0 || b[0] == -1) && (c[0] == 0 || c[0] == -1) && (d[0] == 0 || d[0] == -1)) { continue; }
			take = 0;
			while (take == 0)
			{
				e = rand() % 4 + 1;//1~4
				if (e == 1)
				{
					if (a[2] == -1 || a[0] == 0) { continue; }
					else//拿到牌堆
					{
						for (int i = 0; i < 3; i++)
						{
							if (i == 2)//跑完三張
							{
								take = 1;
							}
							if (a[i] == 1) { AI3s[1]++; }
							if (a[i] == 2) { AI3s[2]++; }
							if (a[i] == 3) { AI3s[3]++; }
							if (a[i] == 4) { AI3s[4]++; }
							if (a[i] == 5) { AI3s[5]++; }
							if (a[i] == 6) { AI3s[6]++; }
							if (a[i] == 7) { AI3s[7]++; }
							if (a[i] == 8) { AI3s[8]++; }
							if (a[i] == 9) { AI3s[9]++; }
						}
						for (int i = 0; i < 3; i++) { a[i] = -1; }
						cout << "AI3拿了A牌堆\n";
					}
				}
				if (e == 2)
				{
					if (b[2] == -1 || b[0] == 0) { continue; }
					else//拿到牌堆
					{
						for (int i = 0; i < 3; i++)
						{
							if (i == 2)//跑完三張
							{
								take = 1;
							}
							if (b[i] == 1) { AI3s[1]++; }
							if (b[i] == 2) { AI3s[2]++; }
							if (b[i] == 3) { AI3s[3]++; }
							if (b[i] == 4) { AI3s[4]++; }
							if (b[i] == 5) { AI3s[5]++; }
							if (b[i] == 6) { AI3s[6]++; }
							if (b[i] == 7) { AI3s[7]++; }
							if (b[i] == 8) { AI3s[8]++; }
							if (b[i] == 9) { AI3s[9]++; }
						}
						for (int i = 0; i < 3; i++) { b[i] = -1; }
						cout << "AI3拿了B牌堆\n";
					}
				}
				if (e == 3)
				{
					if (c[2] == -1 || c[0] == 0) { continue; }
					else//拿到牌堆
					{
						for (int i = 0; i < 3; i++)
						{
							if (i == 2)//跑完三張
							{
								take = 1;
							}
							if (c[i] == 1) { AI3s[1]++; }
							if (c[i] == 2) { AI3s[2]++; }
							if (c[i] == 3) { AI3s[3]++; }
							if (c[i] == 4) { AI3s[4]++; }
							if (c[i] == 5) { AI3s[5]++; }
							if (c[i] == 6) { AI3s[6]++; }
							if (c[i] == 7) { AI3s[7]++; }
							if (c[i] == 8) { AI3s[8]++; }
							if (c[i] == 9) { AI3s[9]++; }
						}
						for (int i = 0; i < 3; i++) { c[i] = -1; }
						cout << "AI3拿了C牌堆\n";
					}
				}
				if (e == 4)
				{
					if (d[2] == -1 || d[0] == 0) { continue; }
					else//拿到牌堆
					{
						for (int i = 0; i < 3; i++)
						{
							if (i == 2)//跑完三張
							{
								take = 1;
							}
							if (d[i] == 1) { AI3s[1]++; }
							if (d[i] == 2) { AI3s[2]++; }
							if (d[i] == 3) { AI3s[3]++; }
							if (d[i] == 4) { AI3s[4]++; }
							if (d[i] == 5) { AI3s[5]++; }
							if (d[i] == 6) { AI3s[6]++; }
							if (d[i] == 7) { AI3s[7]++; }
							if (d[i] == 8) { AI3s[8]++; }
							if (d[i] == 9) { AI3s[9]++; }
						}
						for (int i = 0; i < 3; i++) { d[i] = -1; }
						cout << "AI3拿了D牌堆\n";
					}
				}
			}
			AI3_finish = 1;
			if (a[0] == -1 && b[0] == -1 && c[0] == -1 && d[0] == -1)
			{
				first = 3;
			}
		}
	}
}