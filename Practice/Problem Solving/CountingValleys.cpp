#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int elevation = 0;
    int result = 0;
    int l = s.size();
    for(int i=0;i<l;i++){
        int flag = 0;
        if(elevation == -1)
            flag = 1;
        if(s[i]=='D')
            elevation -= 1;
        else elevation += 1;
        if(elevation == 0 && flag == 1)
            result += 1;
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
