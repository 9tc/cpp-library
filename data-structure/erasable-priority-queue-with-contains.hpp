#include "erasable-priority-queue.hpp"
template<typename T, typename Comp = less<T>>
struct ErasablePriorityQueueWithContains{
    ErasablePriorityQueue<T, Comp> data;
    multiset<T> contained;

    ErasablePriorityQueueWithContains(){}

    void push(T x){
      contained.insert(x);
      data.push(x);
    }

    void erase(T x){
      contained.erase(contained.find(x));
      data.erase(x);
    }

    bool contains(T x){
      return contained.find(x) != contained.end();
    }

    T top(){
      return data.top();
    }

    void pop(){
      contained.erase(contained.find(data.top()));
      data.pop();
    }

    bool empty(){
      return data.empty();
    }

    int size(){
      return contained.size();
    }

    void clear(){
      data = ErasablePriorityQueue<T, Comp>();
      contained.clear();
    }

    void swap(ErasablePriorityQueueWithContains<T, Comp> &other){
      data.swap(other.data);
      contained.swap(other.contained);
    }
};