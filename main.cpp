#include <iostream>
#include<vector>
#include<deque>
#include<list>
#include<set>
#include<map>
#include<string>
#include<ctime>
#include<unordered_map>
#include<unordered_set>
using namespace std;

// products
struct Product
{
    int productID;
    string name;

    string category;
};
// Orders
struct Order
{
    int orderID;
    int productID;
    int quantity;
    string customerID;
    time_t orderDate;
};
int main()
{
    const vector<Product> products = {
        {101,"Laptop","Electronics"},
        {102,"smartPhone","Electronics"},
        {103,"Coffe Maker", "Kitchen"},
        {104,"Desk Lamp","Home"}
    };

    deque<string> recentCustomer ={"C001","C002","C003"};

    recentCustomer.emplace_back("C004");
    recentCustomer.emplace_front("C005");

    list<Order> orderHistory;

    orderHistory.push_back({1,101,1,"C001",time(nullptr)});
    orderHistory.push_back({2,102,2,"C002",time(nullptr)});
    orderHistory.push_back({3,103,1,"C003",time(nullptr)});

    set<string> categories ;
    for (const auto &product: products)
    {
        categories.insert((product.category));
    }

    map<int , int> productStock = {
        {101,10},
        {102,20},
        {103,15},
        {104,30},
        {105,25},
        };

    multimap<string, Order> customerOrder;
    for (const auto &order: orderHistory)
    {
        customerOrder.insert({order.customerID, order});

    }

    unordered_map<string, string> customerData ={
        {"C001","Alice"},
        {"C002","Boob"},
        {"C003","Clint"},
        {"C004","Wilson"},
        {"C005","Madi"},
    };

    unordered_set<int> uniqueProductID;

    for (const auto &product: products)
    {
        uniqueProductID.insert(product.productID);
    }
    cout<<"Code execute successfully";

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.