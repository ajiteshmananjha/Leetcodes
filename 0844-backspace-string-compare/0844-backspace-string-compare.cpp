class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i = 0;
        while (i < s.size()) {
            if (s[i] == '#') {
                int j = i - 1;
                while (j >= 0 && s[j] == '#') {
                    j--;
                }
                if (j >= 0)
                    s[j] = '#';
            }
            i++;
        }
        i = 0;
        while (i < t.size()) {
            if (t[i] == '#') {
                int j = i - 1;
                while (j >= 0 && t[j] == '#') {
                    j--;
                }
                if (j >= 0)
                    t[j] = '#';
            }
            i++;
        }
        i = 0;
        int k = 0;
        while (i < s.size() && k < t.size()) {
            if (s[i] == '#') {
                while (s[i] == '#' && i < s.size()) {
                    i++;
                }
            }
            if (t[k] == '#') {
                while (t[k] == '#' && k < t.size()) {
                    k++;
                }
            }
            if ((i == s.size() - 1 || k == t.size() - 1) &&
                (s[i] == '#' || t[k] == '#')) {
                return false;
            }
            if (s[i] != t[k]) {
                return false;
            }
            i++;
            k++;
        }
        int temp = k;
        while (i == s.size() && temp < t.size() - 1) {
            if (t[temp] == '#') {
                int l = temp - 1;
                while (l >= 0 && t[l] == '#') {
                    l--;
                }
                if (l >= 0)
                    t[l] = '#';
            }
            temp++;
        }
        temp = i;
        while (k == t.size() && temp < s.size() - 1) {
            if (s[temp] == '#') {
                int t = i - 1;
                while (t >= 0 && s[t] == '#') {
                    t--;
                }
                if (t = 0)
                    s[t] = '#';
            }
            temp++;
        }
        if (((i == s.size() && s[i - 1] != '#') &&
             (k < t.size() - 1 && t[k] == '#')) ||
            ((k == t.size() && t[k - 1] != '#') &&
             (i < s.size() - 1 && s[i] == '#'))) {
            if (i == s.size()) {
                while (k < t.size() && t[k] == '#')
                    k++;
                if (k == t.size())
                    return true;
                else
                    return false;
            }
            if (k == s.size()) {
                while (i < s.size() && s[i] == '#')
                    i++;
                if (i == s.size())
                    return true;
                else
                    return false;
            }
        }

        // if((i==s.size() && (k<t.size()-1 && (t[k+1]!='#' || t[k]=='#'))) ||
        // (k==t.size() && (i<s.size()-1 && (s[i+1]!='#' || s[i]=='#')))) return
        // false;
        return true;
    }
};