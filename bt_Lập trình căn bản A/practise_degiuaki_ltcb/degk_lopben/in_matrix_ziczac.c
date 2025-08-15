//#include <stdio.h>
//void printZigzagMatrix(int n) {
//    int matrix[n][n];
//    int i, j, count = 1;
//    // Fill the matrix with numbers from 1 to n^2
//    for(i = 0; i < n; i++) {
//        if(i % 2 == 0) { // even rows
//            for(j = 0; j < n; j++)
//                matrix[i][j] = count++;
//        }
//        else { // odd rows
//            for(j = n - 1; j >= 0; j--)
//                matrix[i][j] = count++;
//        }
//    }
//    // Print the matrix
//    printf("Zigzag Matrix of size %dx%d:\n", n, n);
//    for(i = 0; i < n; i++) {
//        for(j = 0; j < n; j++)
//            printf("%3d ", matrix[i][j]);
//        printf("\n");
//    }
//}
//int main() {
//    int n; scanf("%d", &n);
//    printZigzagMatrix(n);
//    return 0;
//}



#include <stdio.h>
int main(){
	int n; scanf("%d",&n);
	int A[n][n],i,j,c=1;
	for(i=0;i<n;i++){
		if(i%2==0){
			for(j=0;j<n;j++){
				A[i][j]=c;
				c++;
			}
		}else{
			for(j=n-1;j>=0;j--){
				A[i][j]=c;
				c++;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%3d",A[i][j]);
		}printf("\n");
	}
}
