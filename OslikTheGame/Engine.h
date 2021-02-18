#pragma once
#include <SFML/Graphics.hpp>
#include "Drawble.h"

using namespace sf;

class Engine {
private:
	RenderWindow window;
	Sprite backgroundSprite;
	Texture backgroundTexture;

	Oslik oslik;

	void input();
	void update(float dtAsSeconds);
	void draw();
public:
	Engine();
	void start();
};