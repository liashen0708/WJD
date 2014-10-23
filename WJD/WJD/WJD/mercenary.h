//
//  mercenary.h
//  WJD
//
//  Created by Yizhi Zhang on 10/23/14.
//  Copyright (c) 2014 Yizhi Zhang. All rights reserved.
//

#ifndef __WJD__mercenary__
#define __WJD__mercenary__

#include "Skills.h"

class Mercenary : public Skills
{
private:
    static Mercenary *instance;
    Mercenary();
public:
    static Mercenary *getObject();
    virtual void fun(HUMAN&, HUMAN&);
};


#endif /* defined(__WJD__mercenary__) */
