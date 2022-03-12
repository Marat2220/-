#include <iostream>
#include <vector>
#include <string>

using namespace std;
setlocale (LC_ALL, "Rus")
int crambo(string s1, string s2){
    int min_legth = min(s1.size(), s2.size());
    for(int i = 0; i < min_legth; i++){
        if(s1[s1.size() - i - 1] != s2[s2.size() - i - 1])
            return i;
    }
    return min_legth;
}
int main()
{
    int size;
    cin >> size;

    vector<string> v;
    while(size--){
        string temp;
        cin >> temp;
        v.push_back(temp);     }

    int biggest = 0;
    for(int i = 0; i < v.size(); i++)
        for(int j = i + 1; j < v.size(); j++){
            int size = crambo(v[i], v[j]);
            if(biggest < size)
                biggest = size;
        }

    cout << biggest;

    return 0;
}
