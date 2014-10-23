//
//  wizard.cpp
//  WJD
//
//  Created by Yizhi Zhang on 9/24/14.
//  Copyright (c) 2014 Yizhi Zhang. All rights reserved.
//

#include "wizard.h"

class Wizard* Wizard::instance = NULL;
Wizard::Wizard()
:Skills(skillsName::Wizard,false)
{
}

class Wizard* Wizard::getObject()
{
    if(instance == NULL)
    {
        instance = new Wizard();
    }
    return instance;
}

void Wizard::fun(HUMAN &a, HUMAN &b)
{
    b.SetBIsCursed(true);
}