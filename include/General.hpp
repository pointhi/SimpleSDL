/**
 * @file General.hpp
 *
 * @author Thomas Pointhuber
 *
 * @date 5/6/2013
 * @copyright GNU General Public License (GPL) 3.0
 */

#ifndef SSDL_GENERAL_HPP
#define	SSDL_GENERAL_HPP

namespace SSDL {

    /**
     * @brief General SDL-Functions
     */

    class General {
    public:

        /**
         * @brief Init SDL-Subsystems
         *
         * @throw 1 Cannot Init subsystem
         */
        static void Init();

    private:
        General();

    };

}

#endif	/* SSDL_GENERAL_HPP */

