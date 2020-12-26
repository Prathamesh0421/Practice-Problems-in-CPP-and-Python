#include <string>

class Account{

    public:

        void setName(std::string accountName){
            name = accountName;
        }

        std::string getName(){
            return name;
        }

    private:

        std::string name;

        
};