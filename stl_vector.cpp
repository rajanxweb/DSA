#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int, int> a = {1, 2};
    cout << a.first << " "<< a.second << endl;

    pair<int , int> array[] = {{1,2}, {3,4}, {5,6}};
    cout << array[0].first<< " "<< array[1].second<< endl;

    vector<int> r;
    r.push_back(1);
    cout << r[0] << endl;
    r.emplace_back(2);
    cout << r[1]<< endl;

    vector<int> p(4, 3);
    cout <<p[3] << endl;

    vector <int> x(4);
    cout << x[0]<<endl;

    vector<int>::iterator iterate = x.begin();

    iterate++;
    cout << *(iterate)<< " ";

    iterate = iterate + 2;
    cout << *(iterate)<<" ";

    vector<int>::iterator end_check = x.end();
    end_check--;
    cout <<*(end_check)<<" ";

    cout<<x.back();

    vector <int> demo(5);
    for(int i=0; i<5; i++){
        cin>> demo[i];
    }

    for(vector <int>::iterator it = demo.begin(); it != demo.end(); it++){
        cout << *(it)<<" ";
    }
    cout <<endl;
    for(auto it = demo.begin(); it!= demo.end(); it++){
        cout << *(it)<<" ";
    }
    cout <<endl;

    demo.erase(demo.begin()+1, demo.begin()+4);
    for(auto it = demo.begin(); it!=demo.end(); it++){
        cout << *(it)<<" ";
    }
    cout<<endl;

    demo.insert(demo.begin()+1,10);
    cout <<*(demo.begin() + 1)<<endl;

    demo.insert(demo.begin()+1, 4 , 2);
    for(auto it=demo.begin(); it!=demo.end(); it++){
        cout <<*(it)<<" ";
    }
    cout << endl;

    cout << demo.size()<<endl;
    demo.pop_back();
    cout << *(demo.end()-1)<<" ";





}