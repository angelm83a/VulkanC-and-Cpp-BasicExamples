// VulkanTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define GLFW_INCLUDE_VULKAN
#include <include/GLFW/glfw3.h>
#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <vec4.hpp>
#include <mat4x4.hpp>
#include <iostream>
#include <Windows.h>
int main()
{
	std::cout << "A Simple Vulkan Application in C++\n";

	//initialize the window API
	glfwInit();

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

	//create the window with properties
	GLFWwindow* window = glfwCreateWindow(800, 600, "Vulkan window - Angelo Munoz, Test", nullptr, nullptr);
	//uint32_t extensionCount = 0;

	/*------let's call all extensions info available for this device*/
	// Provided by VK_VERSION_1_0
	//VkResult vkEnumerateDeviceExtensionProperties(
	VkPhysicalDevice physicalDevice;
	const char pLayerName = ' ';
	uint32_t extensionCount = 0;
	VkExtensionProperties* pProperties;
	//);
	/*--------------------------------------------------------------*/

	//To retrieve a list of supported extensions before creating an instance
	//https://vulkan-tutorial.com/Drawing_a_triangle/Setup/Instance
	vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);
	//vkEnumerateInstanceExtensionProperties(physicalDevice, &pLayerName, &extensionCount, &pProperties);

	std::cout << extensionCount << " extensions supported" << std::endl;
	glm::mat4 matrix;
	glm::vec4 vec;
	auto test = matrix * vec;

	//used to close or destroy the glfw window when the user clicks Close
	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();
	}

	//method to destroy the window
	glfwDestroyWindow(window);

	//terminate the program
	glfwTerminate();
	return 0;
}
