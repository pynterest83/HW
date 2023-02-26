#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <ctime>

using namespace std;

void update(vector<vector<char>>& board, int row, int col){
    for (int i=0; i < board.size(); i++){
        for (int j=0; j < board[0].size(); j++){
            if (i==row && j==col){
                if (board[i][j]=='*'){
                    board[i][j]='X';
                    print_board(board);
                    break;
                }
                else {
                    cout << count_mines(board, row, col);
                }
            }
        cout << endl;
        }
    }
}

void print_board(vector<vector<char>>& board) {
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[0].size(); j++) {
            cout << board[i][j];
        }
        cout << endl;
    }
}

// Hàm tạo bản đồ mìn
void create_mines(vector<vector<char>>& board, int num_mines) {
    int rows = board.size();
    int cols = board[0].size();
    srand(time(NULL));
    int count = 0;
    while (count < num_mines) {
        int row = rand() % rows;
        int col = rand() % cols;
        if (board[row][col] != '*') {
            board[row][col] = '*';
            count++;
        }
    }
}

// check vị trí được nhập vào
bool is_valid(int row, int col, int rows, int cols) {
    return row >= 0 && row < rows && col >= 0 && col < cols;
}

// Hàm đếm số mìn xung quanh một ô
int count_mines(vector<vector<char>>& board, int row, int col) {
    int count = 0;
    int rows = board.size();
    int cols = board[0].size();
    for (int i = row - 1; i <= row + 1; i++) {
        for (int j = col - 1; j <= col + 1; j++) {
            if (is_valid(i, j, rows, cols) && board[i][j] == '*') {
                count++;
            }
        }
    }
    return count;
}

int main(){
    int m, n, K;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;
    cout << "Enter the number of mines: ";
    cin >> K;
    vector<vector<char>> board(m, vector<char>(n, '-'));
    create_mines(board, K);
    vector<vector<bool>> opened(m, vector<bool>(n, false));

    int num_opened = 0;
    int max_num_opened = m * n - K;

    while (num_opened < max_num_opened) {
        int row, col;
        cout << "Enter a row and column: ";
        cin >> row >> col;
        if (is_valid(row, col, m, n) && !opened[row][col]) {
            num_opened++;
            opened[row][col]==1;
        } else {
            cout << "Invalid input, try again." << endl;
        }
        
        update(board, row, col);
    }

    cout << "YOU WIN!" << endl;
    return 0;
}