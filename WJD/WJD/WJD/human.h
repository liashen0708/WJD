#pragma once

#include "Skills.h"

enum Identity{abc};
class Skills;
class HUMAN
{
public:
	HUMAN();
	~HUMAN();
	void Shoot(HUMAN *cTarget);
	//virtual void identitySkill();
	bool bIsLive() { return m_uHp ? true : false; }
	//getters
	unsigned int GetUHp() { return m_uHp; }
	enum Identity GetEIdentity() { return m_eIdentity; }
	bool GetBIsInJail() { return m_bIsInJail; }
	bool GetBIsCursed() { return m_bIsCursed; }

	//setters
	void SetUHp(unsigned int uHp) { m_uHp = uHp; }
	void SetEIdentity(enum Identity eIdentity) { m_eIdentity = eIdentity; }
	void SetBIsInJail(bool bIsInJail) { m_bIsInJail = bIsInJail; }
	void SetBIsCursed(bool bIsCursed) { m_bIsCursed = bIsCursed; }

private:
	unsigned int m_uHp;
	Skills *m_pcSkill;
	enum Identity m_eIdentity;
	bool m_bIsInJail;
	bool m_bIsCursed;
};

