#include <bits/stdc++.h>

using namespace std;

/*check special roman case eg IX IV etc and 
also convert the special roman case to its int value*/
bool checkCase(string s, int &sum, int &i){
    if(s[i] == 'I' && s[i + 1] == 'V'){
        sum += 4;
        i += 1;
        return true;
    }
    if(s[i] == 'I' && s[i + 1] == 'X'){
        sum += 9;
        i += 1;
        return true;
    }
    if(s[i] == 'X' && s[i + 1] == 'L'){
        sum += 40;
        i += 1;
        return true;
    }
    if(s[i] == 'X' && s[i + 1] == 'C'){
        sum += 90;
        i += 1;
        return true;
    }
    if(s[i] == 'C' && s[i + 1] == 'D'){
        sum += 400;
        i += 1;
        return true;
    }
    if(s[i] == 'C' && s[i + 1] == 'M'){
        sum += 900;
        i += 1;
        return true;
    }
    return false;
}

//check roman case and convert roman char to its int value
void checkRoman(char &c, int &sum){
    int j;
    char roman[] = {'I','V','X','L','C','D','M'};
    int val[] = {1,5,10,50,100,500,1000};

    for(j = 0; j < 7; j++){
        if(c == roman[j]){
            sum += val[j];
            return;
        }
    }
}

int romanToInt(string s){
    int len = s.length(), i;

    int sum = 0;
    for(i = 0; i < len; i++){
        if(checkCase(s, sum, i)) continue;
        checkRoman(s[i], sum);
    }
    return sum;
}

int main(){
    cout << romanToInt("MCMXCIV");
    return 0;
}
