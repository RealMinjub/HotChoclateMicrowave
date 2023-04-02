#pragma once
#include <iostream>

#include <GLFW/glfw3.h>

class MouseListener {
public:
	static MouseListener* get();
	static void mousePosCallback(GLFWwindow* window, double xpos, double ypos);
	static void mouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
	static void mouseScrollCallback(GLFWwindow* window, double xOffset, double yOffset);
	static void endFrame();
	static float getX();
	static float getY();
	static float getDx();
	static float getDy();
	static float getScrollX();
	static float getScrollY();
	static bool isDragging();
	static bool mouseButtonDown(int button);

	bool mouseButtonPressed[3];
private:
	static inline MouseListener* instance = NULL;
	double xPos, yPos, lastX, lastY, scrollX, scrollY;
	bool isdragging;

	MouseListener();
};