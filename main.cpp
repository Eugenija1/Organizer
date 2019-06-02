#include<bits/stdc++.h>
#include <iostream>
#include <ctime>
#include "calendar.h"
#include "calendar.cpp"
#include "event.h"
#include "event.cpp"

using namespace std;


bool flag = true;

int main(){
    Calendar calendar;
    calendar.PrintMonth(0, 0);
    while (flag){
        calendar.options();
    }
    return 0;
}