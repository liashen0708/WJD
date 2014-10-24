//
//  Doctor.h
//  WJD
//
//  Created by Yizhi Zhang on 10/21/14.
//  Copyright (c) 2014 Yizhi Zhang. All rights reserved.
//

#ifndef __WJD__Doctor__
#define __WJD__Doctor__

#include "stdafx.h"

class Doctor : public Skills
{
private:
    static Doctor *instance;
    Doctor();
public:
    static Doctor *getObject();
    virtual void fun(HUMAN&, HUMAN&);
};
#endif /* defined(__WJD__Doctor__) */
