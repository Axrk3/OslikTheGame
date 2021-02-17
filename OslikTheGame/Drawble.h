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
	bool m_LeftPressed;
	bool m_RightPressed;
	float m_Speed;
public:
	Oslik();
	void moveLeft();
	void moveRight();
	void stopLeft();
	void stopRight();
	void update(float elapsedTime);
};

