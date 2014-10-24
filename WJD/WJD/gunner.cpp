//
//  gunner.cpp
//  WJD
//
//  Created by Yizhi Zhang on 10/23/14.
//  Copyright (c) 2014 Yizhi Zhang. All rights reserved.
//

#include "stdafx.h"
class Gunner* Gunner::instance = NULL;
Gunner::Gunner()
:Skills(skillsName::Gunner,true)
{
}

class Gunner* Gunner::getObject()
{
    if(instance == NULL)
    {
        instance = new Gunner();
    }
    return instance;
}

void Gunner::fun(HUMAN &a, HUMAN &b)
{
    
}