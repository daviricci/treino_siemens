#include <string>
#include <iostream>
namespace {
    void print_one_hundred_s1(){
        std::string values[101];
        for (int i = 0; i <= 100; ++i) {values[i] = std::to_string(i);}
        for (int i = 1;i<=33;i++){values[i*3] = "Foo";}
        for (int i=1;i<=20;i++){values[i*5] = "Baa";}
        for (int i=1;i<=6;i++){values[i*15] = "FooBaa";}
        for (int i = 0; i <= 101; ++i) {std::cout<<values[i]<<std::endl;}
    }
}

