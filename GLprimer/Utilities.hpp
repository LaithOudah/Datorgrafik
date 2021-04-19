/*
 * Some utility functions for the course TNM046
 *
 * Authors: Stefan Gustavson (stegu@itn.liu.se) 2013-2014
 *          Martin Falk (martin.falk@liu.se) 2021
 *
 * This code is in the public domain.
 */
#pragma once

// --- Add this line to your includes
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <vector>
#include <array>

struct GLFWwindow;

namespace util {

/*
 * displayFPS() - Calculate, display and return frame rate statistics.
 * Called every frame, but statistics are updated only once per second.
 * The time per frame is a better measure of performance than the
 * number of frames per second, so both are displayed.
 *
 * NOTE: This function doesn't work properly if you call it for multiple
 * windows. Call it only for one window, and only once every frame.
 */
double displayFPS(GLFWwindow* window);

GLuint createVertexBuffer(int location, int dimensions, const std::vector<float>& vertices);

GLuint createIndexBuffer(const std::vector<unsigned int>& indices);

}  // namespace util

