#include <iostream>
#include <vector>

using namespace std;

class MyHashSet {
public:
    /** Initialize your data structure here. */
    vector<bool> Ftable;
    MyHashSet() {
        Ftable=vector<bool>(1000001,false);
    }
    
    void add(int key) {
        Ftable[key]=true;
    }
    
    void remove(int key) {
        Ftable[key]=false;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return Ftable[key]==true;
    }
};

int main(int argc, char const *argv[])
{
    MyHashSet hashSet;
    hashSet.add(1);         
    hashSet.add(2);         
    cout<<hashSet.contains(1)<<endl;    // returns true
    cout<<hashSet.contains(3)<<endl;     // returns false (not found)
    hashSet.add(2);          
    cout<<hashSet.contains(2)<<endl;     // returns true
    hashSet.remove(2);          
    cout<<hashSet.contains(2)<<endl;     // returns false (already removed)
        return 0;
}
