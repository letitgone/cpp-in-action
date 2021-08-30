/**
 * @Author ZhangGJ
 * @Date 2021/08/29 08:17
 */
#ifndef C__IN_ACTION_STOCK_H
#define C__IN_ACTION_STOCK_H

#endif //C__IN_ACTION_STOCK_H

#include <string>

class Stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;

    void set_tot()
    {
        total_val = shares * share_val;
    }

public:
    void acquire(const std::string &co, long n, double pr);

    void buy(long num, double price);

    void sell(long num, double price);

    void update(double price);

    void show();
};
