//
//  Solution.cpp
//  datastruct
//
//  Created by xijia dai on 2019/12/9.
//  Copyright © 2019 daixijia. All rights reserved.
//

#include "Solution.hpp"

#include <string>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <unordered_set>
#include <iostream>

using namespace std;

 /**
  有效的括号 bool isValid(string s)
  
给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。

有效字符串需满足：

左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。
注意空字符串可被认为是有效字符串。

示例 1:

输入: "()"
输出: true
示例 2:

输入: "()[]{}"
输出: true
示例 3:

输入: "(]"
输出: false
示例 4:

输入: "([)]"
输出: false
示例 5:

输入: "{[]}"
输出: true
*/

/**
 每日温度 vector<int> dailyTemperatures(vector<int>& vect)
 
 根据每日 气温 列表，请重新生成一个列表，对应位置的输入是你需要再等待多久温度才会升高超过该日的天数。如果之后都不会升高，请在该位置用 0 来代替。

 例如，给定一个列表 temperatures = [73, 74, 75, 71, 69, 72, 76, 73]，你的输出应该是 [1, 1, 4, 2, 1, 1, 0, 0]。

 提示：气温 列表长度的范围是 [1, 30000]。每个气温的值的均为华氏度，都是在 [30, 100] 范围内的整数。
 */

/**
 翻转二叉树 TreeNode* invertTree(TreeNode* root)
 
 翻转一棵二叉树。

 示例：

 输入：

      4
    /   \
   2     7
  / \   / \
 1   3 6   9
 输出：

      4
    /   \
   7     2
  / \   / \
 9   6 3   1
 备注:
 这个问题是受到 Max Howell 的 原问题 启发的 ：

 谷歌：我们90％的工程师使用您编写的软件(Homebrew)，但是您却无法在面试时在白板上写出翻转二叉树这道题，这太糟糕了。
 */
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

/**
 逆波兰表达式求值 int evalRPN(vector<string>& tokens)
 
 根据逆波兰表示法，求表达式的值。

 有效的运算符包括 +, -, *, / 。每个运算对象可以是整数，也可以是另一个逆波兰表达式。

 说明：

 整数除法只保留整数部分。
 给定逆波兰表达式总是有效的。换句话说，表达式总会得出有效数值且不存在除数为 0 的情况。
 示例 1：

 输入: ["2", "1", "+", "3", "*"]
 输出: 9
 解释: ((2 + 1) * 3) = 9
 示例 2：

 输入: ["4", "13", "5", "/", "+"]
 输出: 6
 解释: (4 + (13 / 5)) = 6
 示例 3：

 输入: ["10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"]
 输出: 22
 解释:
   ((10 * (6 / ((9 + 3) * -11))) + 17) + 5
 = ((10 * (6 / (12 * -11))) + 17) + 5
 = ((10 * (6 / -132)) + 17) + 5
 = ((10 * 0) + 17) + 5
 = (0 + 17) + 5
 = 17 + 5
 = 22
 */

/**
丑数 int nthUglyNumber(int n)

编写一个程序，找出第 n 个丑数。

丑数就是只包含质因数 2, 3, 5 的正整数。

示例:

输入: n = 10
输出: 12
解释: 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15 是前 10 个丑数。
说明:

1 是丑数。
n 不超过1690
*/

/**
给表达式添加运算符 vector<string> addOperators(string num, int target)

给定一个仅包含数字 0-9 的字符串和一个目标值，在数字之间添加二元运算符（不是一元）+、- 或 * ，返回所有能够得到目标值的表达式。

示例 1:

输入: num = "123", target = 6
输出: ["1+2+3", "1*2*3"]
示例 2:

输入: num = "232", target = 8
输出: ["2*3+2", "2+3*2"]
示例 3:

输入: num = "105", target = 5
输出: ["1*0+5","10-5"]
示例 4:

输入: num = "00", target = 0
输出: ["0+0", "0-0", "0*0"]
示例 5:

输入: num = "3456237490", target = 9191
输出: []
*/

/**
 岛屿数量 int numIslands(vector<vector<char>>& grid)
 
 给定一个由 '1'（陆地）和 '0'（水）组成的的二维网格，计算岛屿的数量。一个岛被水包围，并且它是通过水平方向或垂直方向上相邻的陆地连接而成的。你可以假设网格的四个边均被水包围。

 示例 1:

 输入:
 11110
 11010
 11000
 00000

 输出: 1
 示例 2:

 输入:
 11000
 11000
 00100
 00011

 输出: 3
 */

