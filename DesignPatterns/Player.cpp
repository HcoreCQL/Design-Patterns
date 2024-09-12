//
//  Player.cpp
//  DesignPatterns
//
//  Created by Orlando‘s Mac on 2024/9/12.
//

#include "Player.hpp"

// 接口可选 
class IPlayer {
public:
    virtual ~IPlayer( ) = default;
    virtual void advance( ) = 0;
};


class Player :public IPlayer {
public:
    virtual ~Player( ) = default;
    virtual void advance( ) = 0;
};

