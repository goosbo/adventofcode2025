#include <bits/stdc++.h>

using namespace std;
int main(){
    string inp = "19391-47353,9354357-9434558,4646427538-4646497433,273-830,612658-674925,6639011-6699773,4426384-4463095,527495356-527575097,22323258-22422396,412175-431622,492524-611114,77-122,992964846-993029776,165081-338962,925961-994113,7967153617-7967231799,71518058-71542434,64164836-64292066,4495586-4655083,2-17,432139-454960,4645-14066,6073872-6232058,9999984021-10000017929,704216-909374,48425929-48543963,52767-94156,26-76,1252-3919,123-228";
    vector <string> ranges;
    stringstream check(inp);
    string range;
    while(getline(check,range,',')) ranges.push_back(range);
    long sum = 0;
    for(auto r:ranges){
        int idx = r.find("-");
        string start = r.substr(0,idx),end = r.substr(idx+1);
        int startlen = start.length(), endlen = end.length();
        if(start.length()%2 && end.length()%2)continue;
        if(start.length() %2 != 0)start = "1"+string(startlen++,'0');

        long long int prefix = stoll(start.substr(0,startlen/2)),startint = stoll(start),endint = stoll(end);
        long long int val;
        while((val = stol(to_string(prefix)+to_string(prefix))) <= endint){ 
            if(val >= startint)sum += val;
            prefix++;
        }

    }
    cout<<sum<<'\n';
    return 0;
}