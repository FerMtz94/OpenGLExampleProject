#ifndef DISPLAY_H
#define DISPLAY_H
#include <string>
#include <SDL2\SDL.h>

class Display{
public:
	Display(int width, int height, const std::string& title);
	
	void Update(); //Lo que hace es intercambiar los b�fers
	bool IsClosed();
	void Clear(float r, float g, float b, float a);
	virtual ~Display();

protected:
private:
	Display(const Display& other){}
	void operator=(const Display& other){}
	SDL_Window* m_window;
	SDL_GLContext m_glContext;
	bool m_isClosed;
};	//DISPLAY_H

#endif // !1