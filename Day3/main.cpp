#include <iostream>
#include <fstream>
#include <set>

using namespace std;
int main(){
    cout << "Day 3" << endl;
    fstream file("./Day3/data.txt");
    string line;

    int sum = 0;
    while( getline(file, line) ){
        string line1 = line.substr(0, line.length()/2);
        string line2 = line.substr(line.length()/2);
        set<char> characters(line1.begin(), line1.end());

        for (auto ch: line2) {
            if (characters.find(ch) != characters.end()) {
                if (isupper(ch)) {
                    sum += static_cast<int>(ch) - 'A' + 27;
                } else {
                    sum += static_cast<int>(ch) - 'a' + 1;
                }
                break;
            };
        }
    };


    cout << sum << endl;


    return 0;
}