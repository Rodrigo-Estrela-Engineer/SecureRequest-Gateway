#include <iostream>
#include "crow.h"
#include "./Routes.hpp"
#include <stdexcept>

using namespace std;

void mainRoute(crow::SimpleApp& app)
{
    CROW_ROUTE(app, "/")([](){
        try{
            cout << "Pagina inicial" << endl;
            return "Voce esta na inicial";
        }
        catch(const exception& e){
            runtime_error("Erro ao carregar a página.");
            throw("Erro ao carregar a página.");
            cout << "Erro ao carregar a página." << endl;
            return "Erro ao carregar a página";
        }
    });
}