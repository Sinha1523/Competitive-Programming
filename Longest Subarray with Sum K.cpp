//Week 5
//https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-sub-array-with-sum-k

int n = a.size() ;
    map<long long, long long> mp;
    long long sum = 0 , ans = 0 ;

    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (sum == k) {
            ans = i + 1;
        }
        if (mp.find(sum - k) != mp.end()) {
            ans = max(ans, i - mp[sum - k]);
        }
        if (mp.find(sum) == mp.end()) {
            mp[sum] = i;
        }
    }

    return ans;
