#include <iostream>
#include <fstream>
#include <unordered_map>



int win(char a, char b){
    std::unordered_map<char, char> conversion = {
            {'X', 'A'},
            {'Y', 'B'},
            {'Z', 'C'},
    };
    std::unordered_map<char, char> wins = {
            {'B', 'A'},
            {'C', 'B'},
            {'A', 'C'},
    };

    if( a == conversion[b] ){return 3;};
    if( a == wins[conversion[b]] ){return 6;};

    return 0;
}

int score(char a, char b){
    std::unordered_map<char, int> conversion = {
            {'X', 1},
            {'Y', 2},
            {'Z', 3},
    };
    return win(a, b) + conversion[b];
}

int main(){
    std::cout << "Day 2" << std::endl;
    std::ifstream file("./Day2/data.txt");

    if ( !file.is_open() ){ return 1;};

    std::string line;
    int summation = 0;
    while( std::getline(file, line) ) {
        int s = score(line[0], line[2]);
//        std::cout << s << std::endl;
        summation += s;
    };

    std::cout << summation << std::endl;

    return 0;
}
