#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string x = s.substr(0,2);
    char c = s[8]; 
            
    if(c == 'A' && x== "12"){
        x = "00";
    }
    if(c == 'P' && x!="12"){
        x=to_string(stoi(x)+12);
    }
    return x+s.substr(2,6);

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
 
