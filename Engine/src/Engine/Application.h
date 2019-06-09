//
// Created by Jonathon Hill on 2019-06-09.
//

#pragma once

namespace Engine {
    class Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();
    };

    // To be defined in CLIENT
    Application* CreateApplication();
}
