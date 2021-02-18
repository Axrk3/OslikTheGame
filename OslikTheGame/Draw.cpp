#include "Engine.h"

void Engine::draw() {
	window.clear(Color::White);
	window.draw(backgroundSprite);
	window.draw(oslik.getSprite());
	window.display();
}