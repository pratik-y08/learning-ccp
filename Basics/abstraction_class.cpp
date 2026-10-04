#include<iostream>

using namespace std;

//abstraction class: contains virtual functions that can be redifined in derived classes
class Tea{

    public:
        virtual void ingredients() = 0;   //virtual function
        virtual void brew() = 0;
        virtual void serve() = 0;

        void makeTea(){
            ingredients();
            brew();
            serve();
        }

};

//derived class
class GreenTea : public Tea{
    public:
        void ingredients() override {
            cout<< "Green Leaves and water"<<endl;
        }
        void brew() override {
            cout<< "Tea Brewed" <<endl;
        }
        void serve() override {
            cout<< "Tea served"<<endl;
        }
};

//another derived class
class MasalaTea : public Tea{
    public:
        void ingredients() override {
            cout<< "Black Tea Leaves, water, masala"<<endl;
        }
        void brew() override {
            cout<< "Tea Brewed" <<endl;
        }
        void serve() override {
            cout<< "Tea served"<<endl;
        }
};

int main(){
    GreenTea my_green_tea;
    MasalaTea my_masala_tea;

    my_green_tea.makeTea();
    my_masala_tea.makeTea();

    return 0;
}