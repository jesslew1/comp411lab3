#include <stdio.h>

int Nchoosek(int n, int k) {
    if (k == n || k == 0) {
		return 1;
	}
	return Nchoosek(n-1, k-1) + Nchoosek(n-1, k);
}

int main() {
	int n, k, nCk;
    while(1){
        printf("Enter two integers (for n and k) separated by space:\n");
		scanf("%d%d", &n, &k);
            if (n == 0 && k == 0){
                printf("1\n");
                break;
            } else {
                nCk = Nchoosek(n, k);
                printf("%d\n", nCk);
            }

    }
}