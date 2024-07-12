#pragma once
#include "IScene.h"

class ClearScene : public IScene{/*ISceneをパブリック継承してClearSceneクラスを定義*/
public:

	void Init() override;
	void Update(char* keys, char* preKeys) override;
	void Draw() override;

	/* 継承したInit、Update、Draw関数をoverride定義*/
};



//#pragma once
//#include "IScene.h"
////#include "Struct.h"
//#include "StageScene.h"
//
//bool CheckCollision(Vector2 pos1, Vector2 pos2, Vector2 size1, Vector2 size2);
//
//class ClearScene; IScene{
//
//public:
//	void Init()override;
//	void Update(char* Keys, char* preKeys)override;
//	void Draw()override;
//
//
//};

