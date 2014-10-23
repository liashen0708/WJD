//
//  Munitioner.cpp
//  WJD
//
//  Created by Yizhi Zhang on 10/21/14.
//  Copyright (c) 2014 Yizhi Zhang. All rights reserved.
//

#include "munitioner.h"
class Munitioner* Munitioner::instance = NULL;
Munitioner::Munitioner()
:Skills(skillsName::Munitioner,false)
{
}

class Munitioner* Munitioner::getObject()
{
    if(instance == NULL)
    {
        instance = new Munitioner();
    }
    return instance;
}

void Munitioner::fun(HUMAN &a, HUMAN &b)
{
    if(a.GetBIsCursed())
    {
        a.SetUHp(a.GetUHp()-2);
        a.SetBIsCursed(false);
    }
    if(a.bIsLive())
    {
        std::cout << "玩家取得子弹两枚" << std::endl;
    }
}