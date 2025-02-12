#include "gameHeader.h"
/*
*  gameFunctions.cpp
*     - The functions for the game program are in this file. 
* 
*  AUTHOR: Most of the work in this program was completed by Prof. Andy Harbert
*          Prof. Pat Smith has made modifications (December 2021)
*
*/

// note: a Sprite represents an image on screen. A sprite knows and remembers its own position
// ship.move(offsetX, offsetY) adds offsetX, offsetY to 
// the current position of the ship. 
// x is horizontal, y is vertical. 
// 0,0 is in the UPPER LEFT of the screen, y increases DOWN the screen

/*
*  moveShip - This function is called to handle a keyPress event. 
*     Keyboard input is detected and ship is moved.
*   ** Part of the lab is to also handle firing a missile **
*  INPUT: The ship sprite is passed.  This merely a drawn object on the screen.
*  RETURN: None
*/
void moveShip(Sprite& ship)
{
	/*
	 *  This first If-then-else-if Block handles 
	 */
	if (Keyboard::isKeyPressed(Keyboard::Key::Left))
	{
		// left arrow is pressed: move our ship left 5 pixels ( this is -5 pixels to go left)
		// 2nd parm is y direction. We don't want to move up/down, so it's zero.
		ship.move({ -DISTANCE, 0 });
	}
	else if (Keyboard::isKeyPressed(Keyboard::Key::Right))
	{
		// right arrow is pressed: move our ship right 5 pixels
		ship.move({ DISTANCE, 0 });
	}
	else if (Keyboard::isKeyPressed(Keyboard::Key::Up)) {
		ship.move({ 0.0, -DISTANCE });
	}

	// *** add code (more if/else blocks) to move ship up/down

	int locationX = static_cast<int>(ship.getPosition().x);
	int locationY = static_cast<int>(ship.getPosition().y);
	// What do you want to do when you reach the edge of the screen? 
	//   You might just move the ship back, simulate hitting a "wall"
	//   You might also wrap around (change from some value greater than
	//   the width of the window back to zero, or from some x value less
	//   than zero to something like 795, near the far right edge? 
	//  Or you could do nothing? 
	// This statement gets the ship's x location. If you decide you want 
	//   to do something with the problem of the ship moving off screen
	//   you can use this:
	//
	//        ship.setPosition(float x, float y); 
	// 
	//   You pass the setPosition method the x and y value you want 
	//     to set the ship at. 
	
	// If you're having trouble, using this command will display the
	// position of the ship every time you enter this function!
	// 
	//cout << ship.getPosition().x << ", " << ship.getPosition().y << endl; 
}

