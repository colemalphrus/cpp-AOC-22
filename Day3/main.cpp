#include <iostream>
#include <fstream>
#include <set>

using namespace std;
int main(){
    cout << "Day 3" << endl;
    fstream file("./Day3/data.txt");

    vector<string> lines;
    string line;
    while(getline(file, line)) {
        lines.push_back(line);
    };

    string current;
    string next;
    string  final;
    int out;
    for( size_t i = 0; i < lines.size(); i += 3) {
        current = lines[i];
        next = lines[i +1];
        final = lines[i +2];
        set<char> current_set(current.begin(), current.end());
        set<char> next_set(next.begin(), next.end());

        for(auto ch: final){
          if(current_set.find(ch) != current_set.end() && next_set.find(ch) != next_set.end()){
                if (isupper(ch)) {
                    out += static_cast<int>(ch) - 'A' + 27;
                } else {
                    out += static_cast<int>(ch) - 'a' + 1;
                };
              break;
          }
        };
    };

    cout << out << endl;

    //    string line;
//    int sum = 0;
//    while( getline(file, line) ){
//        string line1 = line.substr(0, line.length()/2);
//        string line2 = line.substr(line.length()/2);
//        set<char> characters(line1.begin(), line1.end());
//
//        for (auto ch: line2) {
//            if (characters.find(ch) != characters.end()) {
//                if (isupper(ch)) {
//                    sum += static_cast<int>(ch) - 'A' + 27;
//                } else {
//                    sum += static_cast<int>(ch) - 'a' + 1;
//                }
//                break;
//            };
//        }
//    };
//
//    while( getline(file, line) ){
//        cout << line << endl;
//    };
//
//
//    cout << sum << endl;


    return 0;
}