/* Complete the function void update(int *a,int *b). It receives two integer pointers, 
int* a and int* b. Set the value of  to their sum, and  to their absolute difference. 
There is no return value, and no return statement is needed.*/

#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function 
    int temp; 
    temp=*a;
    *a=*a+*b;
    *b=(temp-*b)<0?(temp-*b)*(-1):(temp-*b);


}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
