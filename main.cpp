#include <iostream>

#define A "Yeah! You are welcome"
#define B "Go away! You baster"
#define C 9
#define D 7
#define E 29
#define F -12

std::string aaa(std::string a) {
    int const o[10] = {C, 3, D, 8, E, 1, -2, F, 4, -8};
    int sw_var = 4;
    int l = a.length();
    std::string r = a;
    while (sw_var != 49) {
        switch (sw_var) {
            case 2:
                r[(5 + l) % l] ^= o[1];
                sw_var = 99;
                continue;
            case 4:
                r[(2 + l) % l] ^= o[9];
                sw_var = 21;
                continue;
            case 5:
                sw_var = 7;
                r[(5 + l) % l] ^= o[5];
                continue;
            case 21:
                r[(36 + l) % l] ^= o[2];
                sw_var = 37;
                continue;
            case 22:
                sw_var = 5;
                r[(22 + l) % l] ^= o[1];
                continue;
            case 37:
                a[(3 + l) % l] ^= o[2];
                sw_var = 49;
                continue;
            case 99:
                sw_var = 1;
                r[(3 + l) % l] ^= o[8];
                continue;

        }
    }
    return a;
}

std::string ccc(std::string a) {
    int const o[10] = {F, 3, C, 8, E, 1, -2, D, 4, -8};
    int sw_var = 3;
    int l = a.length();
    std::string r = a;
    while (sw_var != 17) {
        switch (sw_var) {
            case 2:
                r[(5 + l) % l] ^= o[1];
                sw_var = 99;
                continue;
            case 3:
                r[(2 + l) % l] ^= o[9];
                sw_var = 18;
                continue;
            case 5:
                sw_var = 7;
                r[(5 + l) % l] ^= o[5];
                continue;
            case 18:
                r[(36 + l) % l] ^= o[2];
                sw_var = 91;
                continue;
            case 22:
                sw_var = 5;
                r[(22 + l) % l] ^= o[1];
                continue;
            case 91:
                a[(3 + l) % l] ^= o[2];
                sw_var = 17;
                continue;
            case 99:
                sw_var = 1;
                r[(3 + l) % l] ^= o[8];
                continue;

        }
    }
    return r;
}

int main() {
    std::string a;
    std::string b;
    std::cin >> a;
    std::cin >> b;
    for (char &i: a) {
        i += 2;
    }
    std::string c = a;
    a = ccc(a);
    c = aaa(a);
    if (a == c) {
        a = ccc(ccc(a));
    } else {
        a = aaa(a);
    }
    for (char &i: a) {
        i = abs(i) % (int)'z';
    }
    if (a == b) {
        std::cout << A << std::endl;
    } else {
        std::cout << B << std::endl;
    }
    return 0;
}
