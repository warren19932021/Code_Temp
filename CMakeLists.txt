include_directories(include)
file(GLOB sources ${PROJECT_SOURCE_DIR}/src/*.cpp)
add_executable(program main.cpp ${sources})



