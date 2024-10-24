#include <iostream>
#include <string>
#include <iomanip>

// CLASSES
class Account {
    private:
        // Data members
        int id;
        double balance;
        std::string type;
        double rate;

    public:
        // Constructor
        //Account(int id): id(id), balance(0), type("Checking"), rate(0.0001){}
        Account(int id): Account(id, 0.0, "Checking", 0.0001){}
        Account(int id, double balance, std::string type, double rate): id(id), balance(balance), type(type), rate(rate){}

        int getID() const {return id;} // Getter, Accessor
        void setID(int id){this->id = id;} //Setter, Mutator

        double getBalance() const {return balance;} // Getter, Accessor
        void setBalance(double balance){this->balance = balance;} //Setter, Mutator

        const std::string& getType() const {return type;} // Getter, Accessor
        void setType(const std::string& type){this->type = type;} //Setter, Mutator

        double getRate() const {return rate;} // Getter, Accessor
        void setRate(double rate){this->rate = rate;} //Setter, Mutator

        void print(){
            std::cout << std::setw(10) << "ID: " << id << std::endl
                      << std::setw(10) << "BALANCE: " << balance << std::endl
                      << std::setw(10) << "TYPE: " << type << std::endl
                      << std::setw(10) << "RATE: " << rate << std::endl << std::endl;
        }
};

int main(){
    Account a{123, 100.00, "Checking", 0.005};
    Account b{234};

    Account* c = new Account{173, 100.0, "Checking", 0.005};
    Account* d = new Account{230};

    a.print();
    b.print();

    c->print();
    d->print();

    delete c, d;

    return 0;
}