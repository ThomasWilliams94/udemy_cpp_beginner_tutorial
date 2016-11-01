/*
 * Screen.cpp
 *
 *  Created on: 1 Nov 2016
 *      Author: Thomas
 */

#include "Screen.h"

namespace tjw {

Screen::Screen() :
		m_window(NULL), m_renderer(NULL), m_texture(NULL), m_buffer(NULL) {

}

bool Screen::init() {
	return true;
}

bool Screen::processEvents() {
	return false;
}

void Screen::close() {

}

} /* namespace tjw */
