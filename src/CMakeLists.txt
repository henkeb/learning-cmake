# Headers are optional, does not affect add_library, but they will not
# show up in IDEs unless they are listed in add_library

set(HEADER_LIST "${GTestProject_SOURCE_DIR}/include/tst/function_to_test.hpp")

# Make an automatic library - will be static or dynamic based on user setting
add_library(test_functions function_to_test.cpp ${HEADER_LIST})

# We need this dir, and users of our lib will need it too
target_include_directories(test_functions PUBLIC ../include)

# if we have dependencies e.g. boost
# target_link_libraries(test_functions PRIVATE Boost::boost

# ALL users of this lib will need at least C++14
target_compile_features(test_functions PUBLIC cxx_std_14)

#IDEs should put the headers in a nice place
source_group(
    TREE "${PROJECT_SOURCE_DIR}/include"
    PREFIX "Header Files"
    FILES ${HEADER_LIST}
)
