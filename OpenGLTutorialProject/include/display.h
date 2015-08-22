#ifndef DISPLAY_H
#define DISPLAY_H
#endif // !1

#include <string>

class Display{
public:
	Display(int width, int height, const std::string& title);
	virtual ~Display();

private:
	Display(const Display& other){}
	Display& operator=(const Display& other){}

};	//DISPLAY_H
