#include <iostream>
#define N 10
using namespace std;

int SearchFunction(int x[], unsigned n, int target)
{
    for (int i = 1; i <= n; i++)
    {
        if (x[i] == target)
        {
            return i; 
        }
    }
    return -1;
}

void Display(int x[], unsigned n)
{
    cout << "当前数据集合为：";
    for (int i = 1; i <= n; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
}

struct Result
{
    int location; 
    int count;    
};

Result SearchFunction2(int x[], unsigned n, int target)
{
    Result res;        
    res.location = -1; 
    res.count = 0;     
    for (int i = 1; i <= n; i++)
    {
        if (x[i] == target)
        {
            res.location = i; 
        }
        if (x[i] > target)
        {
            res.count++; 
        }
    }
    return res; 
}

int main()
{
    int x[N + 1] = {0, 800, 150, 300, 600, 550, 650, 400, 350, 450, 700}, target;
    int location;
    Result res;
    Display(x, N); // 查找前显示
    while (cin >> target)
    {
        location = SearchFunction(x, N, target); // 使用第一个查找函数
        if (location != -1)
            cout << "你要查找的元素下标位置是：" << location << endl;
        else
            cout << "你要查找的元素在当前数据集中不存在！" << endl;

        res = SearchFunction2(x, N, target); // 使用第二个查找函数
        if (res.location != -1)
            cout << "你要查找的元素下标位置是：" << res.location << endl;
        else
            cout << "你要查找的元素在当前数据集中不存在！" << endl;
        cout << "数据集中有" << res.count << "个元素比你要查找的元素大" << endl;
    }
    return 0;
}
