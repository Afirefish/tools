//
//  MyCircularQueue.cpp
//  datastruct
//
//  Created by xijia dai on 2019/12/9.
//  Copyright © 2019 daixijia. All rights reserved.
//

#include "MyCircularQueue.hpp"

/**
 设计循环队列
 
 设计你的循环队列实现。 循环队列是一种线性数据结构，其操作表现基于 FIFO（先进先出）原则并且队尾被连接在队首之后以形成一个循环。它也被称为“环形缓冲器”。

 循环队列的一个好处是我们可以利用这个队列之前用过的空间。在一个普通队列里，一旦一个队列满了，我们就不能插入下一个元素，即使在队列前面仍有空间。但是使用循环队列，我们能使用这些空间去存储新的值。

 你的实现应该支持如下操作：

 MyCircularQueue(k): 构造器，设置队列长度为 k 。
 Front: 从队首获取元素。如果队列为空，返回 -1 。
 Rear: 获取队尾元素。如果队列为空，返回 -1 。
 enQueue(value): 向循环队列插入一个元素。如果成功插入则返回真。
 deQueue(): 从循环队列中删除一个元素。如果成功删除则返回真。
 isEmpty(): 检查循环队列是否为空。
 isFull(): 检查循环队列是否已满。

 */

class MyCircularQueue {
    private:
    int maxSize;
    int front;
    int rear;
    int *queue;
public:
    /** Initialize your data structure here. Set the size of the queue to be k. */
    MyCircularQueue(int k) {
        maxSize = k + 1;
        queue = new int[maxSize];
        front = rear = 0;
    }
    
    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value) {
        if((rear + 1) % maxSize == front) {
            return false;
        }
        queue[rear] = value;
        rear = (rear + 1)%maxSize;
        return true;
    }
    
    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue() {
        if(front == rear) {
            return false;
        }
        front = (front + 1)%maxSize;
        return true;
    }
    
    /** Get the front item from the queue. */
    int Front() {
        if(front == rear) {
            return -1;
        }
        return queue[front];
    }
    
    /** Get the last item from the queue. */
    int Rear() {
        if(front == rear) {
            return -1;
        }
        if(rear == 0) {
            return queue[maxSize - 1];
        }
        return queue[rear-1];
    }
    
    /** Checks whether the circular queue is empty or not. */
    bool isEmpty() {
        return front == rear;
    }
    
    /** Checks whether the circular queue is full or not. */
    bool isFull() {
        return ((rear + 1)% maxSize == front);
    }
};
