#include "core.cpp"

int main(int argc, char** argv) {
    std::string s;
    std::string t;
    int k;
    std::cin>>s;
    std::cin>>t;
    std::cin>>k;
    std::cout<<ConcatRemove(s,t,k)<<std::endl;
    system("pause");
    return 0;
}
