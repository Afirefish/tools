//
//  MinStack.cpp
//  datastruct
//
//  Created by xijia dai on 2019/12/9.
//  Copyright © 2019 daixijia. All rights reserved.
//

#include "MinStack.hpp"

#include <stdio.h>

using namespace std;

/**
 最小栈
 
设计一个支持 push，pop，top 操作，并能在常数时间内检索到最小元素的栈。

push(x) -- 将元素 x 推入栈中。
pop() -- 删除栈顶的元素。
top() -- 获取栈顶元素。
getMin() -- 检索栈中的最小元素。
示例:

MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin();   --> 返回 -3.
minStack.pop();
minStack.top();      --> 返回 0.
minStack.getMin();   --> 返回 -2.
*/

class MinStack {
private:
    int maxSize;
    int topIndex;
    int *arr;
    int min;
    int *minArr;
public:
    /** initialize your data structure here. */
    MinStack() {
        maxSize = 10;
        topIndex = -1;
        arr = new int[maxSize];
        minArr = new int[maxSize];
    }
    
    void push(int x) {
        if(topIndex == maxSize - 1) {
            int *newArr = new int[maxSize * 2];
            for(int i = 0; i < maxSize; i ++) {
                newArr[i] = arr[i];
            }
            delete [] arr;
            arr = newArr;
            int *newMinArr = new int[maxSize * 2];
            for(int i = 0; i < maxSize; i ++) {
                newMinArr[i] = minArr[i];
            }
            delete [] minArr;
            minArr = newMinArr;
            maxSize *= 2;
        }
        if(topIndex == -1) {
            arr[++ topIndex] = x;
            minArr[topIndex] = topIndex;
        }
        else if(arr[minArr[topIndex]] > x) {
            arr[++ topIndex] = x;
            minArr[topIndex] = topIndex;
        }
        else {
            minArr[topIndex + 1] = minArr[topIndex];
            arr[++ topIndex] = x;
        }
    }
    
    void pop() {
        if(topIndex == -1) {
            return;
        }
        topIndex --;
    }
    
    int top() {
        if(topIndex == -1) {
            return NULL;
        }
        return arr[topIndex];
    }
    
    int getMin() {
        if(topIndex == -1) {
            return NULL;
        }
        return arr[minArr[topIndex]];
    }
};

