#include "Engine.h"

void Engine::input() {
	if (Keyboard::isKeyPressed(Keyboard::Escape)) {
		m_Window.close();
	}

	if (Keyboard::isKeyPressed(Keyboard::A)) {
		m_Oslik.moveLeft();
	} else {
		m_Oslik.stopLeft();
	}

	if (Keyboard::isKeyPressed(Keyboard::D)) {
		m_Oslik.moveRight();
	}
	else {
		m_Oslik.stopRight ();
	}
}