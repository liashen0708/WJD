//
//  wizard.cpp
//  WJD
//
//  Created by Yizhi Zhang on 9/24/14.
//  Copyright (c) 2014 Yizhi Zhang. All rights reserved.
//

#include "wizard.h"

Wizard::Wizard()
:Skills(skillsName::Wizard,false)
{
}

Skills* Wizard::getObject()
{
    if(instance == NULL)
    {
        instance = new Wizard();
    }
    return instance;
}