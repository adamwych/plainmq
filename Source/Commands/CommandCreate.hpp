#pragma once

#include "../Common.hpp"
#include "Command.hpp"

namespace PlainMQ {
    class Server;
    class CommandCreate : public PlainMQ::Command {
    public:
        CommandCreate(Server* server);
        
        void OnCommand(Client* client, nlohmann::json data);
    private:
        Server* server;
    };
}