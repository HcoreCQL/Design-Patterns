//
//  Menu.cpp
//  DesignPatterns
//
//  Created by Orlando‘s Mac on 2024/9/12.
//

#include "Menu.hpp"

#include <iostream>
using namespace std;


#include "MenuType.hpp"
#include "Menu.hpp"
#include "MenuMgr.hpp"
#include "Getch.hpp"

/**
* 菜单基类
**/
// 读取键盘输入个位数字0到9,
int ConsoleMenu::selectMenuItem( ) const {
    int digital = -1;
    while ( digital < 0 || digital>9 ) {
        digital = getch( ) - '0';
    }
    putchar( digital + '0' ); //只在正确时回显
    return digital;
}


/**
* 主菜单
**/
void MainMenu::display( ) const {
    system( "cls" );
    cout << "\n";
    cout << "\t 主菜单\n"; cout << "\t--------\n"; cout << "\t1.新的游戏\n"; cout << "\t2.载入游戏\n"; cout << "\t3.选 项\n"; cout << "\t0.退 出\n\n"; cout << "\t请选择(0-3):";
}


bool MainMenu::doAction( int choice ) {
    if ( choice == 0 ) {
        return false;
    } else if ( choice == 1 ) {
        menuMgr.setActivedMenu( MenuType::NEW_MENU );
    } else if ( choice == 2 ) {
        menuMgr.setActivedMenu( MenuType::LOAD_MENU );
    } else if ( choice == 3 ) {
        menuMgr.setActivedMenu( MenuType::OPTION_MENU );
    }
    return true;
}
    

/**
* 新游戏菜单
**/
void NewMenu::display( ) const {
    system( "cls" );
    cout << "\n\t 开始菜单\n\n"; cout << "\t1.玩家数量\n"; cout << "\t2.难度等级\n"; cout << "\t0.开始游戏\n\n";
    cout << "\t请选择(0-2):";
}


bool NewMenu::doAction( int choice ) {
    if ( choice == 1 ) {
        menuMgr.setActivedMenu( MenuType::PLAYER_COUNT_MENU );
    } else if ( choice == 2 ) {
        menuMgr.setActivedMenu( MenuType::DIFFICULTY_MENU );
    } else if ( choice == 0 ) {
        menuMgr.setActivedMenu( MenuType::PLAY_MENU );
    }
    return true;
    
}
    
/**
* 载入菜单
**/
void LoadMenu::display( ) const {
    system( "cls" );
    cout << "\n\t 载入进度菜单\n"; cout << "\t1.xxxx\n";
    cout << "\t2.xxxx\n";
    cout << "\t3.xxx\n";
    cout << "\t0.返回游戏\n\n"; cout << "\t请选择(0-3):";
}


bool LoadMenu::doAction( int choice ) { //暂时，全部继续游戏
    menuMgr.setActivedMenu( MenuType::PLAY_MENU ); return true;
}


/**
* 选项菜单
*/
void OptionMenu::display( ) const {
    system( "cls" );
    cout << "\n\t 选项菜单\n\n"; cout << "\t1.动画开关\n"; cout << "\t2.音乐开关\n"; cout << "\t0.回主菜单\n\n"; cout << "\t请选择(0-2):";
}


bool OptionMenu::doAction( int choice ) {
    if ( choice == 1 ) {
        menuMgr.setActivedMenu( MenuType::ANIMATE_MENU );
    } else if ( choice == 2 ) {
        menuMgr.setActivedMenu( MenuType::MUSIC_MENU );
    } else if ( choice == 0 ) {
        menuMgr.setActivedMenu( MenuType::MAIN_MENU );
    }
    return true;
}


/**
* 游戏界面菜单
**/
void PlayMenu::display( ) const {
    system( "cls" ); // 显示界面
    // (to be done)
    // 显示菜单
    cout << "\n";
    cout << "\t1.前进 0.暂停 \t请选择(0-1):";
}


bool PlayMenu::doAction( int choice ) {
    if ( choice == 0 ) {
        menuMgr.setActivedMenu( MenuType::PAUSE_MENU );
    } else if ( choice == 1 ) {
        //玩家前进
        // (to be done)
        menuMgr.setActivedMenu( MenuType::PLAY_MENU );
    }
    return true;
}


