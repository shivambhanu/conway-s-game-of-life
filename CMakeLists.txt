cmake_minimum_required(VERSION 3.30)
project(GameOne)
set(CMAKE_CXX_STANDARD 23)
add_executable(GameOne main.cpp
        grid.h
        grid.cpp)

# ------------------------------------------

#cmake_minimum_required(VERSION 3.16)
#project(RaylibGame)

# Find raylib
find_package(raylib REQUIRED)

# Link raylib
target_link_libraries(GameOne raylib)

# Additional frameworks (required for macOS)
target_link_libraries(GameOne
        "-framework CoreVideo"
        "-framework IOKit"
        "-framework Cocoa"
        "-framework OpenGL"
)


