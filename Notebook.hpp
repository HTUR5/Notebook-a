#include "Direction.hpp"
#include <string>
#include <vector>
namespace ariel{

    class Notebook{
        
        public:
            //Constructor
            Notebook();

            //Destructor
            ~Notebook();

            void write(int page, int row, int col, Direction dir, std::string msg);

            std::string read(int page, int row, int col, Direction dir, int len);

            void erase(int page, int row, int col, Direction dir, int len);

            void show(int page);
         
    };
}   