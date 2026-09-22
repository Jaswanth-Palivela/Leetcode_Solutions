class MyCircularDeque {
    vector<int> dq;
    int front,rear,k;
public:
    MyCircularDeque(int k):dq(k),front(-1),rear(-1),k(k){}
    
    bool insertFront(int value) {
        if(isFull())return false;
        if(isEmpty()){front=rear=0;}
        else if(front==0)front=k-1;
        else front--;
        dq[front]=value;
        return true;
    }
    
    bool insertLast(int value) {
        if(isFull())return false;
        if(isEmpty()){front=rear=0;}
        else if(rear==k-1)rear=0;
        else rear++;
        dq[rear]=value;
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty())return false;
        if(front==rear){front=rear=-1;}
        else if(front==k-1)front=0;
        else front++;
        return true;
    }
    
    bool deleteLast() {
        if(isEmpty())return false;
        if(front==rear){front=rear=-1;}
        else if(rear==0)rear=k-1;
        else rear--;
        return true;
    }
    
    int getFront() {
        return isEmpty()?-1:dq[front];
    }
    
    int getRear() {
        return isEmpty()?-1:dq[rear];
    }
    
    bool isEmpty() {
        return front==-1;
    }
    
    bool isFull() {
        return (front==0&&rear==k-1)||(front==rear+1);
    }
};


/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */