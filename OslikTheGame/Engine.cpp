#include "Engine.h";

Engine::Engine() {
	Vector2f resolution;
	resolution.x = VideoMode::getDesktopMode().width;
	resolution.y = VideoMode::getDesktopMode().height;

	window.create(VideoMode(resolution.x, resolution.y), "Game Engine v.1", Style::Fullscreen);

	backgroundTexture.loadFromFile("back.jpg");
	backgroundSprite.setTexture(backgroundTexture);

}

void Engine::start() {
	Clock clock;
	while (window.isOpen()) {
		Time dt = clock.restart();

		float dtAsSeconds = dt.asSeconds();

		input();
		update(dtAsSeconds);
		draw();
	}
}