#include <iostream>
#include <stack>
#include <cstring>



int main()
{
    std::stack<int> pile;
    int saisi;

    for (int i=0;i<10;i++)
    {
        std::cout<<"saisie"<<std::endl;
        std::cin>> saisi;
        pile.push(saisi);
    }

    for (unsigned int i=0; i<10; i++)
    {


        std::cout<<pile.top()<<std::endl;
        pile.pop();


    }



    return 0;
}
