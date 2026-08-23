class Solution {
public:
    bool sumGame(string num) {

        int cntl = 0, cntr = 0;
        int ql = 0, qr = 0;

        for(int i = 0; i < num.size() / 2; i++)
        {
            if(num[i] == '?')
                ql++;
            else
                cntl += num[i] - '0';
        }

        for(int i = num.size() / 2; i < num.size(); i++)
        {
            if(num[i] == '?')
                qr++;
            else
                cntr += num[i] - '0';
        }

        if((ql + qr) % 2 == 1)
            return true;

        if(cntl - cntr == 9 * (qr - ql) / 2)
            return false;

        return true;
    }
};