#pragma once
#include "IScene.h"

class TitleScene : public IScene/*ISceneをパブリック継承してStageSceneクラスを定義*/
{
public:
	/* 継承したInit、Update、Draw関数をoverride定義*/

	void Init() override;
	void Update(char* keys, char* preKeys) override;
	void Draw() override;


};



//#pragma once
//
//#include "IScene.h"
//
//class TitleScene; IScene{
//
//public:
//
//	void Init()override;
//	void Update(char* Keys, char* preKeys)override;
//	void Draw()override;
//
//
//private:
//
//
//	TitleScene();
//
//};