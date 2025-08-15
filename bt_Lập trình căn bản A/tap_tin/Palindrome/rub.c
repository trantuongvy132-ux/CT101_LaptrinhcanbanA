#include <stdio.h>
#include <stdlib.h>

// Improved by passing output file path as parameter
void check(int A[], int n, const char* outputPath) {
    FILE *f = fopen(outputPath, "w");
    int i;
    for (i = 0; i < n / 2; i++) {
        if (A[i] != A[n - 1 - i]) {
            fputs("NO", f);
            fclose(f);
            return; // Use return instead of exit to allow for graceful exit and cleanup
        }
    }
    fputs("YES", f);
    fclose(f);
}

// Utilizes the input and output paths passed as arguments
void checkPalindrome(const char* inputPath, const char* outputPath) {
    FILE *f = fopen(inputPath, "r");
    int n; // Read the number of elements
    fscanf(f, "%d", &n);
    int A[n],i;
    for (i = 0; i < n; i++) {
        fscanf(f, "%d", &A[i]);
    }
    fclose(f);
    check(A, n, outputPath);
}

int main() {
    //checkPalindrome()
	char *sInput="sInput.txt";
	char *sOutput="sOutput.txt";
	checkPalindrome(sInput,sOutput);
	//
	FILE *f;
	f=fopen("sOutput.txt","r");
	char data[10];
	if(!f){
		perror("Error operating file");
	}
	//
	if(fgets(data,sizeof(data),f)!=NULL){
		puts(data);
	}else{
		printf("There's no data at all");
	}
	fclose(f);
	return 0;
}
