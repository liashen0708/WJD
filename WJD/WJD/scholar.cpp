//
//  scholar.cpp
//  WJD
//
//  Created by Yizhi Zhang on 10/23/14.
//  Copyright (c) 2014 Yizhi Zhang. All rights reserved.
//

#include "stdafx.h"
class Scholar* Scholar::instance = NULL;
Scholar::Scholar()
:Skills(skillsName::Scholar,false)
{
	this->isLearned = false;
}

skillsName Scholar::GetName()
{
	if (this->isLearned)
		return this->currentSkill->GetName();
	else
		return skillsName::Scholar;
}

bool Scholar::IsPassive()
{
	return currentSkill->IsPassive();
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
	if (this->isLearned)
		currentSkill->fun(a, b);
	else
	{
		currentSkill = b.GetESkills();
	}
}

