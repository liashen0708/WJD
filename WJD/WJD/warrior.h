//
//  warrior.h
//  WJD
//
//  Created by Yizhi Zhang on 10/21/14.
//  Copyright (c) 2014 Yizhi Zhang. All rights reserved.
//

#ifndef __WJD__warrior__
#define __WJD__warrior__

#include "stdafx.h"

class Warrior : public Skills
{
private:
    static Warrior *instance;
    Warrior();
public:
    static Warrior *getObject();
    virtual void fun(HUMAN&, HUMAN&);
};


#endif /* defined(__WJD__warrior__) */
