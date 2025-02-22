int my_array[] = {1,23,17,4,-5,100};
int *ptr;

int main(void) {
    int i;
    ptr = my_array; // point our pointer to the first element of the array
    printf("\n\n");
    for (i = 0; i < 6; i++) {
        printf("mr_array[%d] = %d ", i, my_array[i]); // <-- A
        printf("ptr + %d = %d\n",i, *(++ptr)); //<-- b
    }
    printf("cool");
    return 0;
}