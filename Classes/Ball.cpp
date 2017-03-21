//
//  Ball.cpp
//  MoveBall
//
//  Created by xiang on 16/6/8.
//
//

#include "Ball.hpp"

bool Ball::init() {
    Sprite::initWithFile("ball.png");
    
    visibleSize = Director::getInstance()->getVisibleSize();
    
    speedX = 3;
    return true;
}

void Ball::move() {
    setPositionX(getPositionX()+speedX);
    
    if (getPositionX() > visibleSize.width) {
        setPositionX(0);
    }
}