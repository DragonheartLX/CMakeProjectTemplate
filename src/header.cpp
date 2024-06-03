#include "header.h"

void print()
{
    std::cout << "Hello" << std::endl;
}

void framebuffer_size_callback(GLFWwindow* window, int width, int height) 
{
    glViewport(0, 0, width, height);
}