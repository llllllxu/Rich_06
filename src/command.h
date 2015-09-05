/*
* 声明游戏中的命令解析与命令处理函数
*/

#ifndef _COMMAND_H_
#define _COMMAND_H_

#include "types.h"

/*
* 函数 void get_command(char *buffer, int length);
* 参数：buffer 用来存储输入的命令的缓冲区
* 参数：length 缓冲区的长度
* 作用：获取当前玩家输入的操作命令
* 作者：张泰然
*/
void get_command(char *buffer, int length);

/*
* 函数 void parse_command(char *command);
* 参数：game 指向游戏数据结构体的指针
* 参数：command 当前玩家输入的操作命令字符串
* 作用：解析当前玩家输入的操作命令，执行相应的命令
* 作者：张泰然
*/
void parse_command(Game *game, char *command);

/*
* 函数 void roll(Game *game);
* 参数：game 指向游戏数据结构体的指针
* 作用：当前玩家掷骰子行走
* 作者：张泰然
*/
void roll(Game *game);

/*
* 函数 void buy_land(Game *game);
* 参数：game 指向游戏数据结构体的指针
* 作用：当前玩家购买一块未被购买的土地
* 作者：张泰然
*/
void buy_land(Game *game);

/*
* 函数 void update_land(Game *game);
* 参数：game 指向游戏数据结构体的指针
* 作用：当前玩家升级一块已经购买的土地
* 作者：张泰然
*/
void update_land(Game *game);

/*
* 函数 void pay_others_land(Game *game);
* 参数：game 指向游戏数据结构体的指针
* 作用：向其他玩家支付过路费
* 作者：张泰然
*/
void pay_others_land(Game *game);

/*
* 函数 void next_player(Game *game);
* 参数：game 指向游戏数据结构体的指针
* 作用：交权给下一个玩家
* 作者：张泰然
*/
void next_player(Game *game);

/*
* 函数 void help();
* 作用：显示各个命令的使用说明
* 作者：张泰然
*/
void help();

/*
* 函数 void quit();
* 作用：强制结束游戏
* 作者：张泰然
*/
void quit();

/*
* 函数 void sell(Game *game, int pos);
* 参数：game 指向游戏数据结构体的指针
* 参数：pos 房产在地图上的绝对位置
* 作用：当前玩家出售指定位置的房产
* 作者：张泰然
*/
void sell(Game *game, int pos);

/*
* 函数 void query(Game *game, Player *player);
* 参数：game 指向游戏数据结构体的指针
* 参数：player 指向玩家数据结构体的指针，表示某一玩家
* 作用：显示玩家资产信息
* 作者：张泰然
*/
void query(Game *game, Player *player);

/*
* 函数 void step(Game *game, int number);
* 参数：game 指向游戏数据结构体的指针
* 参数：number 指定的行走步数
* 作用：实现遥控骰子功能，行走指定的任意的步数
* 作者：张泰然
*/
void step(Game *game, int number);

#endif