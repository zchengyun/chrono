// chrono.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <chrono>//日期和时间库
int main()
{
    auto start = std::chrono::steady_clock().now();//steady_clock相当于秒表,单位是ns,不随系统时间修改而变化的时间间隔
    int i = 0;
    while (i<100000)
    {
        i++;
    }
    auto stop = std::chrono::steady_clock().now();
    std::chrono::duration<double> duration1 = stop - start;
    std::cout<<duration1.count()<<"s\n"<<std::endl;
    auto system_time = std::chrono::system_clock::now();//system_clock起点是1970 - 01 - 01 00:00:00
    std::cout << "距离1970年1月1日" << std::chrono::system_clock::to_time_t(system_time) / (24 * 60 * 60) << "天\n" << std::endl;


}

