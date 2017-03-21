//
//  MoveBalls.cpp
//  MoveBall
//
//  Created by xiang on 16/6/8.
//
//

#include "MoveBalls.hpp"

Scene * MoveBalls::createScene() {
    auto s = Scene::create();
    auto l = MoveBalls::create();
    s->addChild(l);
    return s;
}


bool MoveBalls::init() {
    LayerColor::initWithColor(Color4B(255, 255, 255, 255));
    
    addBall(100, 100);
    addBall(100, 140);
    addBall(100, 180);
    addBall(100, 220);
    
    scheduleUpdate();
    
    return true;
}

void MoveBalls::update(float dt) {
//    ball->move();
    
    for (auto it=balls.begin(); it!=balls.end(); it++) {
        (*it)->move();
    }
    
}

void MoveBalls::addBall(float x, float y) {
    auto ball = Ball::create();
    ball->setPosition(x, y);
    addChild(ball);
    
    balls.pushBack(ball);

}
