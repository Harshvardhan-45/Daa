#include <bits/stdc++.h>
using namespace std;
class Item
{
public:
    int weight, profit;
    Item(int p, int w)
    {
        this->weight = w;
        this->profit = p;
    }
};
bool weight_cmp(Item a, Item b)
{
    return a.weight < b.weight;
}
bool profit_cmp(Item a, Item b)
{
    return a.profit > b.profit;
}
bool profit_weigth_cmp(Item a, Item b)
{
    double x = (double)a.profit / (double)a.weight;
    double y = (double)b.profit / (double)b.weight;
    return x > y;
}
int Largest_profit_stratergy(vector<Item> Items, int cap)
{
    sort(Items.begin(), Items.end(), profit_cmp);
    double profit = 0;
    for (int i = 0; i < Items.size(); i++)
    {
        if (Items[i].weight <= cap)
        {
            cap -= Items[i].weight;
            profit += Items[i].profit;
        }
        else
        {
            profit += Items[i].profit * ((double)cap /
                                         (double)Items[i].weight);
            break;
        }
    }
    return profit;
}
int Smallest_Weight_stratergy(vector<Item> Items, int cap)
{
    sort(Items.begin(), Items.end(), weight_cmp);
    double profit = 0;
    for (int i = 0; i < Items.size(); i++)
    {
        if (Items[i].weight <= cap)
        {
            cap -= Items[i].weight;
            profit += Items[i].profit;
        }
        else
        {
            profit += Items[i].profit * ((double)cap /
                                         (double)Items[i].weight);
            break;
        }
    }
    return profit;
}
int Largest_profit_weight_ratio(vector<Item> Items, int cap)
{
    sort(Items.begin(), Items.end(), profit_weigth_cmp);
    double profit = 0;
    for (int i = 0; i < Items.size(); i++)
    {
        if (Items[i].weight <= cap)
        {
            cap -= Items[i].weight;
            profit += Items[i].profit;
        }
        else
        {
            profit += Items[i].profit * ((double)cap /
                                         (double)Items[i].weight);
            break;
        }
    }
    return profit;
}
int main()
{
    int cap = 20;
    vector<Item> Items = {{25, 18}, {24, 15}, {15, 10}};
    cout << "Largest Profit : " << Largest_profit_stratergy(Items, cap) << endl;
    cout << "Smallest Weight : " << Smallest_Weight_stratergy(Items, cap) << endl;
    cout << "Largest Profit/Weight Ratio : " << Largest_profit_weight_ratio(Items, cap) << endl;
    return 0;
}