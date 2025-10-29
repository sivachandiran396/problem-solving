class Solution {
public:
    int smallestNumber(int num) {
       string binary = "";

    if (num == 0) binary="0";
    while (num > 0) {
        binary += (num % 2 == 0 ? '0' : '1');
        num /= 2;
    }
    for(int i=0;i<binary.size();i++){
        if(binary[i]=='0'){
            binary[i]='1';
        }
    }
        return stoi(binary, 0, 2);
    }
};