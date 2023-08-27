//
// Created by Macbook on 27.08.2023.
//

#include "count_action.h"

    int Counter::plus(){
        return number++;
    }
    int Counter::minus(){
        return number--;
    }
    int Counter::output(){
        return number;
    }
    Counter::Counter(int number){
        this -> number = number;
    }

    Counter::Counter() {}

