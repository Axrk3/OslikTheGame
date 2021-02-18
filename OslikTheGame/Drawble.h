#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Drawble {
protected:
	FloatRect rect;
	Sprite sprite;
	Texture texture;
public:
	Sprite getSprite();
	void update(float time);
};
class Creature: public Drawble {

};
class Oslik: public Creature {
protected:
	int ground;
	bool onGround;
	bool leftPressed;
	bool rightPressed;
	bool leftRun;
	bool rightRun;
	bool jump;
	float speed;
	float dx, dy;
public:
	Oslik();
	void moveLeft();
	void runLeft();
	void moveRight();
	void runRight();
	void Jump();
	void stopLeft();
	void stopRight();
	void update(float time);
};

