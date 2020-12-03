cmake_minimum_required(VERSION 3.0)

project(GTestProject    VERSION 1.0
                        DESCRIPTION "Testing GTest"
                        LANGUAGES CXX)

# Compiler flags
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Only do these if this is the main project, and not if it's included through add_subdirectory
if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)

    # Support folders in IDEs
    set_property(GLOBAL PROPERTY USE_FOLDERS ON)

    # enable testing (adds BUILD_TESTING which defaults to ON)
    include(CTest)
endif()

#set executable folder
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
# library code
add_subdirectory(src)

add_subdirectory(apps)

# add tests
if((CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME OR MODERN_CMAKE_BUILD_TESTING)
    AND BUILD_TESTING)
    add_subdirectory(tests)
endif()

