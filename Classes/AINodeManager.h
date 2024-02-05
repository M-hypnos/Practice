#ifndef __AI_NODE_MANAGER_H__
#define __AI_NODE_MANAGER_H__

#include "cocos2d.h"
#include "FSMExample/FSMNode.h"
#include "HFSMExample/HFSMNode.h"
#include "BTExample/BTTreeNode.h"

USING_NS_CC;
using namespace std;

enum class AINodeType {
	FSMNode,
	HFSMNode,
	BTTreeNode
};

class AINodeManager
{
public:
	AIAttackNode* getFSMNode();
	AIAttackNode* getHFSMNode();
	AIAttackNode* getBTTreeNode();

protected:
	
};

#endif