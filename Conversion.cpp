#include<iostream>
using namespace std;

int main(){

    int a =10;
    float b = 5.5;
    float result = a + b;

    cout << "Result (Implicit of sum): " << result << endl; // sum
    
    
    int a1 = 10, b1 = 3;
    float result1 = (float)a1/b1; //Mainly used in C but doesnt work on C++
    cout << "Result(Explicit of div): " << result1 << endl; 
    
    // C ++ fair one using static_cast<datatype>(a1)/b1 {suru ko ma bracket}
    float result2 = static_cast<float>(a1)/b1;
    cout << "Result(Static cast of div): " << result2 << endl;

    return 0;
}