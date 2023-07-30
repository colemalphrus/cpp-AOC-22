#include <iostream>
#include <fstream>
#include <vector>


int main(){
    std::cout << "Starting Advent of code day 1" << std::endl;
    std::ifstream file("./Day1/data.txt");

    if ( !file.is_open()) {std::cout << "ERROR" << std::endl; return 1;}

    std::string line;
    int biggest = 0;
    int current = 0;
    std::vector<int> elfs;

    while( std::getline(file, line) ){
        if (line == ""){
            if(current > biggest) { biggest = current; };
            elfs.push_back(current);
            current = 0;
            continue;
        }

        int number = std::stoi(line);
        current += number;
    };

    std::sort(elfs.begin(), elfs.end(), std::greater<int>());

    std::cout << "Largest: " << biggest << std::endl;
    std::cout << "#1 Sort: " << elfs[0] << std::endl;
    std::cout << "#2 Sort: " << elfs[1] << std::endl;
    std::cout << "#3 Sort: " << elfs[3] << std::endl;
    std::cout << "top 3 t: " << (elfs[0] + elfs[2] + elfs[1]) << std::endl;


    file.close();
    return 0;
}
