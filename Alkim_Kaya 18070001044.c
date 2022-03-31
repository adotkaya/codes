#include <stdio.h>
#define size 10


int atm (int value, int arr[]){

    for(int i=0; i<size; i++){
            printf("\n%d - %d = ", value, arr[i]);
            value = value - arr[i];
            printf("%d \n", value);
        if(value==0){
            printf("************************ \n");
            printf("You successfully withdraw all your coins!!\n");
            printf("Now you are broke!\n");
            break;
        }
    }
}                // O(n)

int sortarr(int arr[]){

    int i, j, a;

    for (i = 0; i < size; ++i)                             // O(n)
    {
        for (j = i + 1; j < size; ++j)                     // O(n)
        {
            if (arr[i] < arr[j])
            {
                a =  arr[i];
                arr[i] = arr[j];    // Sort array descending order, run size times
                arr[j] = a;
            }
        }
    }
    for (i = 0; i < size; ++i) {
        printf("%d, ", arr[i]); // print coins, run 'size' times   O(n)
    }
} //                       O(n'2)

int main() {

    int coinarr[size] = {10,23,16,15,35,21,40,14,6,20};
    int value = 200;

    printf("Your value is %d \n",value);
    printf("You have %d coins\n", size);

    sortarr(coinarr);   // O(n'2 + n)
    atm(value, coinarr); // O(n)

}
