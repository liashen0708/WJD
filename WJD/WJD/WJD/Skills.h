//
//  Skills.h
//  WJD
//
//  Created by Yizhi Zhang on 9/22/14.
//  Copyright (c) 2014 Yizhi Zhang. All rights reserved.
//

#ifndef WJD_Skills_h
#define WJD_Skills_h
enum skillsName{};
class Skills
{
private:
    skillsName name;
public:
    Skills(skillsName inputSKills);
    virtual void fun() = 0;
    void getname();
};

#endif
