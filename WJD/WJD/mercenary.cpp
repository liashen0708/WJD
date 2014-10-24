//
//  mercenary.cpp
//  WJD
//
//  Created by Yizhi Zhang on 10/23/14.
//  Copyright (c) 2014 Yizhi Zhang. All rights reserved.
//

#include "stdafx.h"
class Mercenary* Mercenary::instance = NULL;
Mercenary::Mercenary()
:Skills(skillsName::Mercenary,true)
{
}

class Mercenary* Mercenary::getObject()
{
    if(instance == NULL)
    {
        instance = new Mercenary();
    }
    return instance;
}

void Mercenary::fun(HUMAN &a, HUMAN &b)
{
    
}