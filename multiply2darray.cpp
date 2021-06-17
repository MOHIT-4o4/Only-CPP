#include<iostream>
using namespace std;

void multiply(int matrix1[][], 
            int matrix2[][] ,
            int matrix3[][])
{
    int i ,j ,k;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            matrix3[i][j];
            for(k=0;k<N;k++)
                matrix3[i][j] += matrix1[i][k] * matrix2[k][j] ;
        }
    }
}

int main(){

    int i ,j;
    int matrix3[N][N] ; 
    int matrix1[N][N] = {
                            {1,1,1},
                            {2,2,2},
                            {3,3,3}
                        };

    int matrix2[N][N] = {
                            {1,1,1},
                            {2,2,2},
                            {3,3,3}
                        };
                        
    multiply(matrix1,matrix2,matrix3);

    cout << "Result matrix is \n";
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            cout << matrix3[i][j] << " ";
        cout << "\n";
    }
    return 0;

}