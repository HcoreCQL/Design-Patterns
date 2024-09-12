//
//  MenuMgr.hpp
//  DesignPatterns
//
//  Created by Orlando‘s Mac on 2024/9/12.
//

#ifndef MenuMgr_hpp
#define MenuMgr_hpp

#include <vector>
#include <memory>
class Menu;
// 注意析构使用缺省的即可，不会造成内存泄漏


class MenuMgr {
public:
    MenuMgr( );
    Menu * activedMenu( ) const { return mCurMenu; }
    void   setActivedMenu( int menuType );
private:
    Menu * mCurMenu = nullptr; // 当前菜单
    std::vector< std::shared_ptr<Menu> > mVctMenus = { };//全体菜单避免显示delete
};


extern MenuMgr menuMgr; //全局对象声明

#endif /* MenuMgr_hpp */
