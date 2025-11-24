#include <iostream>
#include "crow.h"
#include <stdexcept>
#include "./receiveJson/receiveJson.hpp"
#ifndef ROUTES_HPP
#define ROUTES_HPP
using namespace std;
void mainRoute(crow::SimpleApp& app);
#endif // ROUTES_HPP