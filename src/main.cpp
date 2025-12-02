#include <iostream>
#include <SDL2/SDL.h> // Include the main SDL header

int main(int argc, char* argv[]) {
    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    // Create a window
    SDL_Window* window = SDL_CreateWindow(
        "SDL Volleyball Game Test",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        800, // Width
        600, // Height
        SDL_WINDOW_SHOWN
    );

    if (window == NULL) {
        std::cerr << "Window could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        SDL_Quit();
        return 1;
    }

    std::cout << "SDL initialized and window created successfully!" << std::endl;

    // Wait for a few seconds and then clean up
    SDL_Delay(3000); 

    // Clean up
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}