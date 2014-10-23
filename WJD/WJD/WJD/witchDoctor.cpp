//
//  witchWitchDoctor.cpp
//  WJD
//
//  Created by Yizhi Zhang on 10/21/14.
//  Copyright (c) 2014 Yizhi Zhang. All rights reserved.
//

#include "witchDoctor.h"
class WitchDoctor* WitchDoctor::instance = NULL;
WitchDoctor::WitchDoctor()
:Skills(skillsName::WitchDoctor,false)
{
}

class WitchDoctor* WitchDoctor::getObject()
{
    if(instance == NULL)
    {
        instance = new WitchDoctor();
    }
    return instance;
}

void WitchDoctor::fun(HUMAN &a, HUMAN &b)
{
    if(a.GetBIsCursed())
    {
        a.SetUHp(a.GetUHp()-2);
        a.SetBIsCursed(false);
    }
    if(a.bIsLive())
    {
        if(a.GetEIdentity() == Identity::abc && b.GetEIdentity() == Identity::abc) // TODO: Change the name to the related identity
        {
            b.SetUHp(0);
        }
        else if(Utilities::identityGroup(a) == Utilities::identityGroup(b))
            b.SetUHp(b.GetUHp()+1);
        else
            b.SetUHp(b.GetUHp()-2);
    }
}