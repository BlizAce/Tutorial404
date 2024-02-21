#pragma once
#include <vector>

class SceneManager
{
public:
	SceneManager();
	~SceneManager();

	void Update();
	void Render();
	void Destroy();

	void SetScene(int scene);
	int GetScene();
private:
	int currentScene;
};

