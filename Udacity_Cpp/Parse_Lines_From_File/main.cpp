#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::cout;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;

/*
vector<int> ParseLine(const string& s) {
    // create an input string stream from s
    istringstream my_stream(s);
    int n;
    char c;
    vector<int> numbers;

    // keep streaming until we are done with stream
    while (my_stream) {
        // stream the int to n and the char ',' to c
        my_stream >> n >> c;
        // if the stream was successful add n to our vector
        if (my_stream) {
            numbers.push_back(n);
        }
    }
    return numbers;
}
*/

vector<int> ParseLine(const string& s) {
    // create an input string stream from s
    istringstream my_stream(s);
    int n;
    char c;
    vector<int> numbers;

    // keep streaming until we are done with stream
    while (my_stream >> n >> c && c == ',') {
        numbers.push_back(n);
    }
    return numbers;
}

vector<vector<int>> ReadBoardFile(const string& path) {
    ifstream myfile (path);
    vector<vector<int>> board;
    if (myfile) {
        string line;
        while (getline(myfile, line)) {
            board.push_back(ParseLine(line));
        }
    }
    return board;
}

[[maybe_unused]] void PrintBoard(const vector<vector<int>>& board) {
    for (const auto & i : board) {
        for (int j : i) {
            cout << j;
        }
        cout << "\n";
    }
}

int main() {
    vector<vector<int>> board = ReadBoardFile("1.board");
    PrintBoard(board);
}