#include <bits/stdc++.h>

using namespace std;
int main(){
    string line;
    ifstream file("input.txt");
    int val = 50, mod = 100,count = 0;
    while(getline(file,line)){
        if(line[0] == 'L') val = (val-stoi(line.substr(1)))%100;
        else val = (val+stoi(line.substr(1)))%100;
        if(val == 0)count++;
    }
    cout<<count<<'\n';
    return 0;
}