#pragma once

class OptionScene : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();

	virtual bool init();

	CREATE_FUNC(OptionScene);

private:
	void ShowCardList();

};