#include <cstdlib>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include "Server.h"


    
    
    


int main()
{   
    
    
    std::cout<<"Start Serwera - naciśnij Enter"<<std::endl;
    Server server(8080);
    server.run();
    std::cin.get(); 
   /* std::cout<<"Local host:"<<sf::IpAddress::LocalHost<<"\n"
	<<"Local: "<<sf::IpAddress::getLocalAddress()<<"\n"
	<<"Public: "<<sf::IpAddress::getPublicAddress()<<"\n";
    std::cin.get();*/
        
    return 0;
}

