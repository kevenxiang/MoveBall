//
//  MoveBalls.hpp
//  MoveBall
//
//  Created by xiang on 16/6/8.
//
//

#ifndef MoveBalls_hpp
#define MoveBalls_hpp

#include <stdio.h>
#include "cocos2d.h"
#include "Ball.hpp"

USING_NS_CC;

class MoveBalls : public LayerColor {
public:
  virtual bool init();
    CREATE_FUNC(MoveBalls);
    
    virtual void update(float dt);
    static Scene *createScene();
    
private:
//    Ball *ball;
    
    cocos2d::Vector<Ball *>balls;
    void addBall(float x, float y);
};

#endif /* MoveBalls_hpp */
