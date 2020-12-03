#include <math.h>
#include <tst/function_to_test.hpp>

double squareRoot(const double a){
    double b = sqrt(a);
    if (b != b)
        return 1.0;
    else
        return b;
}

std::string hejFunction(const std::string a){
    return "Hej " + a + "!";
}
