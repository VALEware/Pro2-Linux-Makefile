#pragma once

#include <string>
#include "include/glad/include/glad/glad.h"
#include <GLFW/glfw3.h>



class WindowInterface {


public:
    WindowInterface(std::string title, int width, int height);
    ~WindowInterface();

    void createWindow();

    GLFWwindow* getWinReference();
    bool windowShouldClose();
    void swapBuffers();


private:
    int width;
    int height;
    GLFWwindow* win;
    std::string title;


};


