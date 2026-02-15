#include "matrix_library.h"
#include<iostream>
#include<cmath>

using std ::cout;
using std ::endl;
//const int max_size =10;
void inputmatrix1(int A[max_size][max_size], int rowA, int colA)
{
    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < colA; j++)
        {

            cin >> A[i][j];
        }
    }
}
void printmatrix1(int A[max_size][max_size], int rowA, int colA)
{
    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < colA; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
}
void inputmatrix2(int B[max_size][max_size], int rowB, int colB)
{
    for (int i = 0; i < rowB; i++)
    {
        for (int j = 0; j < colB; j++)
        {

            cin >> B[i][j];
        }
    }
}

void printmatrix2(int B[max_size][max_size], int rowB, int colB)
{
    for (int i = 0; i < rowB; i++)
    {
        for (int j = 0; j < colB; j++)
        {
            cout << B[i][j] << "\t";
        }
        cout << endl;
    }
}
void summatrix(int A[max_size][max_size], int B[max_size][max_size],int C[max_size][max_size], int rowA, int colA, int rowB, int colB)
{
    if (rowA == rowB && colA == colB)
    {
        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < colA; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
                cout << C[i][j] << "\t";
            }

            cout << endl;
        }
    }
    else
    {
        cout << "Eror:size do matrix brabar nist";
    }
}
void tafrighmatrix(int A[max_size][max_size], int B[max_size][max_size], int C[max_size][max_size], int rowA, int colA, int rowB, int colB)
{
    if (rowA == rowB && colA == colB)
    {
        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < colA; j++)
            {
                C[i][j] = B[i][j] - A[i][j];
                cout << C[i][j] << "\t";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Eror:size do matris barabar nist";
    }
}
void zarbmatrix(int A[max_size][max_size], int B[max_size][max_size], int C[max_size][max_size], int rowA, int colA,int rowB,int colB)
{
    if (colA == rowB )
    {
        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < colB; j++)
            {
                C[i][j] = 0;
                for (int k = 0; k < colA; k++)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
                cout << C[i][j] << "\t";
            }
            cout << endl;
        }
   }
    else
    {
      cout << "Eror:tol matrix A ba arze natrix B brabar nist";
    }
 }

void scalermatrix(int A[max_size][max_size], int C[max_size][max_size], int rowA, int colA, int scaler)
{
    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < colA; j++)
        {
            C[i][j] = A[i][j] * scaler;
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }
}
void tranahadematrix(int A[max_size][max_size], int C[max_size][max_size], int rowA, int colA)
{
    for (int i = 0; i < colA; i++)
    {
        for (int j = 0; j < rowA; j++)
        {
            C[i][j] = A[j][i];
            cout << C[i][j] ;
        }
        cout << endl;
    }
}
double determinanmatrix ( int A [max_size][max_size] , int rowA , int colA){
    if( rowA != colA ){
        cout<<"Error: matrix morabaii nist"<<endl;
        return 0;
    }
    double det =0; 
    if( rowA==1){
        cout<<A[0][0];
        return A[0][0];
    }
    if ( rowA == 2){

        det = ( A [0] [0] * A [1][1]) - ( A[0][1] * A[1][0]);
        cout<<"determinan 2 x 2 :"<<det <<endl;
        return (A[0][0]*A[1][1])-(A[0][1]*A[1][0]);
    }
    if ( rowA ==3 ){
           det = A[0][0] * ( A[1] [1] * A[2][2] - A[1][2] * A [2][1])-
           A[0][1]* ( A [1][0] * A[2][2] - A [1][2]* A[2][0])+
           A[0][2]*( A [1][0] * A[2][1] - A[1][1] * A[2][0]);
           cout<<"determinan 3 x 3:"<<det<<endl;
    }
    return 0;
}
void makousmatrix( int A [max_size][max_size] , int rowA , int colA){
    if( rowA != colA ){
        cout<<" Error:makous faghat braye matrix morabaii ast"<<endl;
        return;
    }
    if ( rowA ==2){
        double det = ( A[0][0] * A[1][1]) - ( A[0][1] * A[1] [0]);
        if(det ==0){
            cout<<" matrix ba det =0 makous nadarad"<<endl;
            return;
        }
        cout<<A[1][1]/ det<<"\t"<< -A[0][1]/det<<endl;
        cout<< -A[1][0]/det << "\t"<<A[0][0]/det<<endl;
    }
}   
void inputbordar1(int D[max_size], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> D[i];
    }
}
void printbordar1(int D[max_size], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << D[i];
    }
    cout << endl;
}
void inputbordar2(int G[max_size], int m)
{
    for (int i = 0; i < m; i++)
    {
        cin >> G[i];
    }
}
void printbordar2(int G[max_size], int m)
{
    for (int i = 0; i < m; i++)
    {
        cout << G[i];
    }
    cout << endl;
}
void sumbordar(int D[max_size], int G[max_size], int F[max_size], int n, int m)
{
    if (n == m)
    {
        for (int i = 0; i < n; i++)
        {
            F[i] = D[i] + G[i];
            cout << F[i];
        }
        cout << endl;
    }
    else
    {
        cout << "Eror: size do bordar brabar nist";
    }
}
void tafrighbordar(int D[max_size], int G[max_size], int F[max_size], int n, int m)
{
    if (n == m)
    {
        for (int i = 0; i < n; i++)
        {
            F[i] = D[i] - G[i];
            cout << F[i];
        }
        cout << endl;
    }
    else
    {
        cout << "Eror: size do bordar brabar nist";
    }
}
void scalerbordar(int D[max_size], int F[max_size], int n, int scaler)
{
    for (int i = 0; i < n; i++)
    {
        F[i] = D[i] * scaler;
        cout << F[i];
    }
    cout << endl;
}
void zarbdakhelibordar(int D[max_size], int G[max_size], int n, int m)
{
    int zarb=0;
    if (n == m)
    {
        for (int i = 0; i < n; i++)
        {
            zarb += D[i] * G[i];
        }
        cout<<zarb<<endl;
    }
    else
    {
        cout << "Eror: size do bordar brabar nist" << endl;
    }
}
void zarbkharejiboradr(int D[max_size], int G[max_size] , int F[max_size], int n, int m){
    if( n==3 && m==3){  
        F[0]=( D[1] * G [2]) - ( D[2] * G[1]);
        F[1]=( D[2] * G[0]) - ( D[0] * G[2]);
        F[2]= ( D[0] * G[1] ) - ( D[1] * G [0]);
        cout<< F[0]<<","<<F[1]<<","<<F[2]<<endl;
    }
    else{
        cout<< "Error: size do bordar brabar 3 nist";
    }
}
void sizebordar( int D[max_size], int n){
    int sum=0;
    for ( int  i=0 ; i< n ;i++){
        sum+=D[i]*D[i];
    }
    cout<<sqrt(sum);

    cout<<endl;
}
double normalsazibordar( int D[max_size] , int n){
    double sum=0;
    for( int i=0 ; i<n ;i++){
        sum=D[i]*D[i];
    }
    double tool=sqrt(sum);
    if(tool==0){
        cout<<"Eror:nemishe normalsazi anjam dad"<<endl;
        return n;
    }
    for( int i=0 ; i<n ;i++){
        D[i]=D[i]/tool;
        cout<<D[i];
    }
    return n;
    
}