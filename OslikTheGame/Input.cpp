#include "Engine.h"

void Engine::input() {
	if (Keyboard::isKeyPressed(Keyboard::Escape)) {
		m_Window.close();
	}

	if (Keyboard::isKeyPressed(Keyboard::A) && Keyboard::isKeyPressed(Keyboard::LShift)) {
		m_Oslik.RunLeft();
	} else if (Keyboard::isKeyPressed(Keyboard::A)) {
		m_Oslik.stopLeft();
		m_Oslik.moveLeft();
	} else {
		m_Oslik.stopLeft();
	}

	if (Keyboard::isKeyPressed(Keyboard::D) && Keyboard::isKeyPressed(Keyboard::LShift)) {
		m_Oslik.RunRight();
	} else if (Keyboard::isKeyPressed(Keyboard::D)) {
		m_Oslik.stopRight ();
		m_Oslik.moveRight();
	} else {
		m_Oslik.stopRight();
	}
}