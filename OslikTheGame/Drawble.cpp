#include "Drawble.h";

Oslik::Oslik() {
	speed = 400;
	ground = 800;
	texture.loadFromFile("bob.png");
	sprite.setTexture(texture);
	rect = FloatRect(500, ground, 150, 192);
	dx = dy = 0;
}
Sprite Drawble::getSprite() {
	return sprite;
}
void Oslik::moveLeft() {
	leftPressed = true;
}

void Oslik::runLeft() {
	leftRun = true;
}

void Oslik::moveRight() {
	rightPressed = true;
}

void Oslik::runRight() {
	rightRun = true;
}

void Oslik::stopLeft() {
	leftPressed = false;
	leftRun = false;
}

void Oslik::stopRight() {
	rightPressed = false;
	rightRun = false;
}

void Oslik::Jump() {
	if (onGround) {
		dy = -500;
		onGround = false;
	}
}

void Oslik::update(float time) {
	if (rightPressed) {
		rect.left += speed * time;
		if (rightRun) {
			rect.left += speed * time;
		}
	}

	if (leftPressed) {
		rect.left -= speed * time;
		if (leftRun) {
			rect.left -= speed * time;
		}
	}
	 
	if (!onGround) {
		dy += 1000 * time;
	}

	rect.top += dy * time;

	if (rect.top > ground) {
		rect.top = ground;
		dy = 0;
		onGround = true;
	}

	sprite.setPosition(rect.left,rect.top);
}