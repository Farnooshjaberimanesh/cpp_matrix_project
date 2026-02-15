#ifndef MATRIX_LIBRARY_H
#define MATRIX_LIBRARY_H
using namespace std;
/*matrix*/
const int max_size=10;
void inputmatrix1(int A[max_size][max_size], int rowA , int colA);
void printmatrix1(int A[max_size][max_size] , int rowA , int colA);
void inputmatrix2(int B[max_size][max_size] , int rowB , int colB);
void printmatrix2(int B[max_size][max_size] , int rowB , int colB);
void summatrix(int A[max_size][max_size] , int B[max_size][max_size], int C[max_size][max_size], int rowA,int colA , int rowB, int colB);
void tafrighmatrix(int A[max_size][max_size] , int B[max_size][max_size] ,int C[max_size][max_size] , int rowA, int colA , int rowB, int colB);
void zarbmatrix(int A[max_size][max_size] , int B[max_size][max_size] ,int C[max_size][max_size] , int rowA, int colA , int rowB, int colB);
void scalermatrix(int A[max_size][max_size] ,int C[max_size][max_size] , int rowA, int colA, int scaler);
void tranahadematrix(int A[max_size][max_size]  ,int C[max_size][max_size] , int rowA, int colA);
double  determinanmatrix(int A[max_size][max_size] , int rowA , int colA);
void makousmatrix(int A[max_size][max_size] , int rowA , int colA);
/*bordar*/
void inputbordar1(int D[max_size] ,int n);
void printbordar1(int D[max_size] ,int n);
void inputbordar2(int G[max_size] ,int m);
void printbordar2(int G[max_size] ,int m);
void sumbordar(int D[max_size],int G[max_size],int F[max_size],int n , int m );
void tafrighbordar(int D[max_size],int G[max_size],int F[max_size],int n , int m );
void scalerbordar(int D[max_size],int F[max_size],int n , int scaler );
void zarbdakhelibordar(int D[max_size],int G[max_size],int F[max_size],int n , int m );
void zarbkharejiboradr(int D[max_size],int G[max_size],int F[max_size],int n , int m );
void sizebordar(int D[max_size], int n);
double normalsazibordar(int D[max_size], int n);
#endif














