 /*********************************************************************
** Copyright (C) 萌动四方网络科技有限公司
** 文件名： TianJi
** 日期：   2015:1:30
** 说明：	田忌
** 其它：	
** 历史：2015:1:30 初始版本
*********************************************************************/
#pragma once
#include "cocos2d.h"
#include "Roles/Role/Role.h"

class Tianji : public Role
{
public:
	Tianji(void);
	virtual ~Tianji(void);

	CREATE_ROLE_FUNC(Tianji);

protected:
	void loadArmature();											/* 加载动画资源 */
	void initTalentEffect();										/* 设置天赋buff */

	void actionMovementCallFunc(cocostudio::Armature *, cocostudio::MovementEventType, const std::string&);
	void actionFrameEventCallFunc(cocostudio::Bone *bone, const std::string& evt, int originFrameIndex, int currentFrameIndex);

	/* 动作执行 Begin */
	bool runActionAttack();
	bool runActionTwiceAtk();
	bool runActionThriceAtk();
 	bool runActionSkillOne();
 	bool runActionSkillTwo();
 	bool runActionSkillThree();
 	bool runActionSkillFour();
	/* 动作执行 End */
};

