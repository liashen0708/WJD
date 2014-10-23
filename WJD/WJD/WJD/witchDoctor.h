//
//  witchWitchDoctor.h
//  WJD
//
//  Created by Yizhi Zhang on 10/21/14.
//  Copyright (c) 2014 Yizhi Zhang. All rights reserved.
//

#ifndef __WJD__witchWitchDoctor__
#define __WJD__witchWitchDoctor__

#include "Skills.h"
#include "utilities.h"

class WitchDoctor : public Skills
{
private:
    static WitchDoctor *instance;
    WitchDoctor();
public:
    static WitchDoctor *getObject();
    virtual void fun(HUMAN&, HUMAN&);
};
#endif /* defined(__WJD__witchWitchDoctor__) */
