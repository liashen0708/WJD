//
//  scholar.h
//  WJD
//
//  Created by Yizhi Zhang on 10/23/14.
//  Copyright (c) 2014 Yizhi Zhang. All rights reserved.
//

#ifndef __WJD__scholar__
#define __WJD__scholar__

#include "Skills.h"
class Scholar : public Skills
{
private:
    static Scholar *instance;
    Scholar();
    Skills* currentSkill;
public:
    static Scholar *getObject();
    virtual void fun(HUMAN&, HUMAN&);
    virtual skillsName GetName();
    void reset();
};

#endif /* defined(__WJD__scholar__) */
