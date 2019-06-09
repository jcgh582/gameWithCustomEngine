//
// Created by Jonathon Hill on 2019-06-09.
//

#pragma once

#include "Application.h"

extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv)
{
    auto app = Engine::CreateApplication();
    app->Run();
    delete app;
}
