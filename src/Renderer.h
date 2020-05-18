#pragma once

#include <GL/glew.h>

#define DEBUG 1;

#ifdef DEBUG
#define ASSERT(x) if (!(x)) __debugbreak();
#define GLCall(x) GLClearError();x;ASSERT(GLLogCall(#x,__FILE__,__LINE__))
#else
#define GLCall(x)x
#endif

void GLClearError();
bool GLLogCall(const char* function, const char* file, int line);
