//
//  Map.hpp
//  DesignPatterns
//
//  Created by Orlando‘s Mac on 2024/9/12.
//

#ifndef Map_hpp
#define Map_hpp

class IMap { 
public:
    virtual ~IMap( ) = default;
    virtual void show( ) const = 0;
};


class Map:public IMap {
public:
    virtual ~Map( ) = default;
    virtual void show( ) const = 0;
};

#endif /* Map_hpp */
