#include "Engine.h"

void Engine::input() {
	if (Keyboard::isKeyPressed(Keyboard::Escape)) {
		window.close();
	}

	if (Keyboard::isKeyPressed(Keyboard::A) && Keyboard::isKeyPressed(Keyboard::LShift)) {
		oslik.runLeft();
	} else if (Keyboard::isKeyPressed(Keyboard::A)) {
		oslik.stopLeft();
		oslik.moveLeft();
	} else {
		oslik.stopLeft();
	}

	if (Keyboard::isKeyPressed(Keyboard::D) && Keyboard::isKeyPressed(Keyboard::LShift)) {
		oslik.runRight();
	} else if (Keyboard::isKeyPressed(Keyboard::D)) {
		oslik.stopRight ();
		oslik.moveRight();
	} else {
		oslik.stopRight();
	}

	if (Keyboard::isKeyPressed(Keyboard::W)) {
		oslik.Jump();
	}
}