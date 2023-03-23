#include "stdio.h"
#include "stdlib.h"

int main(){
    int n;
    // Get the number of elements for the array
    printf("Enter the number of Elements: ");
    scanf("%d",&n);

    // Dynamically allocate memory using malloc()
    int *ptr = (int*)malloc(n*sizeof(int));

    // if OS doesn't find enough memory, it returns a NULL pointer
    if(ptr==NULL){
        printf("Memory is not allocated!");
        exit(0);
    }
    else{
        printf("Memory Successfully allocated\ninput Elements:\n");
        for(int i=0;i<n/2;i++){
            scanf("%d",&ptr[i]);
        }
        printf("Printing Elements: ");
        for(int i=0;i<n;i++){
            printf("%d ",ptr[i]);
        }

    }

    free(ptr); // free up the memory space



}
