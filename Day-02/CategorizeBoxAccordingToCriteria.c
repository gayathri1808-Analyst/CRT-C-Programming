char* categorizeBox(int length, int width, int height, int mass) {
     long long volume = (long long)length * width * height;

    int bulky = (length >= 10000 || width >= 10000 || height >= 10000 || volume >= 1000000000) ? 1 : 0;

    int heavy = (mass >= 100) ? 1 : 0;

    return (bulky && heavy) ? "Both" :
           (bulky) ? "Bulky" :
           (heavy) ? "Heavy" :
           "Neither";
    
}
