#include "Circle.h"


int main()
{
	RenderWindow window(VideoMode({ WINDOW_WIDTH, WINDOW_HEIGHT }), "Some circles");
	window.setFramerateLimit(60);

	
	while (window.isOpen())
	{
		
		while (const std::optional event = window.pollEvent()) // as long as there are events, deal with them.
		{
			if (event->is<sf::Event::Closed>())
				window.close();
		}

		window.clear(Color::Black);

		CircleShape c1 = makeCircle(60, 5, 5);
		CircleShape c2 = makeCircle(10, 600, 400);

		window.draw(c1); // c1 is a circle, draw it into the window
		window.draw(c2); // c2 is a different circle.   

		// end the current frame; put everything on the screen
		window.display();
	}
	return 0;
}