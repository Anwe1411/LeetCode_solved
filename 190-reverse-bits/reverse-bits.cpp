class Solution {
public:
    string toBinary(int n) {
    if (n == 0) return "0";
    string binary = "";
    while (n > 0) {
        binary = char((n % 2) + '0') + binary;
        n /= 2;
    }
    return binary;
}
    int reverseBits(int n) {
        string bin=toBinary(n);
        while(bin.length()<32)
        bin='0'+bin;
        reverse(bin.begin(),bin.end());
        return stoi(bin,nullptr,2);
    }
};