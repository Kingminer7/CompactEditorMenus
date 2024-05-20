#include <Geode/Geode.hpp>
#include <Geode/modify/SetupArtSwitchPopup.hpp>

using namespace geode::prelude;

class $modify(SetupArtSwitchPopup) {
	bool init(ArtTriggerGameObject* p0, CCArray* p1, int p2)
	{
		if (!SetupArtSwitchPopup::init(p0, p1, p2))
			return false;

		auto layer = as<CCLayer*>(this->getChildren()->objectAtIndex(0));

		CCObject* node = nullptr;
		// 9Slice
		as<CCNode*>(layer->getChildren()->objectAtIndex(0))->setContentSize(ccp(250, 105));
		//Title Text
		as<CCNode*>(layer->getChildren()->objectAtIndex(2))->setPosition(ccp(284.5, 200));
		//Touch Trigger Text
		as<CCNode*>(layer->getChildren()->objectAtIndex(3))->setPosition(ccp(192, 156));
		//Spawn Trigger Text
		as<CCNode*>(layer->getChildren()->objectAtIndex(4))->setPosition(ccp(192, 126));
		//Multi Trigger Text
		as<CCNode*>(layer->getChildren()->objectAtIndex(5))->setPosition(ccp(358, 126));
		//BG: Text
		as<CCNode*>(layer->getChildren()->objectAtIndex(6))->setVisible(false);
		
		//Ok Button
		as<CCNode*>(as<CCMenu*>(layer->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(0))->setPosition(ccp(0, 45));
		as<CCNode*>(as<CCMenu*>(layer->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(1))->setPosition(ccp(-107, 110));
		as<CCNode*>(as<CCMenu*>(layer->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(2))->setPosition(ccp(-107, 71));
		as<CCNode*>(as<CCMenu*>(layer->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(3))->setPosition(ccp(-107, 41));
		as<CCNode*>(as<CCMenu*>(layer->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(4))->setPosition(ccp(60, 41));
		as<CCNode*>(as<CCMenu*>(layer->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(5))->setPosition(ccp(0, 84));
		
		return true;
	}
};
