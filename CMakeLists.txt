cmake_minimum_required(VERSION 3.17)
project(DesignPattern)

set(CMAKE_CXX_STANDARD 14)

add_executable(DesignPattern main.cpp open_close_principle/ISendable.cpp open_close_principle/ISendable.h open_close_principle/MessageService.cpp open_close_principle/MessageService.h Liskov_Substitution_Principle/Father.cpp Liskov_Substitution_Principle/Father.h Liskov_Substitution_Principle/Son.cpp Liskov_Substitution_Principle/Son.h Law_of_Demeter/Star.cpp Law_of_Demeter/Star.h Law_of_Demeter/Fans.cpp Law_of_Demeter/Fans.h Law_of_Demeter/Company.cpp Law_of_Demeter/Company.h Law_of_Demeter/Agent.cpp Law_of_Demeter/Agent.h Prototype/Prototype.cpp Prototype/Prototype.h Simple_Factory/Product.cpp Simple_Factory/Product.h Simple_Factory/SimpleFactory.cpp Simple_Factory/SimpleFactory.h Simple_Factory/Client.cpp Simple_Factory/Client.h)