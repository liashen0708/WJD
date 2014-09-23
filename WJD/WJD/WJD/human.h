#pragma once
#include "stdafx.h"

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
	unsigned int SetUHp(unsigned int uHp) { m_uHp = uHp; }
	enum Identity SetEIdentity(enum Identity eIdentity) { m_eIdentity = eIdentity; }
	bool SetBIsInJail(bool bIsInJail) { m_bIsInJail = bIsInJail; }
	bool SetBIsCursed(bool bIsCursed) { m_bIsCursed = bIsCursed; }

private:
	unsigned int m_uHp;
	Skills *m_pcSkill;
	enum Identity m_eIdentity;
	bool m_bIsInJail;
	bool m_bIsCursed;
};

