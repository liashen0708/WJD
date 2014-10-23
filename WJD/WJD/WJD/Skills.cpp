//
//  Skills.cpp
//  WJD
//
//  Created by Yizhi Zhang on 9/22/14.
//  Copyright (c) 2014 Yizhi Zhang. All rights reserved.
//

#include "Skills.h"

Skills::Skills(skillsName _Name, bool _isPassive)
{
    this->name = _Name;
    this->isPassive  = _isPassive;
}

skillsName Skills::GetName()
{
    return name;
}

bool Skills::IsPassive()
{
    return isPassive;
}

