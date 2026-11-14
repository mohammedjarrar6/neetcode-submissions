class MedianFinder {

public:
    vector<int>arr;
    priority_queue<int>sh;
    priority_queue<int,vector<int>,greater<int>>lh;
    MedianFinder() {
    }
    void rebalance(){
        if(sh.size()>lh.size()+1){lh.push(sh.top());sh.pop();}
        else if(sh.size()+1<lh.size()){sh.push(lh.top());lh.pop();}
        return;
    }
    void addNum(int num) {
        if(!sh.size()&&!lh.size())sh.push(num);
        else if(num<sh.top())sh.push(num);
        else lh.push(num);
        rebalance();
    }
    
    double findMedian() {
        if(sh.size()!=lh.size()){
            if(sh.size()>lh.size())return sh.top();
            return lh.top();
        }
        return (lh.top()+sh.top())/2.0;
    }
};
