/*
 * Screen.h
 *
 *  Created on: 1 Nov 2016
 *      Author: Thomas
 */

#ifndef SCREEN_H_
#define SCREEN_H_

#include <SDL.h>

namespace tjw {

class Screen {
public:
	const static int SCREEN_WIDTH = 800;
	const static int SCREEN_HEIGHT = 600;

private:
	SDL_Window *m_window;
	SDL_Renderer *m_renderer;
	SDL_Texture *m_texture;
	Uint32 *m_buffer;

public:
	Screen();
	bool init();
	void update();
	void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
	bool processEvents();
	void close();
	void clear();
};

} /* namespace tjw */

#endif /* SCREEN_H_ */
