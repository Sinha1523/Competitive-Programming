//week 4 XPSC Club
//https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1?_gl=1*2hl6h9*_ga*MTYxMTcwOTY2OC4xNjYwMzk1MzY0*_ga_DWCCJLKX3X*MTY5Njc3NDQzNi4xLjEuMTY5Njc3NDUwNy4wLjAuMA..

class Solution {
  public:
    int search(string &pat, string &txt) {
       
      int k = pat.size();
      int n = txt.size();

          if (n < k){
            return 0 ;
         }
         map<char, int> ans1, ans2;
          for (char c : pat) {
            ans1[c]++;
         }

          for (int i = 0; i < k; i++) {
              ans2[txt[i]]++;
           }

            int cnt = 0;
            if (ans1 == ans2) {
            cnt++;
        }

          for (int i = k; i < n; i++) {
            ans2[txt[i]]++;
            ans2[txt[i - k]]--;

          if (ans2[txt[i - k]] == 0) {
            ans2.erase(txt[i - k]);
        }
    
           if (ans1 == ans2) {
         cnt++;
     }
  }

return cnt;


    }
