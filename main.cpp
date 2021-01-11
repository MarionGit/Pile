#include <iostream>
#include <stack>
#include <cstring>



int main()
{
    std::stack<int> pile;
    int saisi;
    
    ///saisie
    for (int i=0;i<10;i++)
    {
        std::cout<<"saisie"<<std::endl;
        std::cin>> saisi;
        pile.push(saisi);
    }


    ///affichage
    for (unsigned int i=0; i<10; i++)
    {


        std::cout<<pile.top()<<std::endl;
        pile.pop();


    }
    ///supprimer
    std::cout<<"nombre à supprimer: "<<std::endl;
    std::cin>>nbreSupp;
    for (unsigned int i=0; i<10;i++)
    {
        nbre=fileimp.top();
        fileimp.pop();
        if (nbreSupp!=nbre)
        {
            fileimp.push(nbre);
        }

    }

    return 0;
}
