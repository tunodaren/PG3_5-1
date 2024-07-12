#include "IScene.h"

int IScene::sceneNo = TITLE;


IScene::~IScene() {}

int IScene::GetSceneNo() {
	return sceneNo;/*SceneNoを返す*/
};


//#include "IScene.h"
//
//int IScene::SceneNo = TiTle;
//
//IScene::~IScene() {};
//
//int IScene::GetScene() { return SceneNo; };



