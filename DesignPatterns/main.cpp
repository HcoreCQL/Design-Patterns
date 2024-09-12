//
//  main.cpp
//  DesignPatterns
//
//  Created by Orlando‘s Mac on 2024/9/12.
//

#include <memory>
#include "App.hpp"


int main( ) {
//保证只在堆区创建App对象，且自动释放
// std::shared_ptr<App> app( new App()); 也可 
    std::shared_ptr<App> app = std::make_shared<App>( ); 
    app->init( ); //初始化
    app->run( ); //运行
    app->term( ); //终止
}
