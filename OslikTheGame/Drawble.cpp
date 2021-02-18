#include "Drawble.h";

Oslik::Oslik() {
	m_Speed = 400;
	ground = 800;
	m_Texture.loadFromFile("bob.png");
	m_Sprite.setTexture(m_Texture);
	m_Position.x = 500;
	m_Position.y = ground;
	dx = dy = 0;
}
Sprite Drawble::getSprite() {
	return m_Sprite;
}
void Oslik::moveLeft() {
	m_LeftPressed = true;
}

void Oslik::RunLeft() {
	m_LeftRun = true;
}

void Oslik::moveRight() {
	m_RightPressed = true;
}

void Oslik::RunRight() {
	m_RightRun = true;
}

void Oslik::stopLeft() {
	m_LeftPressed = false;
	m_LeftRun = false;
}

void Oslik::stopRight() {
	m_RightPressed = false;
	m_RightRun = false;
}

void Oslik::jump() {
	if (m_OnGround) {
		dy = -500;
		m_OnGround = false;
	}
}

void Oslik::update(float elapsedTime) {
	if (m_RightPressed) {
		m_Position.x += m_Speed * elapsedTime;
		if (m_RightRun) {
			m_Position.x += m_Speed * elapsedTime;
		}
	}

	if (m_LeftPressed) {
		m_Position.x -= m_Speed * elapsedTime;
		if (m_LeftRun) {
			m_Position.x -= m_Speed * elapsedTime;
		}
	}
	 
	if (!m_OnGround) {
		dy += 1000 * elapsedTime;
	}

	m_Position.y += dy * elapsedTime;

	if (m_Position.y > ground) {
		m_Position.y = ground;
		dy = 0;
		m_OnGround = true;
	}

	m_Sprite.setPosition(m_Position);
}