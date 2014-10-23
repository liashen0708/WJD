//
//  assassin.h
//  WJD
//
//  Created by Yizhi Zhang on 10/21/14.
//  Copyright (c) 2014 Yizhi Zhang. All rights reserved.
//

#ifndef WJD_assassin_h
#define WJD_assassin_h

#include "stdafx.h"
class Skills;
class Assassin : public Skills
{
private:
    static Assassin *instance;
    Assassin();
public:
    static Assassin *getObject();
    virtual void fun(HUMAN&, HUMAN&);
};

#endif
