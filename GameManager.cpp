#include "GameManager.h"
using namespace std;

GameManager::GameManager()
{

	sceneArr_[TITLE] = make_unique<TitleScene>();
	sceneArr_[STAGE] = make_unique<StageScene>();
	sceneArr_[CLEAR] = make_unique<ClearScene>();
	/*TitleSceneを実体化*/
	/*StageSceneを実体化*/
	/*ClearSceneを実体化*/

	currentSceneNo_ = TITLE;
}

GameManager::~GameManager()
{
}


int GameManager::Run(char* keys, char* preKeys)
{
	/*1つ前のSceneNo*/  /*今のSceneNo*/
	prevSceneNo_ = currentSceneNo_;

	/*今のSceneNo*/ /*今のSceneNo*/
	currentSceneNo_ = sceneArr_[currentSceneNo_]->GetSceneNo();

	if (prevSceneNo_ != currentSceneNo_)
	/*1つ前のSceneNo*/ /*今のSceneNo*/
	{
		sceneArr_[currentSceneNo_]->Init();
		          /*今のSceneNo*/
	}

	sceneArr_[currentSceneNo_]->Update(keys, preKeys);
	sceneArr_[currentSceneNo_]->Draw();
	   /*今のSceneNo*/
	  /*今のSceneNo*/

	return 0;
}


//#include "GameManager.h"
//
//GameManager::GameManager()
//{
//	sceneArr_[TITLE] = std::make_unique<TitleScene>();
//	sceneArr_[STAGE] = std::make_unique<StageScene>();
//	sceneArr_[CLEAR] = std::make_unique<ClearScene>();
//
//	currentSceneNo_ = TITLE;
//}
//
//
//GameManager::~GameManager()
//{
//
//}
//
//int GameManager::Run(char* keys, char* preKeys)
//{
//	while (Novice::ProcessMessage() == 0)
//	{
//
//		Novice::BeginFrame();
//		memcpy(preKeys, keys, 256);
//		Novice::GetHitKeyStateAll(keys);
//
//		prevSceneNo_ = currentSceneNo_;
//		currentSceneNo_ = sceneArr_[currentSceneNo_]->GetScene();
//
//		if (prevSceneNo_ != currentSceneNo_)
//		{
//			sceneArr_[currentSceneNo_]->Init();
//		}
//
//		sceneArr_[currentSceneNo_]->Update(keys, preKeys);
//		sceneArr_[currentSceneNo_]->Draw();
//		Novice::EndFrame();
//
//		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
//			break;
//		}
//
//
//	}
//	return 0;
//}