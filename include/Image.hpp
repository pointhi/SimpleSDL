/**
 * @file Image.hpp
 *
 * @author Thomas Pointhuber
 *
 * @date 6/6/2013
 * @copyright GNU General Public License (GPL) 3.0
 */

#ifndef SSDL_IMAGE_HPP
#define	SSDL_IMAGE_HPP

#include "Surface.hpp"

#include "SDL/SDL.h"

#include <string>

namespace SSDL {

    /**
     * @brief Represent an Image
     */

    class Image : public SSDL::Surface {
    public:
        Image();
        Image(const Image& orig);
        virtual ~Image();

        /**
         * @brief Load an Image from a *.bmp-file
         *
         * @param Filepath Path to the *.bmp-file
         * @throw 1 Cannot load Image
         */
        void LoadBmp(const std::string Filepath);

    };

}
#endif	/* SSDL_IMAGE_HPP */

