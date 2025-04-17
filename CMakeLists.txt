cmake_minimum_required(VERSION 3.15)
project(prog2hw
    VERSION 0.1.0
    DESCRIPTION "The basics of programming 2 - Daniel Csirke - Homework"
    LANGUAGES CXX
)

# Add custom CMake modules
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

# Default to Release build if not specified
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release CACHE STRING "Choose the type of build (Debug or Release)" FORCE)
endif()

# C++ standard settings
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Build shared libraries option
option(BUILD_SHARED_LIBS "Build using shared libraries" OFF)

# Include directories
include_directories(
    "${PROJECT_SOURCE_DIR}/include"
)

# Gather all source files
file(GLOB_RECURSE PROG2HW_SOURCES
    "${PROJECT_SOURCE_DIR}/src/*.cpp"
)

# Define the main executable
add_executable(${PROJECT_NAME}
    ${PROG2HW_SOURCES}
)

target_include_directories(${PROJECT_NAME}
    PRIVATE
        "${PROJECT_SOURCE_DIR}/include"
)

# Link external libraries here, e.g.:
# find_package(SomeLib REQUIRED)
# target_link_libraries(${PROJECT_NAME} PRIVATE SomeLib::SomeLib)

# Enable and add tests
enable_testing()
add_subdirectory(tests)

# Installation rules
install(TARGETS ${PROJECT_NAME}
    RUNTIME DESTINATION bin
)
