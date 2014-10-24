//
//  assassin.cpp
//  WJD
//
//  Created by Yizhi Zhang on 10/21/14.
//  Copyright (c) 2014 Yizhi Zhang. All rights reserved.
//

#include "stdafx.h"
class Assassin* Assassin::instance = NULL;
Assassin::Assassin()
:Skills(skillsName::Assassin,true)
{
}

class Assassin* Assassin::getObject()
{
    if(instance == NULL)
    {
        instance = new Assassin();
    }
    return instance;
}

void Assassin::fun(HUMAN &a, HUMAN &b)
{
    std::cout << "This is a passive skills" << std::endl;
}