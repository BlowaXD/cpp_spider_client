//
// Created by doom on 02/10/17.
//

#ifndef SPIDER_SERVER_ABSTRACTLOGHANDLER_HPP
#define SPIDER_SERVER_ABSTRACTLOGHANDLER_HPP

#include <string>
#include <utils/NonCopyable.hpp>
#include <Utils/ILoggable.hpp>
#include <Network/IOManager.hpp>

namespace spi
{
    class AbstractLogHandle : public utils::NonCopyable
    {
    public:
        virtual ~AbstractLogHandle() noexcept
        {
        }

        virtual void appendEntry(const ILoggable &) = 0;

        virtual void flush() = 0;

        virtual void setIOManager(net::IOManager &) = 0;
    };
}

#endif //SPIDER_SERVER_ABSTRACTLOGHANDLER_HPP
