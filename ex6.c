#include <stdio.h>

int Nchoosek(int n, int k) {
	// if (k == 0 || k == n) {
	// 	return 1;
	// }
     NchooseK(n, 0) = 1
     NchooseK(n, n) = 1
	return Nchoosek(n-1, k-1) + Nchoosek(n-1, k);
}

int main() {
	int n, k, nCk;
		printf("Enter two integers (for n and k) separated by space:\n");
		scanf("%d%d", &n, &k);
        if (n == 0 && k == 0){
            break;
        } else {
            nCk = Nchoosek(n, k);
            printf("%d\n", nCk);
        }

}