#include <iostream>



// 定义一个函数，求两个正整数的最大公约数

int gcd(int x, int y)

{

    // 如果y为0，返回x

    if (y == 0)

    {

        return x;

    }

    // 否则，用y和x对y的余数递归调用gcd函数

    else

    {

        return gcd(y, x % y);

    }

}



int lcm(int x, int y)

{

    // 用x和y的乘积除以它们的最大公约数

    return x * y / gcd(x, y);

}



int gcd3(int a, int b, int c)

{

    return gcd(gcd(a, b), c);

}



int lcm3(int a, int b, int c)

{

    return lcm(lcm(a, b), c);

}



int main()

{

    // 定义三个正整数变量a,b,c1

    int a, b, c;

    // 输入a,b,c的值

    std::cin >> a >> b >> c;

    std::cout << gcd3(a, b, c) << std::endl;

    std::cout << lcm3(a, b, c) << std::endl;

    return 0;

}

