// Custom priority queue with a lambda function as the comparator
#include <iostream>
#include <queue>

using namespace std;
// for std::greater (or you can use a custom lambda instead)
struct Node {
    int age;
    string name;
};
int main() {
    
    auto cmp = [](Node a, Node b) {
        return a.age > b.age;
    };
    priority_queue<Node, vector<Node>, decltype(cmp)> pq(cmp);
    // Push elements into the priority queue
    pq.push({10,"Babla"});
    pq.push({30,"abir"});
    pq.push({5,"dhruba"});

    // Print elements of the priority queue
    while (!pq.empty())
    {
        cout <<pq.top().age << "-->"<<pq.top().name<<endl;
        pq.pop();
    }

    return 0;
}
