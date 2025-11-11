#include <iostream>
#include <"crow.h">
#include "app/Controllers/receiveController.cpp"
using namespace std;

void setupMessages(crow::SimpleApp& app)
{
    CROW_ROUTE(app, "/receive").methods("POST"_method)(
{
    return ReceiveController::verifyReceive(request);
});
}