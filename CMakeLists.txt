cmake_minimum_required(VERSION 3.15)
project(StickFright)

set(CMAKE_CXX_STANDARD 11)
message(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR})

IF(${CMAKE_SYSTEM_NAME} MATCHES "Linux")

    link_libraries(GL GLU glut)
ELSE()
    set(CMAKE_CXX_FLAGS "-framework OpenGL -framework GLUT")
ENDIF()
add_compile_options(-Wdeprecated-declarations)

aux_source_directory(reallizations REALLIZATIONS_SRCS)
add_executable(StickFright main.cpp ${REALLIZATION_SRCS} reallizations/game_game.cpp)
