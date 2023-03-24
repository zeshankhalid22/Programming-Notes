#include "iostream"
using namespace std;

// *** Memory Structure of Dynamic Allocation **
// when we want to use an Array Dynamically, it will be stored in HEAP, while a pointer to that Array is stored in STACK.

void oneDArray(){
    // dynamically allocating an integer array
    int* arr = new int[5];

    // input array elements
    cout<<"Enter Array Elements: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    cout<<"\nArray Elements are: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    delete [] arr;  // deallocating array

    // as memory is deleted, pointer is pointing to some Garbage values.
    cout << "\nGarbage array values after deallocation of array memory: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
}
void twoDArray(){
    int row=3,col=4,c=0;

    // arr** is pointing to a Pointer Array, which will be Pointing to each Row in 2D Array
    int **arr= new int*[row];  // arr** is stored in Stack


    for(int i=0;i<row;i++){
        arr[i] = new int[col];
    }

    // Assigning Values to Array
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {

            arr[i][j] = ++c;
        }
    }

    cout<<"\noutput:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // Deallocating Memory
    for(int i=0;i<row;i++){
            delete[] arr[i];     // deallocate the memory for the i-th row of the array
    }
    delete [] arr;   // Deallocating Array of integer pointers


}
int main(){

//    oneDArray();
    twoDArray();
}
