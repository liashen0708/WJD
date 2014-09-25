//
//  Skills.cpp
//  WJD
//
//  Created by Yizhi Zhang on 9/22/14.
//  Copyright (c) 2014 Yizhi Zhang. All rights reserved.
//

#include "Skills.h"
#include "stdafx.h"

Skills::Skills(skillsName inputName, bool isPassive)
{
    this->name = inputName;
    this->isPassive  = isPassive;
}

skillsName Skills::GetName()
{
    return name;
}

bool Skills::IsPassive()
{
    return isPassive;
}

