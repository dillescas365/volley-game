cmake_minimum_required(VERSION 3.10)
project(VolleyballGame)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# --- Find SDL2 Libraries Automatically ---
# This command searches the system paths for the necessary SDL components.
find_package(SDL2 REQUIRED)

# --- Create Executable ---
add_executable(VolleyballGame src/main.cpp)

# --- Link the SDL Libraries ---
# Link the executable with the libraries found by find_package.
target_link_libraries(VolleyballGame 
    ${SDL2_LIBRARIES}
)

# If using other SDL components (like Image), you'd also include:
# find_package(SDL2_image REQUIRED)
# target_link_libraries(VolleyballGame ${SDL2_IMAGE_LIBRARIES})