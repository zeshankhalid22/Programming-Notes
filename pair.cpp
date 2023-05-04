#include "iostream"
#include "utility"
using namespace std;
void simple_pair(){
    // Syntax: pair<data type 1, data type 2> pair_name;
    pair<int,string> p1;
//    p1 = make_pair(5,"ABC");
    p1 = {8,"DEF"};
    p1.second = "XYZ";
    cout<<p1.first<<" "<<p1.second<<endl;
}

void pair_array(){
    pair<string,int> p_array[3];    // array pair with name,roll number
    // here two array are created (string,int). dono ma sa same index access kia jaskta with pair properly
    p_array[0] = {"Zeshan", 9230};      // {Zeshan, Sadaqat, Zubairi}
    p_array[1] = {"Sadaqat", 9223};     // {9230,   9223,    9334}
    p_array[2] = {"Zubairi", 9334};

    cout<<"Before changing:- "<<endl;
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

    swap(p_array[0],p_array[2]);    // from both arrays, 0 index will be swapped with 2nd index
    cout<<"\nAfter changing position:- "<<endl;
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
}
int main(){

//    simple_pair();
//    pair_array();



}
