class MyHashMap {
public:
    /** Initialize your data structure here. */
    vector<vector<int>> myHashTable;
    MyHashMap() {
        myHashTable.resize(1000,vector<int>());
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        int hashKey=key%1000;
        if(myHashTable[hashKey].empty())
            myHashTable[hashKey].resize(1000,-1);
        myHashTable[hashKey][key/1000]=value;
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        int hashKey=key%1000;
        if(myHashTable[hashKey].empty())        
            return -1;
        return myHashTable[hashKey][key/1000];
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        int hashKey=key%1000;
        if(!myHashTable[hashKey].empty())        
            myHashTable[hashKey][key/1000]=-1;
    }
};