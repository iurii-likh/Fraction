int gcd(int a, int b) {
    return (b == 0) ? a : gcd (b, a % b);
}


int lcm(int a, int b) {
    int hcf = gcd(a, b);
    return hcf ? a*b / hcf : 0;
}


int abs(int a) {
    return (a > 0) ? a : -a;
}
