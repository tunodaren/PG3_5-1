#pragma once
#include "IScene.h"
#include "Vector2.h"
#include "Player.h"
#include "Enemy.h"

class StageScene : public IScene {/*ISceneをパブリック継承してStageSceneクラスを定義*/

public:
	
	
	~StageScene();
    void Init()override;
    void Update(char* keys, char* preKeys) override;
	void Draw()override;
	/* 継承したInit、Update、Draw関数をoverride定義*/

public:
	Player* player_;
	Enemy* enemy_;
};


//#pragma once
//
//#include "IScene.h"
//#include "Player.h"
//#include "Enemy.h"
//
//class StageScene : IScene {
//public:
//	void Init()override;
//	~StageScene();
//	void Update(char* keys, char prekeys)override;
//	void CollisiBulletEnemy();
//	void Draw()override;
//
//private:
//	Player * player = newPlayre();
//	Enemy* enemy = newEnemy();
//
//};