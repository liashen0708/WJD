//
//  wizard.h
//  WJD
//
//  Created by Yizhi Zhang on 9/24/14.
//  Copyright (c) 2014 Yizhi Zhang. All rights reserved.
//
#include "stdafx.h"
#ifndef WJD_wizard_h
#define WJD_wizard_h

class Wizard : public Skills
{
private:
    static Wizard *instance;
    Wizard();
public:
    static Skills *getObject();
    virtual void fun();
};

#endif
