#pragma once
#include "Scene.h"
#include "stdafx.h"
#include "Actor.h"

#define MAX_OBJECTS_COUNT 50

class InGameScene :
	public Scene
{
public:
	InGameScene();
	virtual ~InGameScene();

	virtual void Create();
	virtual void Update();
	virtual void Draw();
	virtual void KeyProc(unsigned char key, int specKey);
	virtual void MouseProc(int button, int state, int x, int y);

	virtual void AddObject(int x, int y);
protected:
	Renderer*				myRenderer;

private:
	std::vector<Actor>		m_actorArr;
	int						m_sceneObjectNum = 0;

};
