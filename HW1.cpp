#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <iterator>

using namespace std;





int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile1("Follower.txt");
    ofstream outputFile2("Followed.txt");

    string line;
    map<string, int> wordCount;
    map<string, int> Follower;
    map<string, int> Followed;

    int npos1, npos2, npos3;
    string word1, word2;
    while (getline(inputFile, line)) {

        npos1 = line.find_first_of("(");
        npos2 = line.find_first_of(",");
        npos3 = line.find_last_of(")");
        word1 = line.substr(npos1+1, npos2-1-npos1);
        word2 = line.substr(npos2+2, npos3-(npos2+2));
        Follower[word1]++;
        Followed[word2]++;
    }

    for (const auto& pair : Follower) {
        if (pair.second >= 3) {
            if (Followed[pair.first]<2{
                
            }
        }
        cout << pair.first << " : " << pair.second << endl;
    }
    
    for (const auto& pair : Follower) {
        outputFile1 << pair.first << " " << pair.second << endl;
    }
    
    for (const auto& pair : Followed) {
        outputFile2 << pair.first << " " << pair.second << endl;
    }


    inputFile.close();
    outputFile1.close();
    outputFile2.close();
    //cout << "Code Completed";
    return 0;
}