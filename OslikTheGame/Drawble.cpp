#include "Drawble.h";

Oslik::Oslik() {
	m_Speed = 400;
	m_Texture.loadFromFile("bob.png");
	m_Sprite.setTexture(m_Texture);
	m_Position.x = 500;
	m_Position.y = 800;
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

	m_Sprite.setPosition(m_Position);
}