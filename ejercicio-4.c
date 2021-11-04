#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int is_triangle(int a, int b, int c) {
 if(a + b >= c && b + c >= a && a + c >= b) return true;
 else return false;
}

int main(int argc, char *argv[]) {
int a = atoi(argv[1]);
int b = atoi(argv[2]);
int c = atoi(argv[3]);
printf("%d\n", is_triangle(a,b,c));
}
