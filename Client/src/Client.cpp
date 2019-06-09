#include <iostream>

#include "../../Engine/src/Engine.h"

class Client : public Engine::Application
{
public:
    Client()
    {
    }

    ~Client()
    {
    }
};

Engine::Application* Engine::CreateApplication()
{
    return new Client;
}
