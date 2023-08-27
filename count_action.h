//
// Created by Macbook on 27.08.2023.
//

#pragma once

class Counter{
public:
    int plus();
    int minus();
    int output();
    Counter(int);
    Counter();
protected:
    int number = 1;
};