/**
* 存档菜单
**/
void SaveMenu::display( ) const {
    system( "cls" );
    cout << "\n\t 保存进度菜单\n"; cout << "\t1.xxxx\n";
    cout << "\t2.xxxx\n";
    cout << "\t3.xxx\n\n";
    cout << "\t请选择(1-3):";
}


bool SaveMenu::doAction( int choice ) {
    if ( choice >= 1 && choice <= 3 ) {
        //保存到对应存档 // (to be done)
        //直接继续游戏
        menuMgr.setActivedMenu( MenuType::PLAY_MENU );
    }
    return true;
}
    

/**
* 暂停菜单
**/
    
void PauseMenu::display( ) const {
    system( "cls" );
    cout << "\n\t 暂停菜单\n\n"; cout << "\t1.保存进度\n"; cout << "\t2.回主菜单\n"; cout << "\t0.继续游戏\n\n"; cout << "\t请选择(0-3):";
}


bool PauseMenu::doAction( int choice ) {
    if ( choice == 1 ) {
        menuMgr.setActivedMenu( MenuType::SAVE_MENU );
    } else if ( choice == 2 ) {
        menuMgr.setActivedMenu( MenuType::MAIN_MENU );
    } else {
        menuMgr.setActivedMenu( MenuType::PLAY_MENU );
    }
    return true;
}
    
/**
* 动画开关菜单 **/

void AnimateMenu::display( ) const {
    system( "cls" );
    cout << "\n\t 动画菜单\n\n"; cout << "\t1.开\n";
    cout << "\t2.关\n\n";
    cout << "\t请选择(1-2):";
}


bool AnimateMenu::doAction( int choice ) {
    if ( choice == 1 ) {
        //处理开动画
    }
    else if ( choice == 2 ) {
        //处理关闭动画
    }
    menuMgr.setActivedMenu( MenuType::OPTION_MENU );
    return true;
}


/**
* 音乐开关菜单
**/
void MusicMenu::display( ) const {
    system( "cls" );
    cout << "\n\t 音乐菜单\n\n"; cout << "\t1.开\n";
    cout << "\t2.关\n\n";
    cout << "\t请选择(1-2):";
}


bool MusicMenu::doAction( int choice ) {
    if ( choice == 1 ) {
        //处理开音乐
    } else if ( choice == 2 ) {
        //处理关闭音乐
    }
    menuMgr.setActivedMenu( MenuType::OPTION_MENU );
    return true;
}


/**
* 玩家数量菜单
**/
void PlayerCountMenu::display( ) const {
    system( "cls" );
    cout << "\n\t 玩家数量菜单\n\n"; 
    cout << "\t1.玩家数量(1)\n";
    cout << "\t2.玩家数量(2)\n";
    cout << "\t3.玩家数量(3)\n";
    cout << "\t4.玩家数量(4)\n";
    cout << "\t5.玩家数量(5)\n";
    cout << "\t0.返回\n\n";
    cout << "\t请选择(0-5):";
}

bool PlayerCountMenu::doAction( int choice ) {
    if ( choice >= 1 && choice <= 5 ) {
        //记录玩家数量
        // (to be done)
    }
    if ( choice >= 0 && choice <= 5 )
        menuMgr.setActivedMenu( MenuType::NEW_MENU );
    return true;
}
        
/**
        * 难度等级菜单
        **/
void DifficultyMenu::display( ) const {
    system( "cls" );
    cout << "\n\t 难度等级菜单\n\n"; cout << "\t1.菜鸟\n";
    cout << "\t2.普通\n";
    cout << "\t3.困难\n";
    cout << "\t4.骨灰\n"; cout << "\t0.返回\n\n";
    cout << "\t请选择(0-4):";
}



bool DifficultyMenu::doAction( int choice ) {
    if ( choice >= 1 && choice <= 4 ) {
        //记录难度等级
        // (to be done)
    }
    if ( choice >= 0 && choice <= 4 )
        menuMgr.setActivedMenu( MenuType::NEW_MENU );
    return true;
}
