#include "iostream"
using namespace std;

void MultiPointer(){
            int x=5;
    int *p1=&x; // Single pointer to integer x
    int **p2=&p1; // double pointer to pointer p1
    int ***p3=&p2; // triple pointer to pinter p2

    cout<<"p1 Address: "<<p1<<" Value: "<<*p1<<endl;
    cout<<"p2 Address: "<<p2<<" Value: "<<*p2<<endl;
    cout<<"p3 Address: "<<p3<<" Value: "<<*p3<<endl;
};
void oneDimensionalArray(){
    int arr[]={2,3,5,6};
    int *p=arr;     // pointer to Array
    cout<<"Base Address: (arr,p) "<<arr<<" "<<p<<endl;      // it will print base address

    // Print ith Address
    // arr + i: Base Address + index(to be pointed)
    cout<<"3rd Index value: "<<arr+3<<endl;

    // Print ith Value
    //  *(arr+i): arr(base address), i(how many'th index), *(dereference to that address and print value)
    cout<<"2nd Index Value: "<<*(arr+2)<<endl;      // Similar to *arr[i]*
}
void twoDimensionalArray(){
    int twoD[2][3]={1,2,3,6,7};
    int (*p)[3] = twoD;       // pointer to Two Dimensional Array

    // Base Addresses:
    // (p) will give you memory Address of the 1st row
    // (*p) or twoD[0] give you first row of 3 integers, means print base address
    cout<<"Base Address: p *p twoD = "<<*p<<endl;

    // *p+1 or twoD[0][1] Array indexing operation. give very Next element's index
    cout<<"*p+1 twoD[0][1]= "<<*p+1<<endl;

    // (p+1) or &twoD[1] pointer to arithmetic operation. gives (Base Address + 1:Next row)
    cout<<"p+1, next row address: "<<p+1<<endl; // We are moving to Next Array

    // *(p+1) or twoD[1] or twoD[1]   return integer pointer to the first integer]
    cout<<"*(p+1) twoD[1] twoD[1] = "<<*(p+1)<<endl;

    // *(p+1) +2, adding 2 will give very next 2 address
    // suppose *(p+1) = 112, *(p+1) + 2 = 120
    cout<<"*(p+1) towD[1][2]= "<<*(p+1)<<endl;

    // *(*p+1)
    // *p+1 return pointer to 2nd index integer, while *(*p+1) will Dereference it
    cout<<"*(*p+1) twoD[0][1] = "<<*(*p+1)<<endl;
}
int main(){
    // ** Uncomment and run **
//  MultiPointer();   // single, double, triple pointer
//  oneDimensionalArray();    // pointer approaches at 1D array
  twoDimensionalArray();    // pointer approaches at 2D array

}
