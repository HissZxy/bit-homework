#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX_ROW 9
#define MAX_COL 9
#define MINE_COUNT 10
int Menu(){
	printf("**********************\n");
	printf("1.开始游戏\n");
	printf("0.退出游戏\n");
	printf("**********************\n");
	printf("请输入你的选择：\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void Init(char show_map[MAX_ROW][MAX_COL], char mine_map[MAX_ROW][MAX_COL]){
	//初始化showmap
	for (int row = 0; row < MAX_ROW; ++row){
		for (int col = 0; col < MAX_COL; ++col){
			show_map[row][col] = '*';
		}
	}
	for (int row = 0; row < MAX_ROW; ++row){
		for (int col = 0; col < MAX_COL; ++col){
			mine_map[row][col] = '0';
		}
	}
	int mine_count = MINE_COUNT;
	while (mine_count>0){
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (mine_map[row][col] == '1'){
			continue;
		}
		mine_map[row][col] = '1';
		--mine_count;
	}
} 

void PrintMap(char map[MAX_ROW][MAX_COL]){
	printf("  |");
	for (int col = 0; col < MAX_COL; ++col){
		printf("%d ",col); 
	}
	printf("\n"); 
	for (int col = 0; col < MAX_COL-2; ++col){
		printf("---");
	}
	printf("\n" ); 
	for (int row = 0; row < MAX_ROW; ++row){
		printf(" %d|", row);
		for (int col = 0; col < MAX_COL; ++col){
			printf("%c ",map[row][col]);
		}
		printf("\n");
	}
}
void UpdateShowMap(int row,int col,
	char mine_map[MAX_ROW][MAX_COL],
	char show_map[MAX_ROW][MAX_COL]){
	int count = 0;
	if (row-1>=0
		&&col-1>=0
		&&mine_map[row-1][col-1]=='1'){
		++count;
		}
	if (row - 1 >= 0
		&& mine_map[row - 1][col] == '1'){
		++count;
	}
	if (row - 1 >=0&&col + 1<MAX_COL&&
		mine_map[row - 1][col + 1] == '1'){
	    ++count;
	}
	if (col-1>=0&&
		mine_map[row][col - 1] == '1'){
		++count;
	}
	if (col+1<MAX_COL&&
		mine_map[row][col + 1] == '1'){
		++count;
	}
	if (row+1<MAX_ROW&&
		col-1>=0&&
		mine_map[row + 1][col - 1] == '1'){
		++count;
	}
	if (row+1<MAX_ROW&&
		mine_map[row + 1][col] == '1'){
		++count;
	}
	if (row+1<MAX_ROW&&
		col+1<MAX_COL&&
		mine_map[row + 1][col + 1] == '1'){
		++count;
	}
	show_map[row][col] = count+'0';
}
void Game(){
	//创建地图map
	char show_map[MAX_ROW][MAX_COL];
	char mine_map[MAX_ROW][MAX_COL];
	Init(show_map, mine_map);
	int blank_count = 0;
	while (1){
		system("cls");
		PrintMap(mine_map);
		printf("\n");
		PrintMap(show_map);
		printf("请输入要翻的位置(row col)\n");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= MAX_COL || col < 0 || col >= MAX_COL){
			printf("输入的坐标非法!\n");
			continue;
        }
		if (show_map[row][col] != '*'){
			printf("坐标已经被翻开!\n");
			continue; 
		}
		if (mine_map[row][col] == '1'){
			system("cls");
			PrintMap(mine_map);
			printf("很遗憾 你输了!\n");
			return;
		}
		++blank_count;
		if (blank_count==MAX_COL*MAX_ROW-MINE_COUNT){
			printf("恭喜你,排雷高手!\n");
			return;
		}
		//告诉玩家当前有几个雷
		UpdateShowMap(row, col,mine_map,show_map);

     }
}
int main(){
	srand((unsigned int)time(0));
	while (1){
		int choice = Menu();
		if (choice == 1){
			Game();
		}
		else if (choice == 0){
			printf("good bye\n");
			break;
		}
		else{
			printf("您的输入有误\n");
		}
		system("pause");
		return 0;
	}
}