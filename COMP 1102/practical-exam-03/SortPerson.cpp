#include "SortPerson.h"
#include "Person.h"
#include <iostream>

using namespace std;
void SortPerson::sort(Person** people,int n)
{  
    int i, j;
    for (i = 0; i < n - 1; i++)
            for (j = 0; j < n - 1 - i; j++)
                    if (people[j]->personID > people[j + 1]->personID)
                            swap(people[j], people[j + 1]);
}  