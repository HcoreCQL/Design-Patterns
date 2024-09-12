//
//  MenuMgr.cpp
//  DesignPatterns
//
//  Created by Orlando‘s Mac on 2024/9/12.
//

#include "MenuMgr.hpp"

#include <memory>
#include <vector>
#include "Menu.hpp"
#include "MenuMgr.hpp"
#include "MenuType.hpp"
//实例化全局对象MenuMgr
MenuMgr menuMgr;


MenuMgr::MenuMgr( ) {
    mVctMenus.push_back( std::shared_ptr<Menu>( new MainMenu( ) ) );
    mVctMenus.push_back( std::shared_ptr<Menu>( new NewMenu( ) ) );
    mVctMenus.push_back( std::shared_ptr<Menu>( new LoadMenu( ) ) );
    mVctMenus.push_back( std::shared_ptr<Menu>( new OptionMenu( ) ) );
    mVctMenus.push_back( std::shared_ptr<Menu>( new PlayMenu( ) ) );
    mVctMenus.push_back( std::shared_ptr<Menu>( new SaveMenu( ) ) );
    mVctMenus.push_back( std::shared_ptr<Menu>( new PauseMenu( ) ) );
    mVctMenus.push_back( std::shared_ptr<Menu>( new AnimateMenu( ) ) );
    mVctMenus.push_back( std::shared_ptr<Menu>( new MusicMenu( ) ) );
    mVctMenus.push_back( std::shared_ptr<Menu>( new PlayerCountMenu( ) ) );
    mVctMenus.push_back( std::shared_ptr<Menu>( new DifficultyMenu( ) ) );
    setActivedMenu( MenuType::MAIN_MENU );
}
void MenuMgr::setActivedMenu( int menuType ) {
    mCurMenu = mVctMenus[ menuType ].get( );
}
