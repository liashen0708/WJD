//
//  gunner.h
//  WJD
//
//  Created by Yizhi Zhang on 10/23/14.
//  Copyright (c) 2014 Yizhi Zhang. All rights reserved.
//

#ifndef __WJD__gunner__
#define __WJD__gunner__

#include "stdafx.h"

class Gunner : public Skills
{
private:
    static Gunner *instance;
    Gunner();
public:
    static Gunner *getObject();
    virtual void fun(HUMAN&, HUMAN&);
};


#endif /* defined(__WJD__gunner__) */
