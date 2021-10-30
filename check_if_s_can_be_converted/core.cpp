#include <string>
#include <iostream>
namespace {

    bool check_if_chars_in_az_ascii(const std::string &s){
        int ascii_char = -1;
        const char *p_s = s.c_str();
        bool resp = false;
        for (int i=0;i<s.length();i++){
           ascii_char = (int)p_s[i];
           resp = (97 <= ascii_char <= 122);
           if (!resp){return resp;}
        }
        return resp;
    }

    bool check_if_s_can_be_converted_to_t_in_k_operations(const std::string& s, const std::string& t, int k){
        if ((k>100)||(k<1)){std::cout << "no" << std::endl;return false;}
        int l_min = std::min(s.length(), t.length());if(l_min<1){std::cout<<"no"<<std::endl;return false;}
        int l_max = std::max(s.length(), t.length());if(l_max>100){std::cout<<"no"<<std::endl;return false;}
        if (!check_if_chars_in_az_ascii(s)){std::cout<<"no"<<std::endl;return false;}
        if (!check_if_chars_in_az_ascii(t)){std::cout<<"no"<<std::endl;return false;}
        const char *p_s = s.c_str();
        const char *p_t = t.c_str();
        int l_similarity_now = 0;
        int l_similarity_next = 1;
        while (((l_similarity_next - l_similarity_now) == 1) && (l_similarity_next <= l_min)){
            l_similarity_now = (p_s[l_similarity_next - 1] == p_t[l_similarity_next - 1]) ? l_similarity_next : l_similarity_now;
            l_similarity_next+=1;
        }
        int n_min_remove = s.length() - l_similarity_now;
        int n_min_concat = t.length() - l_similarity_now;
        int n_min_total_mov = n_min_remove + n_min_concat;
        if (n_min_total_mov<=k){
            std::cout << "yes" << std::endl;
            return true;
        }
        else{
            std::cout << "no" << std::endl;
            return false;
        }
    }
}

