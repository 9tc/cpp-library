template<typename T>
struct KthSumPriorityQueue{
  priority_queue<T> pqr;
  priority_queue<T, vector<T>, greater<T>> pql;
  T sm;
  int k;

  KthSumPriorityQueue(int k): k(k) {
    sm = 0;
  }

  void push(T x){
    pql.push(x);
    sm += x;
    if(pql.size() > k){
      sm -= pql.top();
      pqr.push(pql.top());
      pql.pop();
    }
  }

  void pop(){
    // TODO
    assert(false);
  }

  T top(){
    return pql.top();
  }

  T sum(){
    return sm;
  }

  int size(){
    return pql.size() + pqr.size();
  }

  bool empty(){
    return pql.empty();
  }

  void setk(int k){
    this->k = k;
    while(pql.size() > k){
      sm -= pql.top();
      pqr.push(pql.top());
      pql.pop();
    }
    while(pql.size() < k && !pqr.empty()){
      sm += pqr.top();
      pql.push(pqr.top());
      pqr.pop();
    }
  }
};