/**
 打开转盘锁 int openLock(vector<string>& deadends, string target)
 
 你有一个带有四个圆形拨轮的转盘锁。每个拨轮都有10个数字： '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' 。每个拨轮可以自由旋转：例如把 '9' 变为  '0'，'0' 变为 '9' 。每次旋转都只能旋转一个拨轮的一位数字。

 锁的初始数字为 '0000' ，一个代表四个拨轮的数字的字符串。

 列表 deadends 包含了一组死亡数字，一旦拨轮的数字和列表里的任何一个元素相同，这个锁将会被永久锁定，无法再被旋转。

 字符串 target 代表可以解锁的数字，你需要给出最小的旋转次数，如果无论如何不能解锁，返回 -1。

  

 示例 1:

 输入：deadends = ["0201","0101","0102","1212","2002"], target = "0202"
 输出：6
 解释：
 可能的移动序列为 "0000" -> "1000" -> "1100" -> "1200" -> "1201" -> "1202" -> "0202"。
 注意 "0000" -> "0001" -> "0002" -> "0102" -> "0202" 这样的序列是不能解锁的，
 因为当拨动到 "0102" 时这个锁就会被锁定。
 示例 2:

 输入: deadends = ["8888"], target = "0009"
 输出：1
 解释：
 把最后一位反向旋转一次即可 "0000" -> "0009"。
 示例 3:

 输入: deadends = ["8887","8889","8878","8898","8788","8988","7888","9888"], target = "8888"
 输出：-1
 解释：
 无法旋转到目标数字且不被锁定。
 示例 4:

 输入: deadends = ["0000"], target = "8888"
 输出：-1
  

 提示：

 死亡列表 deadends 的长度范围为 [1, 500]。
 目标数字 target 不会在 deadends 之中。
 每个 deadends 和 target 中的字符串的数字会在 10,000 个可能的情况 '0000' 到 '9999' 中产生。
 */

/**
 完全平方数 int numSquares(int n)
 
 给定正整数 n，找到若干个完全平方数（比如 1, 4, 9, 16, ...）使得它们的和等于 n。你需要让组成和的完全平方数的个数最少。

 示例 1:

 输入: n = 12
 输出: 3
 解释: 12 = 4 + 4 + 4.
 示例 2:

 输入: n = 13
 输出: 2
 解释: 13 = 4 + 9.
 */

int numSquares(int n) {
    queue<int> q;
    set<int> s;
    int count = 0;
    q.push(n);
    s.insert(n);
    while (!q.empty()) {
        int size = (int)q.size();
        count ++;
        for (int i = 0; i < size; i ++) {
            int value = q.front();
            int inital = sqrt(value);
            q.pop();
            // 添加所有小于队列的值的数据
            for (int i = 1; i <= inital; i ++) {
                int v = value - i * i;
                // 终止条件
                if (v == 0) {
                    cout<<i<<endl;
                    return count;
                }
                else {
                    // 如果不在队列里面，push 进去
                    if (s.find(v) == s.end()) {
                        s.insert(v);
                        q.push(v);
                    }
                }
            }
        }
    }
    return -1;
}

int openLock(vector<string>& deadends, string target) {
    string inital = "0000";
    queue<string> qu;
    unordered_set<string> seen;
    for (int i = 0; i < deadends.size(); i ++) {
        seen.insert(deadends[i]);
    }
    if (seen.find(inital) != seen.end()) {
        return -1;
    }
    qu.push(inital);
    seen.insert(inital);
    int step = 0;
    while (!qu.empty()) {
        int size = (int)qu.size();
        for (int i = 0; i < size; i ++) {
            string value = qu.front();
            qu.pop();
            if (value == target) {
                return step;
            }
            else {
                for (int j = 0; j < value.size(); j ++) {
                    string s1 = value;
                    string s2 = value;
                    s1[j] = s1[j] == '9' ? '0' : s1[j] + 1;
                    s2[j] = s2[j] == '0' ? '9' : s2[j] - 1;
                    if (seen.find(s1) == seen.end()) {
                        seen.insert(s1);
                        qu.push(s1);
                    }
                    if (seen.find(s2) == seen.end()) {
                        seen.insert(s2);
                        qu.push(s2);
                    }
                    cout<<s1<<" temp "<<s2<<endl;
                }
            }
        }
        step ++;
    }
    return -1;
}

struct DoubleIndex {
    int x;
    int y;
    DoubleIndex(int x, int y) : x(x), y(y) {}
};

