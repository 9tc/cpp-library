template<typename T, typename Comp = less<T>>
struct ErasablePriorityQueue{
    priority_queue<T, vector<T>, Comp> data, erased;
    
    ErasablePriorityQueue(){}

    void push(T x){
      data.push(x);
    }

    void erase(T x){
      erased.push(x);
    }

    void modify(){
      while(!data.empty() && !erased.empty() && data.top() == erased.top()){
        data.pop();
        erased.pop();
      }
      if(data.empty()){
        erased.clear();
      }
    }

    T top(){
      modify();
      return data.top();
    }

    void pop(){
      modify();
      data.pop();
    }

    bool empty(){
      modify();
      return data.empty();
    }
};