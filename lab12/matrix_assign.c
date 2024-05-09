#include <stdio.h>
#include <stdlib.h>
struct Matrix {
    int rows; // number of rows
    int cols; // number of columns
    double** data; // a pointer to an array of n_rows pointers to rows
};
typedef struct Matrix Matrix;

void print_matrix(Matrix* m) {
    printf("Matrix:\n");
    for(int x = 0; x < m->rows; x++) {
        for(int y = 0; y < m->cols; y++) {
            printf("%.1f ", m->data[x][y]);
        }
        printf("\n");
    }
}

Matrix* make_matrix(int n_rows, int n_cols) {
    Matrix *matrix=(Matrix*)malloc(sizeof(Matrix));
    matrix->rows = n_rows;
    matrix->cols = n_cols;
    matrix->data = (double**)malloc(sizeof(double*) * n_rows);
    for(int x = 0; x < n_rows; x++){
        matrix->data[x] = (double*)calloc(n_cols, sizeof(double));
    }
    return matrix;
}

Matrix* copy_matrix(double* data, int n_rows, int n_cols) {
    Matrix *matrix = make_matrix(n_rows, n_cols);
    for(int x = 0; x < n_rows; x++) {
        for(int y = 0; y < n_cols; y++) {
            matrix->data[x][y] = data[n_cols*x+y];
        }
    }
    return matrix;
}
int get_matrix(Matrix* matrix) {
    printf("Enter the matrix elements %dx%d",matrix->rows,matrix->cols);
    printf("\n");
    if(matrix!=NULL){
        for(int x = 0; x < matrix->rows; x++) {
            for(int y = 0; y < matrix->cols; y++) {
                double a;
                scanf("%lf",&a);
                matrix->data[x][y]=a;
            }
        }
    }
    else
        return 1;

    return 0;
}
Matrix* add_two_matrix(Matrix* a, Matrix* b){
//2 матрицийн нэмэх үйлдлийг хийх функцийг хэрэгжүүлэх. Ингэхдээ шинэ матриц үүсгээд түүндээ хариуг оноон, уг матрицийн хаягаа буцаана.
    Matrix* result = make_matrix(a->rows, a->cols); // Шинэ матриц үүсгэх
    // үүсгэсэн матрицдаа 2 матрицаа нэмсэн хариугаа оруулах
    for (int i = 0; i < a->rows; i++) {
        for (int j = 0; j < a->cols; j++) {
            result->data[i][j] = a->data[i][j] + b->data[i][j];
        }
    }
    // хариуг оруулсан матрицынхаа хаягийг буцаах
    return result;    

printf("1:add\n");
}
Matrix* sub_two_matrix(Matrix* a, Matrix* b){
//2 матрицийн хасах үйлдлийг хийх функцийг хэрэгжүүлэх. Ингэхдээ шинэ матриц үүсгээд түүндээ хариуг оноон, уг матрицийн хаягаа буцаана.
    // Шинэ матриц үүсгэх
    Matrix* result = make_matrix(a->rows, a->cols);
    // үүсгэсэн матрицдаа 2 матрицаа хассан хариугаа оруулах
    for (int i = 0; i < a->rows; i++) {
        for (int j = 0; j < a->cols; j++) {
            result->data[i][j] = a->data[i][j] - b->data[i][j];
        }
    }
    // хариуг оруулсан матрицынхаа хаягийг буцаах
    return result;
printf("2:sub\n");
}
Matrix* mul_two_matrix(Matrix* a, Matrix* b){
//2 матрицийн үржих үйлдлийг хийх функцийг хэрэгжүүлэх. Ингэхдээ шинэ матриц үүсгээд түүндээ хариуг оноон, уг матрицийн хаягаа буцаана.
    // Шинэ матриц үүсгэх
    Matrix* result = make_matrix(a->rows, b->cols);
    // үүсгэсэн матрицдаа 2 матрицаа үржүүлсэн хариугаа оруулах
    for (int i = 0; i < a->rows; i++) {
        for (int j = 0; j < b->cols; j++) {
            result->data[i][j] = 0;
            for (int k = 0; k < a->cols; k++) {
                result->data[i][j] += a->data[i][k] * b->data[k][j];
            }
        }
    }
    // хариуг оруулсан матрицынхаа хаягийг буцаах
    return result;
printf("3:mul\n");
}
void delete_matrix(Matrix* m){
//энэ функцийг хэрэгжүүлэх, тухайн матрицийн нөөцөлсөн санах ойнуудыг чөлөөлөх
    for (int i = 0; i < m->rows; i++) {
        free(m->data[i]);
    }
    free(m->data);
    free(m);

  }
int main(void) {

    Matrix* r1; // Хариу хадгалах матриц
    Matrix* m1 = make_matrix(2, 2);
    get_matrix(m1); // Матрицыг үүсгээд, утгуудыг авах
    Matrix* m2 = make_matrix(2, 2);
    get_matrix(m2); // Матрицыг үүсгээд, утгуудыг авах
    print_matrix(m1); // Матрицыг хэвлэх
    print_matrix(m2); // Матрицыг хэвлэх

    Matrix* (*pf)(Matrix* a, Matrix* b);
    // pf матрицын заагчийг зарлах

  int c=1;
  // оруулсан утга 1,2,3 аас ялгаатай үед зогсох
  while(c!=0){
      printf("1:add, 2:sub, 3:mul, 4: exit\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1: pf=add_two_matrix; break;
            case 2: pf=sub_two_matrix; break;
            case 3: pf=mul_two_matrix; break;
            default: return 0;
        }
    r1 = pf(m1,m2);
    print_matrix(r1);
  }
  // Матрицуудыг устгах
    delete_matrix(m1);
    delete_matrix(m2);
    delete_matrix(r1);

    return 0;
}
