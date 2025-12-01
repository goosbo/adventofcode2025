#include <bits/stdc++.h>

using namespace std;

int mod100(int v){
    if(v > 99)return v%100;
    if(v<0)return 100+(v%100);
    return v%100;
}

int main(){
    string line;
    ifstream file("input.txt");
    int val = 50, mod = 100,count = 0;
    while(getline(file,line)){
        if(line[0] == 'L'){
            int r = stoi(line.substr(1));
            count += r/100;
            r %= 100;
            if(val < r&&val!=0)count++;
            val = mod100(val-r);
        }
        else {
            int r = stoi(line.substr(1));
            count += r/100;
            r %=100;
            if(100-val < r&&val!=0)count++;
            val = mod100(val+r);
        }
        if(val == 0)count++;
    }
    cout<<count<<'\n';
    return 0;
}