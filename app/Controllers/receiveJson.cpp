#include <iostream>
#include "crow.h"
#include <vector>
using namespace std;

String verifyRequest(crow::request& req)
{
    crow::json::rvalue body = crow::json::load(req.body);
    if (!body)
    {
        throw runtime_error("Invalid JSON"); 
        return crow::response(200, "Invalid JSON");
    }
    vector<string> requiredFields = {"id", "message", "timestamp"};
    for (const auto& field : requiredFields)
    {
        if (!body.has(field))
        {
            throw runtime_error("Missing field: " + field);
            return crow::response(200, "Missing field: " + field);
        }
        else{
            return crow::response(200, "Request verified successfully and it's secure.");
        }
    }
}