// grid[y][x]
int numIslands(vector<vector<char>>& grid) {
    if (grid.empty()) {
        return -1;
    }
    int count = 0;
    int row = (int)grid.size();
    int colum = (int)grid[0].size();
    for (int y = 0; y < row; y ++) {
        for (int x = 0; x < colum; x ++) {
            if (grid[y][x] == '0') {
                continue;
            }
            count ++;
            queue<DoubleIndex> que;
            DoubleIndex index = DoubleIndex(x, y);
            que.push(index);
            while (!que.empty()) {
                DoubleIndex index = que.front();
                que.pop();
                if (index.x - 1 >= 0 && grid[index.y][index.x - 1] == '1') {
                    que.push(DoubleIndex(index.x - 1, index.y));
                    grid[index.y][index.x - 1] = '0';
                }
                if (index.x + 1 < colum && grid[index.y][index.x + 1] == '1') {
                    que.push(DoubleIndex(index.x + 1, index.y));
                    grid[index.y][index.x + 1] = '0';
                }
               if (index.y - 1 >= 0 && grid[index.y - 1][index.x] == '1') {
                    que.push(DoubleIndex(index.x, index.y - 1));
                    grid[index.y - 1][index.x] = '0';
                }
                if (index.y + 1 < row  && grid[index.y + 1][index.x] == '1') {
                    que.push(DoubleIndex(index.x, index.y + 1));
                    grid[index.y + 1][index.x] = '0';
                }
            }
        }
    }
    return count;
}

//注：mult表示的上一步的操作数
void backtrack(string num,int target,int index,long val,long mult,vector<string>& result,string& track)
{
    if(index==num.size())
    {
        if(val==target)result.push_back(track);
        return;
    }
    int len = (int)track.size();
    for (int i = index; i < num.length(); i++)
    {
        //转换数字
        string sVal = num.substr(index, i - index + 1);
        long n = stol(sVal);
        //第一个数字，不需要加符号
        if (index == 0) {
            track += sVal;
            backtrack(num,target,i+1,n,n,result,track);
            track.resize(len);
        } else {
            // +
            track += "+" + sVal;
            backtrack(num,target,i+1,val+n,n,result,track);
            track.resize(len);
            // -
            track += "-" + sVal;
            backtrack(num,target,i+1,val-n,-n,result,track);
            track.resize(len);
            // *
            track += "*" + sVal;
            //由于乘法的优先级比加、减法高，所以需要回退到上一步，即把上一步的操作数与乘法进行运算
            //比如2+3*2，我们在3后面添加*，然而*的优先级高，所以val(5)-mult(3)返回上一步，然后2+3*2=8
            backtrack(num,target,i+1,val-mult+mult*n,mult*n,result,track);
            track.resize(len);
        }
        // 忽视首位为0的数据
        if (n==0) {
            return;
        }
    }
}

vector<string> addOperators2(string num, int target) {
           vector<string> result;
           string track="";
           backtrack(num,target,0,0,1,result,track);
           return result;
       }

vector<string> possibleNumber(string num) {
    vector<string> poss;
    string value = num.substr(0, 1);
    poss.push_back(value);
    for (int i = 1; i < num.length(); i ++) {
        vector<string> append;
        for (int j = 0; j < poss.size(); j ++) {
            string prev = poss[j];
            poss[j] = prev + num[i];
            append.push_back(prev + " " + num[i]);
        }
        for (int j = 0; j < append.size(); j ++) {
            poss.push_back(append[j]);
        }
    }
//    for (int i = 0; i < poss.size(); i ++ ) {
//        cout<<"all possible : "<<poss[i]<<endl;
//    }
    return poss;
 }


vector<string> valueWithString(string num, int target) {
    //cout<<"valueWithString "<<num<<endl;
    vector<long long int> res;
    vector<string> stringres;
    vector<string> op = {"*", "+", "-"};
    bool find = true;
    while (find) {
        size_t i = num.find(" ");
        if (i > 0 && i < num.length() - 1) {
            string substr = num.substr(0, i);
            try {
                int value = stoi(substr);
                num = num.substr(i + 1, num.length() - i);
                res.push_back(value);
                stringres.push_back(substr);
            } catch (...) {
                
            }
        }
        else {
            try {
                int value = stoi(num);
                res.push_back(value);
                stringres.push_back(num);
            } catch (...) {
                
            }
            find = false;
        }
    }
    if (res.size() <= 1) {
        try {
            if (stoi(num) == target) {
                return {num};
            }
        } catch (...) {
            
        }
        return vector<string>();
    }
    vector<long long int> result = {res[0]};
    string first = to_string(res[0]);
    vector<string> myString = {first};
    vector<string> ops = {"*"};
    vector<string> finally;

    for (int i = 1; i < res.size(); i ++) {
        vector<long long int> tempResult;
        vector<string> tempOps;
        for (int j = 0; j < result.size(); j ++) {
            long long int lastResult = result[j];
            string lastString = myString[j];
            // 对于新建一个乘法运算
            // 上一个是 * 直接扔进去，更新字符串数组和运算符
            if (ops[j] == "*") {
                try {
                    result[j] = res[i] * lastResult;
                } catch (...) {
                    
                }
            }
            // 上一个是 + -，回退一步，然后计算
            else {
                if (ops[j] == "+") {
                    try {
                        result[j] = lastResult - res[i - 1];
                        result[j] = result[j] + res[i] * res[i - 1];
                    } catch (...) {
                        
                    }
                }
                else {
                    try {
                        result[j] = lastResult + res[i - 1];
                        result[j] = lastResult - res[i] * res[i - 1];
                    } catch (...) {
                        
                    }
                }
            }
            ops[j] = "*";
            myString[j] = lastString + "*" + stringres[i];
            // 对于新建一个+ - 运算，直接计算，push 到新栈里面
            try {
                long long int value1 = lastResult + res[i];
                long long int value2 = lastResult - res[i];
                tempResult.push_back(value1);
                tempOps.push_back("+");
                myString.push_back(lastString + "+" + stringres[i]);
                tempResult.push_back(value2);
                tempOps.push_back("-");
                myString.push_back(lastString + "-" + stringres[i]);
            } catch (...) {
                
            }
        }
        for (int k = 0; k < tempResult.size(); k ++) {
            result.push_back(tempResult[k]);
            ops.push_back(tempOps[k]);
        }
    }
    for (int i = 0; i < result.size(); i ++) {
        //cout<<"expression : "<<myString[i]<<" = "<<result[i]<<endl;
        if (result[i] == target) {
            finally.push_back(myString[i]);
        }
    }
    return finally;
}

