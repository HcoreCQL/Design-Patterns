//
//  Menu.hpp
//  DesignPatterns
//
//  Created by Orlando‘s Mac on 2024/9/12.
//

#ifndef Menu_hpp
#define Menu_hpp

class IMenu {
public:
    virtual ~IMenu( ) = default;
    virtual bool process( ) = 0;
};
class Menu:public IMenu {
public:
    virtual ~Menu( ) = default;
    virtual bool process( ) = 0;
};
/**
* 控制台菜单基类
**/
class ConsoleMenu :public Menu { public:
    virtual bool process( ) {
        display( );
        int choice = selectMenuItem( );
        return doAction( choice );
    }
protected:
    virtual void display( ) const = 0;
    virtual int  selectMenuItem( ) const;
    virtual bool doAction( int choice ) = 0;
};
/**
* 主菜单
**/
class MainMenu : public ConsoleMenu { protected:
    virtual void display( ) const  override;
    virtual bool doAction( int choice ) override;
};
/**
* 新游戏菜单
**/
class NewMenu : public ConsoleMenu { protected:
    virtual void display( ) const  override;
    virtual bool doAction( int choice ) override;
};
/**
* 载入菜单
**/
class LoadMenu : public ConsoleMenu { protected:
    virtual void display( ) const  override;
    virtual bool doAction( int choice ) override;
};
/**
* 选项菜单
 **/
 class OptionMenu : public ConsoleMenu {
 protected:
     virtual void display( ) const  override;
     virtual bool doAction( int choice ) override;
 };
 /**
 * 游戏菜单
 **/
 class PlayMenu :public ConsoleMenu { protected:
     virtual void display( ) const override;
     virtual bool doAction( int choice ) override;
 };
 /**
 * 存档菜单
 **/
 class SaveMenu :public ConsoleMenu { protected:
     virtual void display( ) const override;
     virtual bool doAction( int choice ) override;
 };
 /**
 * 暂停菜单
 **/
 class PauseMenu :public ConsoleMenu { protected:
     virtual void display( ) const override;
     virtual bool doAction( int choice ) override;
 };
 /**
 * 动画开关菜单 **/
 class AnimateMenu :public ConsoleMenu {
 protected:
     virtual void display( ) const override;
     virtual bool doAction( int choice ) override;
 };
 /**
 * 音乐开关菜单
 **/
 class MusicMenu :public ConsoleMenu { protected:
     virtual void display( ) const override;
     virtual bool doAction( int choice ) override;
 };
 /**
 * 玩家数量菜单 **/
class PlayerCountMenu :public ConsoleMenu {
protected:
    virtual void display( ) const override;
    virtual bool doAction( int choice ) override;
};
/**
* 难度等级菜单
**/
class DifficultyMenu :public ConsoleMenu { protected:
    virtual void display( ) const override;
    virtual bool doAction( int choice ) override;
};

#endif /* Menu_hpp */
