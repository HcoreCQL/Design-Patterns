//
//  MenuType.hpp
//  DesignPatterns
//
//  Created by Orlando‘s Mac on 2024/9/12.
//

#ifndef MenuType_hpp
#define MenuType_hpp

class MenuType {
public:
    enum Type {
        MAIN_MENU = 0,
        NEW_MENU,
        LOAD_MENU,
        OPTION_MENU,
        PLAY_MENU,
        SAVE_MENU,
        PAUSE_MENU,
        ANIMATE_MENU,
        MUSIC_MENU,
        PLAYER_COUNT_MENU,
        DIFFICULTY_MENU
    };
    
    enum { TOTAL_COUNT = DIFFICULTY_MENU + 1 }; //菜单个数
    
};

#endif /* MenuType_hpp */
