//
//  Munitioner.h
//  WJD
//
//  Created by Yizhi Zhang on 10/21/14.
//  Copyright (c) 2014 Yizhi Zhang. All rights reserved.
//

#ifndef __WJD__Munitioner__
#define __WJD__Munitioner__

#include "stdafx.h"

class Munitioner : public Skills
{
private:
    static Munitioner *instance;
    Munitioner();
public:
    static Munitioner *getObject();
    virtual void fun(HUMAN&, HUMAN&);
};

#endif /* defined(__WJD__Munitioner__) */
