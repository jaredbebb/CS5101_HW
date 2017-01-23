#include <QCoreApplication>
#include<iostream>
#include<stdio.h>

int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);
    char logIn[100];
    char passIn[100];

    char login[100] = "guest";
    char pass[100] = "guest";

    std::cout<<"Login"<< std::endl;
    std::cout<<"username/password is \"guest\""<< std::endl;

    std::cout<< "type your login:";
    std::cin >> logIn;

    std::cout<<"\ntype your password:";
    std::cin >> passIn;

    if(strcmp(login, logIn) == 0 && strcmp(pass, passIn) == 0){
    std::cout << "Hello World!\n";
    }
    else{
        std::cout << "Aborted. Incorrect login credentials\n";
    }
    std::cout<<"Program has ended\n";
    //return a.exec();
}
