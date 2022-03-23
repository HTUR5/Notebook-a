#include "Direction.hpp"
#include "Notebook.hpp"
#include <string>
#include <vector>
using namespace std;

namespace ariel {
    Notebook::Notebook(){}

    Notebook::~Notebook(){}

    void Notebook::write(int page, int row, int col, Direction dir, std::string msg){
    }

    std::string Notebook::read(int page, int row, int col, Direction dir, int len){
        return "";
    }

    void Notebook::erase(int page, int row, int col, Direction dir, int len){
    }

    void Notebook::show(int page){
    }
}