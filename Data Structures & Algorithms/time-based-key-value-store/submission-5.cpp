class TimeMap {
public:
    TimeMap() {

    };
    
    void set(string& key, string &value, int timestamp) {
        hashMap[key].push_back({value, timestamp});
    }

    string get(string& key, int target) {
        if (hashMap.find(key) == hashMap.end())
            return "";
        const auto &entries = hashMap.at(key);

        int left = 0;
        int right = entries.size() - 1;
        int ans = -1;

        while(left <= right) {
            const auto mid = (left + right) / 2;
            if (target < entries[mid].second) {
                // search left
                right = mid - 1;
            } else {
                // search right
                ans = entries[mid].second; // potential candidate if timeStamp was nopt found
                left = mid + 1;
            }
        }
        // the target time was not found, timestamp_prev <= timestamp
        return ans == - 1 ? "" : entries[(left + right) / 2].first; 
    }

// use stirng_view
// extract the timeStampsForGivenKey to a helper
private: 
    unordered_map<string, vector<pair<string, int>>> hashMap {};

        
};
