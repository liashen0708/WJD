//
//  Skills.h
//  WJD
//
//  Created by Yizhi Zhang on 9/22/14.
//  Copyright (c) 2014 Yizhi Zhang. All rights reserved.
//

#ifndef WJD_Skills_h
#define WJD_Skills_h
#include "human.h"
#include <iostream>
#include <stdio.h>

class HUMAN;
enum skillsName{Wizard,Assassin,Munitioner,Doctor,WitchDoctor,Warrior,Gunner,Mercenary,Scholar,Utahime};
class Skills
{
private:
    bool isPassive;
    skillsName name;
public:
    Skills(skillsName ,bool);
    virtual void fun(HUMAN& , HUMAN&) = 0;
    virtual skillsName GetName();
    virtual bool IsPassive();
};

#endif
