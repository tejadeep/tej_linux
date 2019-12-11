#include<stdio.h>

int minOfCTilln_index(int n, int *C, int m) {
int min = 0, index = 0, i;
min = *((C+m*100000)+0);
for (i=1; i<n; i++) {
if (*((C+m*100000)+i)<min) {
min = *((C+m*100000)+i);
index = i;
}
}
//printf("index: %d\nn: %d\nmin: %d\n", index, n, min);
return index;
}

unsigned long int addCost(int index, int previousIndex, int *C, int *L, unsigned long int Cost, int m){
int o, c;
c = *((C + m*100000) + index);
for (o=index; o<previousIndex; o++) {
//printf("costbefore: %lu \t1: %d\t2: %d", Cost, c, *((L+m*100000)+o));
Cost += c * (*((L+m*100000)+o));
//printf("\t%d\t%lu\n", o, Cost);
}
//printf("cost: %lu\n", Cost);
return Cost;
}

int main() {

int T=0;

scanf("%d", &T);

int N[T], C[T][100000], L[T][100000], i, m;

for (m=0; m<T; m++) {
scanf("%d", &N[m]);
for (i=0; i<N[m]; i++) {
scanf("%d", &C[m][i]);
}
for (i=0; i<N[m]; i++) {
scanf("%d", &L[m][i]);
}
}
for (m=0; m<T; m++) {
unsigned long int cost[T];
int j = 0, k = 0;
cost[m] = 0;
j = minOfCTilln_index(N[m], &C[0][0], m);
cost[m] = addCost(j, N[m], &C[0][0], &L[0][0], cost[m], m);
while (j != 0) {
k = minOfCTilln_index(j, &C[0][0], m);
//printf("before: %lu\n", cost[m]);
cost[m] = addCost(k, j, &C[0][0], &L[0][0], cost[m], m);
//printf("after: %lu\t", cost[m]);
j = k;
}
printf("%lu\n", cost[m]);
}
return 0;
}
