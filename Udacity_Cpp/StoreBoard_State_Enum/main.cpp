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

// declare enum class called State to store two values
// State - custom type
enum class State {kEmpty, kObstacle};

// function with a return type of vector<State> and takes 1 string argument
// const reference to avoid copy of line on each invocation
vector<State> ParseLine(const string& line) {
    // create an input string stream called sline from line
    istringstream sline(line);
    int n;
    char c;
    vector<State> row{};
    // process stream while we can and the value of c is a comma
    while (sline >> n >> c && c == ',') {
        if (n == 0) {
            // add respective state to our vector
            row.push_back(State::kEmpty);
        } else {
            row.push_back(State::kObstacle);
        }
    }
    return row;
}

// function that returns a vector containing vectors of type State and accepts
// a single argument of type string
vector<vector<State>> ReadBoardFile(const string& path) {
    ifstream myfile (path);
    vector<vector<State>> board{};
    if (myfile) {
        string line;
        while (getline(myfile, line)) {
            vector<State> row = ParseLine(line);
            board.push_back(row);
        }
    }
    return board;
}

string CellString(State cell) {
    switch(cell) {
        case State::kObstacle: return "⛰️^   ";
        default: return "0   ";
    }
}

void PrintBoard(const vector<vector<State>>& board) {
    for (const auto & i : board) {
        for (auto j : i) {
            cout << CellString(j);
        }
        cout << "\n";
    }
}

int main() {
    auto board = ReadBoardFile("1.board");
    PrintBoard(board);
}
