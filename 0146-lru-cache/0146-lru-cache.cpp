class LRUCache {
public:
  list<pair<int,int>> lt;
  unordered_map<int,list<pair<int,int>>::iterator> mp;
  int cap =0;
    LRUCache(int capacity) {
         cap = capacity;
    }
    
    int get(int key) {
        if(mp.find(key)==mp.end()){
            return -1;
        
        }
        else{
            auto it = mp[key];
            int val = it->second;
            lt.erase(it);
            lt.push_front({key,val});
            mp[key]=lt.begin();
            return val;
        }
    }
    
    void put(int key, int value) {

        if(mp.find(key)!=mp.end()){
            lt.erase(mp[key]);
           
        }
        else if(lt.size()==cap){
            auto it = lt.back();
            mp.erase(it.first);
            lt.pop_back();
            
        }
         lt.push_front({key,value});
        mp[key]=lt.begin();
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */