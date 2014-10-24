//
//  wizard.h
//  WJD
//
//  Created by Yizhi Zhang on 9/24/14.
//  Copyright (c) 2014 Yizhi Zhang. All rights reserved.
//

#ifndef WJD_wizard_h
#define WJD_wizard_h

#include "stdafx.h"

class Wizard : public Skills
{
private:
    static Wizard *instance;
    Wizard();
public:
    static Wizard *getObject();
    virtual void fun(HUMAN&, HUMAN&);
};

#endif
