/*
* 声明程序中的辅助函数
*/

#ifndef _HELPER_H_
#define _HELPER_H_

#include "types.h"

/*
* 函数 int get_roll_number();
* 作用：获取掷骰子所获得的点数，为1到6，函数所用的随机种子在程序初始化时进行设置
* 返回值：掷骰子所获得的点数，为1到6之间
* 作者：张泰然
*/
int get_roll_number();

/*
* 函数 int get_tools_amount(Player *player);
* 参数：player 指向玩家数据结构体的指针，表示某一玩家
* 作用：获取指定玩家的道具的总数
* 返回值：指定玩家的道具的总数
* 作者：张泰然
*/
int get_tools_amount(Player *player);

/*
* 函数 void str_tolower(char *str);
* 参数：str 指向字符串的指针
* 作用：将字符串中的字母改为小写形式
* 作者：张泰然
*/
void str_tolower(char *str);

/*
* 函数 int get_place_worth(Place *place);
* 参数：place 指向地块数据结构体的指针，表示某一地块
* 作用：获取指定地块的房产价值
* 返回值：指定地块的房产价值
* 作者：张泰然
*/
int get_place_worth(Place *place);

#endif