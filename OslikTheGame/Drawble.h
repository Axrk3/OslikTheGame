#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Drawble {
protected:
	Vector2f m_Position;
	Sprite m_Sprite;
	Texture m_Texture;
public:
	Sprite getSprite();
	void update(float elapsedTime);
};
class Creature: public Drawble {

};
class Oslik: public Creature {
protected:
	int ground;
	bool m_OnGround;
	bool m_LeftPressed;
	bool m_RightPressed;
	bool m_LeftRun;
	bool m_RightRun;
	bool m_Jump;
	float m_Speed;
	float dx, dy;
public:
	Oslik();
	void jump();
	void moveLeft();
	void RunLeft();
	void moveRight();
	void RunRight();
	void stopLeft();
	void stopRight();
	void update(float elapsedTime);
};

