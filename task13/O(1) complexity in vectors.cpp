class RandomizedSet{
private:
    vector<int> elements;
    unordered_map<int, int> indexMap;
public:
    RandomizedSet() {}
    
    bool insert(int val) {
        if(indexMap.find(val) != indexMap.end()){
            return false;
        }
        elements.push_back(val);
        indexMap[val] = elements.size() - 1;
        return true;
    }
    
    bool remove(int val) {
        if(indexMap.find(val) == indexMap.end()){
            return false;
        }
        int ind = indexMap[val];
        int last_val = elements.back();
        elements[ind] = last_val;
        indexMap[last_val] = ind; 
        elements.pop_back();
        indexMap.erase(val);
        return true;
    }
    
    int getRandom() {
        int randindex = rand() % elements.size();
        return elements[randindex];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
