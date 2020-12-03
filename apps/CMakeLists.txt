# Add executable for the app source code
add_executable(app app.cpp)

# Use certain compiler flags/options
target_compile_features(app PRIVATE cxx_std_14)

# Link dependencies to the executable, in this case the test_function library
target_link_libraries(app PRIVATE test_functions)
