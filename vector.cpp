#include <iostream>
#include <vector>
using namespace std;


void printVec(vector<int>&vec){
    cout<<"vector size: "<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<"["<<i<<"]: "<<vec[i]<<endl;
    }
    cout<<endl;
}
void simpleVector(){
    vector<int> vec;
    vec.push_back(4); // [0]
    vec.push_back(3); // [1]
    vec.push_back(7); // [2]
    vec[3]=11;        // [3]
    vec[4]=12;        // gone out of bound, as [] bracket will not increase vector size
    vec[5]=13;
    vec.push_back(5); // [4]
    vec.push_back(7); // [5]

    vec.resize(2);  // first 2 elements will remain till index [1]
    vec.push_back(10);      // [2]

    vec.insert(vec.begin()+2,25);    // vec.begin() will give pointer to first element,
    // +2 mean 2nd index pointer, add value 25 here [2]=25
    // after index[2] all values will be moved after 1 index

    printVec(vec);  // function to print vector values

//    vec.pop_back(); // will remove last element
//    vec.erase(3);   // .erase(position), .begin() + index, 0+3 index will be removed
}
int main() {

    simpleVector();



    return 0;
}
