//
// Created by steve on 18-8-12.
//

#include <string>
#include <stack>
#include <iostream>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if (s.length() == 0) { return true; }
        if (s.length() % 2 == 1) return false;
        else {
            stack<char> stk;
            for (int i = 0; i < s.length(); ++i) {
                if (s[i] == '(' || s[i] == '[' || s[i] == '{') stk.push(s[i]);
                else{
                    char temp = s[i];
                    if (stk.empty()) return false;
                    switch (temp){
                        case '}':
                            if (stk.top() == '{') stk.pop();
                            else return false;
                            break;
                        case ']':
                            if (stk.top() == '[') stk.pop();
                            else return false;
                            break;
                        case ')':
                            if (stk.top() == '(') stk.pop();
                            else return false;
                            break;
                    }
                }
            }
            return stk.empty();
        }
    }
};

int main(){
    Solution solution;
    string str = "){";
    cout << solution.isValid(str) << endl;
    return 0;
}