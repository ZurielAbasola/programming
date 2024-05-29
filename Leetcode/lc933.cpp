#include <iostream>
#include <deque>

using namespace std;

class RecentCounter {
public:
    deque<int> q;

    RecentCounter() {
        return;
    }
    
    int ping(int t) {
        q.push_back(t);
        while(q.front() < t-3000) {
            q.pop_front();
        }
        return q.size();
    }
};