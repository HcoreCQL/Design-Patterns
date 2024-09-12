//
//  App.cpp
//  DesignPatterns
//
//  Created by Orlando‘s Mac on 2024/9/12.
//


#include "App.hpp"
#include "Menu.hpp"
#include "MenuMgr.hpp"

void App::init( ) {
}
void App::run( ) {
    bool running = true;
    while ( running ) {
        Menu  *  pMenu = menuMgr.activedMenu( );
        running = pMenu->process( );
    }
}
void App::term( ) {
}
