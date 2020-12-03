# gtest needs to be compiled with the target computers compiler (for deps)
# So i've done cmake /usr/src/gtest, make in project/ExternalLibs/gTest folder
set(GTEST_ROOT ${CMAKE_SOURCE_DIR}/ExternalLibs/gTest)

# load paths to GTest
find_package(GTest REQUIRED)

# Add the executable
add_executable(testFunc func_test.cpp)

# Make sure that we use a certain c++ version (14 in this case)
target_compile_features(testFunc PRIVATE cxx_std_14)

# Link libraries to the executable, test_function which contains the function-
# anlity + gtest deps
target_link_libraries(testFunc PRIVATE test_functions GTest::GTest GTest::Main)
