#include<iostream>

using namespace std;

class Tea{
    protected:
        string teaName;
        int servings;

    public:
        Tea(string name, int serve){
            teaName = name;
            servings = serve;
        }

        virtual void brew(){
            cout<< "Brewing " << teaName << " by general method"<< endl;
        }
        virtual void serve(){
            cout<< "serving " << servings << " cups of " << teaName << endl;
        }
        virtual ~Tea(){
            cout<< "Destructor called for " << teaName << endl;
        }

};

class greenTea : public Tea{
    public:
        greenTea(int serve) : Tea("Green Tea", serve){
            cout<< "Green Tea constructor called" << endl;
        }

        //inheriting the brew function from Tea class and overridding it
        void brew() override{
            cout<< "Brewing " << teaName << " by steeping green tea leaves" << endl;
        }

};

class masalaTea: public Tea{
    public:
        masalaTea(int serve) : Tea("Masala Tea", serve){
            cout<< "Masala Tea constructor called"<< endl;
        }

        //final keyword marks that this function cannot be further inherted or overrriden
        void brew() override final{
            cout<< "Brewing " << teaName << " with speacial masala"<< endl;
        }
};

// class SpicyMasalaTea: public masalaTea{
//     public:
//         void brew() override{
//             //cannot inherit brew function from the masalaTea class as used final keyword there
//         }
// };

int main( ){
    greenTea my_green_tea(2);
    masalaTea my_masala_tea(3);
    
    my_green_tea.brew();
    my_green_tea.serve();    //serve function inherited from Tea class

    my_masala_tea.brew();
    my_masala_tea.serve();
    
    return 0;
}