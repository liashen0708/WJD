//
//  warrior.cpp
//  WJD
//
//  Created by Yizhi Zhang on 10/21/14.
//  Copyright (c) 2014 Yizhi Zhang. All rights reserved.
//


#include "stdafx.h"
class Warrior* Warrior::instance = NULL;
Warrior::Warrior()
:Skills(skillsName::Warrior,true)
{
}

class Warrior* Warrior::getObject()
{
    if(instance == NULL)
    {
        instance = new Warrior();
    }
    return instance;
}

void Warrior::fun(HUMAN &a, HUMAN &b)
{
    
}