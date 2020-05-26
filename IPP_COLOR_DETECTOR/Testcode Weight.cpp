//Utveckling efter test1 
//Ponsuda Mangkhang

#include <iostream>
#include <string>
using namespace std;



int main()
{

    char option;
    int materialWeight;

    std::cout << "**************************" << endl;
    std::cout << "        Välkommen!        " << endl << endl;
    std::cout << "Tryck 1: För att sortera " << endl << endl;
    std::cout << "Tryck 2: För att avsluta " << endl << endl;
    std::cout << "**************************" << endl << endl;

    cin >> option;
    cin.ignore();
   
    int count1 = 0; //Uträkning av antal glas och plast som har sorteras. 
    int count2 = 0;
    

        switch (option)
        {
        case '1':

            while (option == '1' )
            {
                
                std::cout << endl;
                std::cout << "Ange vikt på den/det avfall i (g): " << endl << endl;
                cin >> materialWeight;
                cin.ignore();
              
                 if (materialWeight > 100) //Praktiska utvanns värde. 
                {
                    
                    
                    count2++;
                    std::cout << endl;
                    std::cout << "**************************" << endl;
                    std::cout <<"Glas" << endl<<endl;
                    std::cout << "Antal sorterade glas:" <<count2<< endl << endl;
                    std::cout << "**************************" << endl; 
                    
                   
                   

                    
                }
               

                else if (materialWeight <= 100)
                {
                    
                  
                    count1++;
                    std::cout << endl;
                    std::cout << "**************************" << endl;
                    std::cout<< "Plast" << endl<<endl;
                    std::cout << "Antal sorterade plast:" << count1 << endl << endl;
                    std::cout << "**************************" << endl;
                   
                }

                std::cout << endl;
                std::cout << "Vill fortsätta ?"<< endl;
                std::cout << "Om JA tryck[1] och om NEJ tryck[2]" << endl <<endl;
                cin >> option;

                if (option == '0')
                {

                    break;
                }
            }

        case '2':
            while (option == '2')

            {
               
               
         
                std::cout << endl;
                std::cout << "**************************" << endl;
                std::cout << "Programmet avslutas!" << endl << endl;
                std::cout << "Totalt sorterade avfall" << endl << "Glas:" << count2 << endl << "Plast:" << count1 << endl;
                std::cout << "**************************" << endl;
               
                
                break;

            }
        }
        
      
    
        return 0;

    }