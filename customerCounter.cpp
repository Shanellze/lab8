#include <iostream>


class CustomerCounter {
    int maximumCustomers;
    int customerCount;
public:
    CustomerCounter(int max) {
        maximumCustomers = max;
        customerCount = 0;
        }


    void add(int newCustomers){
        if ((customerCount + newCustomers) < maximumCustomers){
            customerCount += newCustomers;
            std::cout << newCustomers << " customers have entered the shop floor. " << "Total customers: " << customerCount << std::endl;
        } else {
            std::cout << "Cannot exceed maximum customers. Total customers: " << customerCount << std::endl;
        }

    }

    void subtract(int leftCustomers){
        if (customerCount > 0){
            customerCount -= leftCustomers;
            std::cout << leftCustomers << " customers have left the shop floor. " << "Total customers: " << customerCount << std::endl;
        }
    }
};

int main(){
    CustomerCounter shopFloor(50);
    shopFloor.add(25);
    shopFloor.add(6);
    shopFloor.subtract(2);
    shopFloor.subtract(15);
    shopFloor.add(12);
    shopFloor.add(23);
    shopFloor.subtract(1);
    shopFloor.add(3); //These customers couldn't be let in as it would exceed the shop floor limit.
    return 0;
}