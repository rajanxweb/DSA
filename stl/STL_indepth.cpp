#include <iostream>
#include <vector>
using namespace std;

int main(){

    //pairs

    pair<int, int> p = {1,3};
    cout<<p.first<<endl;


    //STL containers

    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    for(int val : vec){
        cout<<val<<" ";
    }
    cout<<endl;
    vec.pop_back();
    vec.at(3);
    for(int val : vec){
        cout<<val<<" ";       
    }
    cout<<endl;
    
    cout<<"front: "<<vec.front()<<endl;
    cout<<"back: "<<vec.back()<<endl;
    vector<int> v(5, -5);
    for(int val : v){
        cout<<val<<" ";
    }
    cout<<endl;

    vector<int> vec1={1,2,3,4,5};

    vector<int> vec2(vec1);
    for(int val : vec2){
        cout<<val<<" ";
    }
    cout<<endl;
    vec2.erase(vec2.begin() + 3);
    for(int val : vec2){
        cout<<val<<" ";
    }
    cout<<endl;
    vec1.insert(vec1.begin()+2, 500);
    for(int val: vec1){
        cout<<val<<" ";
    }
    cout<<endl;
    // vec1.clear();
    // for(int val: vec1){
    //     cout<<val<<" ";
    // }
    // cout<<endl;
    // cout<<vec1.empty()<<endl;

    //STL iterators

    vector<int>::iterator it;
    for(it=vec1.begin(); it!= vec1.end(); it++){
        cout<< *it<<" ";
    }
    cout<<endl;

    for(auto it = vec1.rbegin(); it!=vec1.rend(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    
}