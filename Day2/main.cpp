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

char resp(char a, char b){
    std::unordered_map<char, char> loose_to = {
            {'B', 'A'},
            {'C', 'B'},
            {'A', 'C'},
    };
    std::unordered_map<char, char> beat = {
            {'A', 'B'},
            {'B', 'C'},
            {'C', 'A'},
    };

    switch (b) {
        case 'X':
            return loose_to[a];
        case 'Z':
            return beat[a];
        default:
            return a;
    }
}

int score(char a, char b){
    std::unordered_map<char, int> conversion = {
            {'A', 1},
            {'B', 2},
            {'C', 3},
    };
    std::unordered_map<char, int> outcome = {
            {'X', 0},
            {'Y', 3},
            {'Z', 6},
    };
    return outcome[b] + conversion[resp(a, b)];
};

int main(){
    std::cout << "Day 2" << std::endl;
    std::ifstream file("./Day2/data.txt");

    if ( !file.is_open() ){ return 1;};

    std::string line;
    int summation = 0;
    while( std::getline(file, line) ) {
        int s = score(line[0], line[2]);
        summation += s;
    };

    std::cout << summation << std::endl;

    return 0;
}
