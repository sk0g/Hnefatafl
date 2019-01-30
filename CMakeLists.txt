cmake_minimum_required(VERSION 3.13)
project(Hnefatafl)

set(CMAKE_CXX_STANDARD 17)

set(SFML_DIR "<sfml root prefix>/lib/cmake/SFML")

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(Hnefatafl main.cpp)
target_link_libraries(Hnefatafl sfml-graphics sfml-audio sfml-window sfml-system)