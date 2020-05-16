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
using std::abs;

enum class State { kEmpty, kObstacle, kClosed };


vector<State> ParseLine(string line) {
    istringstream sline(line);
    int n;
    char c;
    vector<State> row;
    while (sline >> n >> c && c == ',') {
        if (n == 0) {
            row.push_back(State::kEmpty);
        }
        else {
            row.push_back(State::kObstacle);
        }
    }
    return row;
}


vector<vector<State>> ReadBoardFile(string path) {
    ifstream myfile(path);
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

bool Compare(vector<int> node1, vector<int> node2) {
    // node = x, y, g, h
    return (node1[2] + node1[3] > node2[2] + node2[3]);
}


// Calculate the manhattan distance
int Heuristic(int x1, int y1, int x2, int y2) {
    return abs(x2 - x1) + abs(y2 - y1);
}


/**
 * Add a node to the open list and mark it as open.
 */
void AddToOpen(int x, int y, int g, int h, vector<vector<int>>& openlist, vector<vector<State>>& grid) {
    // Add node to open vector, and mark grid cell as closed.
    openlist.push_back(vector<int>{x, y, g, h});
    grid[x][y] = State::kClosed;
}


/**
 * Implementation of A* search algorithm
 */
vector<vector<State>> Search(vector<vector<State>> grid, int init[2], int goal[2]) {
    // Create the vector of open nodes.
    vector<vector<int>> open{};

    // Initialize the starting node.
    int x = init[0];
    int y = init[1];
    int g = 0;
    int h = Heuristic(x, y, goal[0], goal[1]);
    AddToOpen(x, y, g, h, open, grid);

    cout << "No path found!" << "\n";
    return std::vector<vector<State>>{};
}

string CellString(State cell) {
    switch (cell) {
    case State::kObstacle: return "^   ";
    default: return "0   ";
    }
}


void PrintBoard(const vector<vector<State>> board) {
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            cout << CellString(board[i][j]);
        }
        cout << "\n";
    }
}

void PrintVector(vector<int> v) {
    cout << "{ ";
    for (auto item : v) {
        cout << item << " ";
    }
    cout << "}" << "\n";
}

void PrintVectorOfVectors(vector<vector<int>> v) {
    for (auto row : v) {
        cout << "{ ";
        for (auto col : row) {
            cout << col << " ";
        }
        cout << "}" << "\n";
    }
}

void PrintVectorOfVectors(vector<vector<State>> v) {
    for (auto row : v) {
        cout << "{ ";
        for (auto col : row) {
            cout << CellString(col) << " ";
        }
        cout << "}" << "\n";
    }
}

void TestHeuristic() {
    cout << "----------------------------------------------------------" << "\n";
    cout << "Heuristic Function Test: ";
    if (Heuristic(1, 2, 3, 4) != 4) {
        cout << "failed" << "\n";
        cout << "\n" << "Heuristic(1, 2, 3, 4) = " << Heuristic(1, 2, 3, 4) << "\n";
        cout << "Correct result: 4" << "\n";
        cout << "\n";
    }
    else if (Heuristic(2, -1, 4, -7) != 8) {
        cout << "TestHeuristic Failed" << "\n";
        cout << "\n" << "Heuristic(2, -1, 4, -7) = " << Heuristic(2, -1, 4, -7) << "\n";
        cout << "Correct result: 8" << "\n";
        cout << "\n";
    }
    else {
        cout << "passed" << "\n";
    }
    return;
}

void TestAddToOpen() {
    cout << "----------------------------------------------------------" << "\n";
    cout << "AddToOpen Function Test: ";
    int x = 3;
    int y = 0;
    int g = 5;
    int h = 7;
    vector<vector<int>> open{ {0, 0, 2, 9}, {1, 0, 2, 2}, {2, 0, 2, 4} };
    vector<vector<int>> solution_open = open;
    solution_open.push_back(vector<int>{3, 0, 5, 7});
    vector<vector<State>> grid{ {State::kClosed, State::kObstacle, State::kEmpty, State::kEmpty, State::kEmpty, State::kEmpty},
                              {State::kClosed, State::kObstacle, State::kEmpty, State::kEmpty, State::kEmpty, State::kEmpty},
                              {State::kClosed, State::kObstacle, State::kEmpty, State::kEmpty, State::kEmpty, State::kEmpty},
                              {State::kEmpty, State::kObstacle, State::kEmpty, State::kEmpty, State::kEmpty, State::kEmpty},
                              {State::kEmpty, State::kEmpty, State::kEmpty, State::kEmpty, State::kObstacle, State::kEmpty} };
    vector<vector<State>> solution_grid = grid;
    solution_grid[3][0] = State::kClosed;
    AddToOpen(x, y, g, h, open, grid);
    if (open != solution_open) {
        cout << "failed" << "\n";
        cout << "\n";
        cout << "Your open list is: " << "\n";
        PrintVectorOfVectors(open);
        cout << "Solution open list is: " << "\n";
        PrintVectorOfVectors(solution_open);
        cout << "\n";
    }
    else if (grid != solution_grid) {
        cout << "failed" << "\n";
        cout << "\n";
        cout << "Your grid is: " << "\n";
        PrintVectorOfVectors(grid);
        cout << "\n";
        cout << "Solution grid is: " << "\n";
        PrintVectorOfVectors(solution_grid);
        cout << "\n";
    }
    else {
        cout << "passed" << "\n";
    }
    return;
}

void TestCompare() {
    cout << "----------------------------------------------------------" << "\n";
    cout << "Compare Function Test: ";
    vector<int> test_1{ 1, 2, 5, 6 };
    vector<int> test_2{ 1, 3, 5, 7 };
    vector<int> test_3{ 1, 2, 5, 8 };
    vector<int> test_4{ 1, 3, 5, 7 };
    if (Compare(test_1, test_2)) {
        cout << "failed" << "\n";
        cout << "\n" << "a = ";
        PrintVector(test_1);
        cout << "b = ";
        PrintVector(test_2);
        cout << "Compare(a, b): " << Compare(test_1, test_2) << "\n";
        cout << "Correct answer: 0" << "\n";
        cout << "\n";
    }
    else if (!Compare(test_3, test_4)) {
        cout << "failed" << "\n";
        cout << "\n" << "a = ";
        PrintVector(test_3);
        cout << "b = ";
        PrintVector(test_4);
        cout << "Compare(a, b): " << Compare(test_3, test_4) << "\n";
        cout << "Correct answer: 1" << "\n";
        cout << "\n";
    }
    else {
        cout << "passed" << "\n";
    }
    cout << "----------------------------------------------------------" << "\n";
    return;
}

int main() {
    int init[2]{ 0, 0 };
    int goal[2]{ 4, 5 };
    auto board = ReadBoardFile("1.board");
    auto solution = Search(board, init, goal);
    PrintBoard(solution);
    // Tests
    TestHeuristic();
    TestAddToOpen();
    TestCompare();
}