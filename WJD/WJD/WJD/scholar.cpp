//
//  scholar.cpp
//  WJD
//
//  Created by Yizhi Zhang on 10/23/14.
//  Copyright (c) 2014 Yizhi Zhang. All rights reserved.
//

#include "scholar.h"
class Scholar* Scholar::instance = NULL;
Scholar::Scholar()
:Skills(skillsName::Scholar,true)
{
}

skillsName Scholar::GetName()
{
    return skillsName::Assassin;
}

class Scholar* Scholar::getObject()
{
    if(instance == NULL)
    {
        instance = new Scholar();
    }
    return instance;
}

void Scholar::fun(HUMAN &a, HUMAN &b)
{
    
}

