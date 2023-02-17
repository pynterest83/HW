#include <iostream>

using namespace std;

int **make_matrix(int n){
    int **matrix = new int*[n];
    for (int i=0; i<n; i++){
        matrix[i]=new int[n];
    }
    
    // base case: nếu n=1 thì chỉ có 1 ô đen
    if (n==1){
        matrix[0][0]=1;
        return matrix;
    }

    // tạo matrix con độ lớn 1/2
    int **sub_matrix = make_matrix(n/2);

    // gán mỗi ma trận con cho 3 phần ở góc ma trận chính
    for (int i=0; i<n/2; i++){
        for (int j=0; j<n/2; j++){
            matrix[i][j] = sub_matrix[i][j];
            matrix[i][j+n/2] = sub_matrix[i][j];
            matrix[i+n/2][j] = sub_matrix[i][j];
            matrix[i+n/2][j+n/2] = -sub_matrix[i][j];
        }
    }

    return matrix;
}

void print(int **matrix, int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (matrix[i][j]==1) cout << "*";
            else if (matrix[i][j]==-1) cout << ".";
            cout << " "; 
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    
    int **main_matrix = new int*[n];
    for (int i=0; i<n; i++){
        main_matrix[i]=new int[n];
    }

    main_matrix = make_matrix(n);

    print(main_matrix, n);

    return 0;
}