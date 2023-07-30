#include <iostream>
#include <fstream>
#include <string>


int main(){
    std::cout << "Starting Advent of code day 1" << std::endl;
    std::ifstream file("./Day1/data.txt");

    if( file.is_open() ){
        std::string line;
        int biggest = 0;
        int current = 0;
        while( std::getline(file, line) ){
            if (line == ""){
                if(current > biggest) { biggest = current; };
                current = 0;
                continue;
            }

            int number = std::stoi(line);
            current += number;
        };

        std::cout << "Count: " << biggest << std::endl;
    } else {
        std::cout << "ERROR" << std::endl;
        return 1;
    };

    file.close();
    return 0;
}
