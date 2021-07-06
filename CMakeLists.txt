cmake_minimum_required(VERSION 3.10)

project("Median")

set(CMAKE_CXX_STANDART 14)
set(CMAKE_CXX_STANDART_REQUIRED True)

add_executable("${PROJECT_NAME}" Main.cpp
			src/MedianCalculator.cpp)

target_include_directories("${PROJECT_NAME}" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

install(TARGETS "${PROJECT_NAME}" DESTINATION bin)
install(FILES Main.cpp src/MedianCalculator.cpp DESTINATION src)

include(CTest)

include(CPack)
