//
//  Doctor.cpp
//  WJD
//
//  Created by Yizhi Zhang on 10/21/14.
//  Copyright (c) 2014 Yizhi Zhang. All rights reserved.
//

#include "Doctor.h"
class Doctor* Doctor::instance = NULL;
Doctor::Doctor()
:Skills(skillsName::Doctor,false)
{
}

class Doctor* Doctor::getObject()
{
    if(instance == NULL)
    {
        instance = new Doctor();
    }
    return instance;
}

void Doctor::fun(HUMAN &a, HUMAN &b)
{
    if(a.GetBIsCursed())
    {
        a.SetUHp(a.GetUHp()-2);
        a.SetBIsCursed(false);
    }
    if(a.bIsLive())
    {
        b.SetUHp(1);
    }
}