vector<string> addOperators(string num, int target) {
    vector<string> vec = possibleNumber(num);
    vector<string> result;
    for (int i = (int)vec.size() - 1; i >= 0; i --) {
        string res = vec[i];
        vector<string> temp = valueWithString(res, target);
        for (int i = 0; i < temp.size(); i ++) {
            result.push_back(temp[i]);
        }
   }
//    for (int i = 0; i < result.size(); i ++) {
//        cout<<"finally value "<<result[i]<<endl;
//    }
    return result;
}


int nthUglyNumber(int n) {
    vector<int> muti = {2,3,5};
    vector<int> res = {1};
    vector<int> temp = {0, 0, 0};
    for (int i = 0; i < n - 1; i ++) {
        int value1 = res[temp[0]] * muti[0];
        int value2 = res[temp[1]] * muti[1];
        int value3 = res[temp[2]] * muti[2];
        int value = min(value1, min(value2, value3));
        if (value == value1) {
            temp[0] ++;
        }
        if (value == value2) {
            temp[1] ++;
        }
        if (value == value3) {
            temp[2] ++;
        }
        res.push_back(value);
    }
    return res[n - 1];
}
    
    int evalRPN(vector<string>& tokens) {
        string operators[] = {"+", "-", "*", "/"};
        set<string> myset(operators, operators+4);
        stack<int> s;

        int a;
        int b;
        for (auto it = tokens.begin(); it != tokens.end(); it++) {
            if (myset.count(*it) == 0) {
                s.push(stoi(*it));
            }
            else {
                a = s.top();
                s.pop();
                b = s.top();
                s.pop();
                if (*it == "+") {
                    s.push(b + a);
                }
                else if (*it == "-"){
                    s.push(b - a);
                }
                else if (*it == "*") {
                    s.push(b * a);
                }
                else if (*it == "/") {
                    s.push(b / a);
                }
            }
        }
        return s.top();
    }
    
    TreeNode* invertTree(TreeNode* root) {
        if(!root) {
            return NULL;
        }
        TreeNode *left = invertTree(root->right);
        TreeNode *right = invertTree(root->left);
        root->left = left;
        root->right = right;
        return root;
    }
    
    vector<int> dailyTemperatures(vector<int>& vect) {
        vector<int> *result = new vector<int>(vect.size(), 0);
        stack<int> *st = new stack<int>();
        for (int i = 0; i < vect.size(); i ++) {
            while(!st->empty() && vect[st->top()] < vect[i]) {
                result->at(st->top()) =i - st->top();
                st->pop();
            }
            st->push(i);
        }
        return *result;
    }
    
     bool isValid(string s) {
        stack<char> *st = new stack<char>();
        for (int i = 0; i < s.length(); i ++) {
            if (s[i] == '[' || s[i] == '(' || s[i] == '{') {
                st->push(s[i]);
            }
            else if (s[i] == ']' || s[i] == '}') {
                if(st->empty()) {
                    return false;
                }
                char top = st->top();
                if (top == s[i] - 2) {
                    st->pop();
                }
                else {
                    return false;
                }
            }
            else if(s[i] == ')') {
                if(st->empty()) {
                    return false;
                }
                char top = st->top();
                if (top == s[i] - 1) {
                    st->pop();
                }
                else {
                    return false;
                }
            }
            else {
                return false;
            }
        }
        return st->empty();
    }

void Solution::run() {
    cout<<numSquares(13)<<endl;
}
