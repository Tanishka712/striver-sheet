class Solution {
public:
    bool isArmstrong(int n) {
        int arm=0,dub,ld;
        dub=n;
        while(n>0)
        {
            ld=n%10;
            arm=arm+pow(ld,3);
            n=n/10;
        }
        if (arm==dub)
        return true;
        else
        return false;


    }
};
