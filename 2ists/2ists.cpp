#include <iostream>
#include "List.h"
using namespace std;

int main() {
    List<int> list1;
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);

    List<int> list2;
    list2.push_back(2);

    List<int> list3 = list1 + list2;
    List<int> list4 = list1 * list2;

    list1.show();

    list2.show();

    list3.show();

    list4.show();

    return 0;
}