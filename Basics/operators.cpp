/* OPERATORS - arthmetic ( +,-,*,/,%)
             - assignment(=)
             - realtional(>,<,>=,<=)
             - logical(AND(&&),OR(||))*/

/*   AND             OR
   1 && 1 = 1     1 || 1 = 1 
   1 && 0 = 0     1 || 0 = 1
   0 && 1 = 0     0 || 1 = 1
   0 && 0 = 0     0 || 0 = 0
   */

/* Conditonal Statements
    if( condition ){
        code to execute if condition is true
    }
    else{
        code to execute if condition false  
    }
    */

    #include<iostream>
    using namespace std;

    int main(){
        int num1,num2;

        cout<<"Enter first number: "<<endl;
        cin>>num1;
        cout<<"Enter second number: "<<endl;
        cin>>num2;

        if (num1>num2)
        {
            num1 +=5;
        }
        else{
            num2+=5;
        }
        cout<<"The final numbers are: " <<num1<< " and "<< num2 << " respectively"<<endl;

        return 0;

    }