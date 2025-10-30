class MyHashMap {
private:
    static const int SIZE = 1000; // number of buckets
    vector<list<pair<int, int>>> table;

    int hash(int key) {
        return key % SIZE;
    }

public:
    MyHashMap() {
        table.resize(SIZE);
    }

    void put(int key, int value) {
        int idx = hash(key);
        for (auto& p : table[idx]) {
            if (p.first == key) { // key already exists
                p.second = value;
                return;
            }
        }
        table[idx].push_back({key, value}); // add new key-value pair
    }

    int get(int key) {
        int idx = hash(key);
        for (auto& p : table[idx]) {
            if (p.first == key)
                return p.second;
        }
        return -1; // not found
    }

    void remove(int key) {
        int idx = hash(key);
        for (auto it = table[idx].begin(); it != table[idx].end(); ++it) {
            if (it->first == key) {
                table[idx].erase(it);
                return;
            }
        }
    }
};
