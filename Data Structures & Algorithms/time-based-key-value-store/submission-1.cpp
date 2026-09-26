class TimeMap {
public:
    TimeMap() {

    };
    
    void set(string& key, string &value, int timestamp) {
        hashMap[key].push_back({value, timestamp});
    }

    string get(string& key, int target) {
        auto it = hashMap.find(key);

        if (it == hashMap.end())
            return "";
        // create a vector of all available time stamps for given key
        // "foo" : <("happy", 2), ... > , "bar" : <....>
        vector<int> timestamps {};
        const auto& pairs = hashMap.at(key);
        for (const auto& pair : pairs) {
            timestamps.push_back(pair.second);
        }

        const int index = binarySearch(timestamps, target);

        for (const auto& pair : pairs) {
            if (pair.second == index)
                return pair.first;
        }

        return "";
    }
// use stirng_view
// extract the timeStampsForGivenKey to a helper
private: 
    unordered_map<string, vector<pair<string, int>>> hashMap {};

    static int binarySearch(vector<int> &timeStamps, int target) {
        if (timeStamps.empty())
            return -1;
        int left = 0;
        int right = timeStamps.size() - 1;
        int ans = -1;

        while(left <= right) {
            const auto mid = (left + right) / 2;
            if (target < timeStamps[mid]) {
                // search left
                right = mid - 1;
            } else {
                // search right
                ans = timeStamps[mid]; // potential candidate if timeStamp was nopt found
                left = mid + 1;
            }
        }
        // the target time was not found, timestamp_prev <= timestamp
        return ans/*timestamp_prev*/; 
    }
};
