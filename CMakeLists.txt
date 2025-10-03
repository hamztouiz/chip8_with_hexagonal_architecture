cmake_minimum_required(VERSION 3.11)
project(chip8)
include(FetchContent)

FetchContent_Declare(
  sdl
  GIT_REPOSITORY https://github.com/libsdl-org/SDL.git
  GIT_TAG release-2.32.6
)

FetchContent_MakeAvailable(sdl)
  
add_executable(chip8 main.c)
target_link_libraries(chip8 PRIVATE SDL2main SDL2-static)