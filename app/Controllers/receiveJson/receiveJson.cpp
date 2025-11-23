#include <iostream>
#include "crow.h"
#include <vector>
#include "../Routes/receiveJson.hpp"
using namespace std;

#include <iostream>
#include "crow.h"
#include <vector>
#include <stdexcept>

crow::response verifyJson(crow::request& req)
{
    crow::json::rvalue body = crow::json::load(req.body);
    
    if (!body)
    {
        throw std::runtime_error("Invalid JSON"); 
    }

    std::vector<std::string> requiredFields = {"id", "message", "timestamp"};
    
    for (const auto& field : requiredFields)
    {
        if (!body.has(field))
        {
            throw std::runtime_error("Missing field: " + field);
        }
    }
    
    return crow::response(200, "Request verified successfully and it's secure.");
}