/**
 * \file General.hpp
 *
 * \author Thomas Pointhuber
 *
 * \date 5/6/2013
 * \copyright GNU General Public License (GPL) 3.0
 */

#ifndef SSDL_GENERAL_HPP
#define	SSDL_GENERAL_HPP

namespace SDL {

    /**
     * \brief General SDL-Functions
     */

    class General {
    public:

        /**
         * \brief Init SDL-Subsystems
         */
        static void Init();

    private:
        General();

    };

}

#endif	/* GENERAL_HPP */

