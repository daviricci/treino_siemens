#include "core.cpp"

int main(int argc, char** argv) {
    std::string s;
    std::string t;
    int k;
    std::cin>>s;
    std::cin>>t;
    std::cin>>k;
    check_if_s_can_be_converted_to_t_in_k_operations(s,t,k);
    system("pause");
    return 0;
}
