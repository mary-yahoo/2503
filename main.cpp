#include <iostream>
#include<math.h>
void massive(int i, int a[]){
    for(int k=0; k<i; k++){
        a[k]=rand()%101;
        printf("%d; ", a[k]);
    }
    int min=0;
    int l=i;
    for(int j=0;j<l;j++) {
        for (int k = 1; k < i; k++) {
            if (a[k - 1] > a[k]) {
                min = a[k];
                a[k] = a[k - 1];
                a[k - 1] = min;
            }
        }
        i--;
    }
    printf("\n");
    for(int z=0; z<l; z++)
        printf("%d ;", a[z]);
}

int main() {
    int i;
    printf("Введите число элементов массива: ");
    scanf("%d", &i);
    int a[i];
    srand(time(NULL));
    //for(int k=0; k<i; k++){
      //  a[k]=rand()%101;
       // printf("%d; ", a[k]);
    //}
    massive(i,a);
    return 0;
}