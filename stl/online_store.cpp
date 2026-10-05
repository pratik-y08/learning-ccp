#include<iostream>
#include<vector>   //stroring products
#include<deque>    //stroring recent customers
#include<list>     //storing order history
#include<time.h>
#include<set>     //storing categories
#include<map>     //storing stock

using namespace std;

struct  product{
    int pruductID;
    string productName;
    string category;
};

struct order{
    int orderID;
    int productID;
    int quantity;
    string customerID;
    time_t order_date;
};

int main(){
    vector<product> products {
        {101, "Laptop", "Electronics"},
        {102, "Mobile", "Electronics"},
        {103, "Coffee Maker", "Kitchen"},
        {104, "Blender", "Kitchen"},
        {105, "Desk Lamp", "Home Appliances"}  
    };

    deque<string> recent_customers = {"C001", "C002", "C003" };

    recent_customers.push_back("C004");

    list<order> order_history;

    order_history.push_back({1, 101, 1, "C001", time(0)});
    order_history.push_back({2, 102, 1, "C002", time(0)});
    order_history.push_back({3, 103, 1, "C003", time(0)});

    set<string> categories;

    for (const auto &product : products){
        categories.insert(product.category);
    } 

    map<int, int> stock = {
        {101, 10},
        {102, 12},
        {103, 14},
        {104, 16},
        {105, 18},
    };
    
    multimap<string, order> customer_orders;
        for(const auto &order: order_history){
            customer_orders.insert({order.customerID, order});
        }

    return 0;
}