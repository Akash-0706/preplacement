// repetition not allowed

#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string input_str = "ABCD";
    int n = input_str.length();

    std::vector<std::string> permutations;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                for (int k = 0; k < n; ++k) {
                    if (k != i && k != j) {
                        for (int l = 0; l < n; ++l) {
                            if (l != i && l != j && l != k) {
                                std::string permutation = "";
                                permutation += input_str[i];
                                permutation += input_str[j];
                                permutation += input_str[k];
                                permutation += input_str[l];
                                permutations.push_back(permutation);
                            }
                        }
                    }
                }
            }
        }
    }
    

    for (const std::string& perm : permutations) {
        std::cout << perm << std::endl;
    }

    return 0;
}

// repetition  allowed

#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string input_str = "ABCD";
    int n = input_str.length();

    std::vector<std::string> permutations;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
             for (int k = 0; k < n; ++k) {
                 for (int l = 0; l < n; ++l) {
                    std::string permutation = "";
                    permutation += input_str[i];
                    permutation += input_str[j];
                    permutation += input_str[k];
                    permutation += input_str[l];
                    permutations.push_back(permutation);
                 }
            }
        }
    }

    for (const std::string& perm : permutations) {
        std::cout << perm << std::endl;
    }

    return 0;
}

// repetition not  allowed
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string input_str = "ABCD";
    int n = input_str.length();

    std::vector<std::string> permutations;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
             for (int k = 0; k < n; ++k) {
                
                    std::string permutation = "";
                    permutation += input_str[i];
                    permutation += input_str[j];
                    permutation += input_str[k];
                    permutation += input_str[6-i-j-k];
                    permutations.push_back(permutation);
                 
            }
        }
    }

    for (const std::string& perm : permutations) {
        std::cout << perm << std::endl;
    }

    
