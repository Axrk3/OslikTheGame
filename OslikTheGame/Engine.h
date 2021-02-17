#pragma once
#include <SFML/Graphics.hpp>
#include "Drawble.h"

using namespace sf;

class Engine {
private:
	RenderWindow m_Window;
	Sprite m_BackgroundSprite;
	Texture m_BackgroundTexture;

	Oslik m_Oslik;

	void input();
	void update(float dtAsSeconds);
	void draw();
public:
	Engine();
	void start();
};