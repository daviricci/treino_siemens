#include <iostream>
#include "core.h"
int main() {
    std::string s;
    std::cin>>s;
    std::cout << core::CalculatesStringLength(s)<<std::endl;
    system("pause");
    return 0;
}
