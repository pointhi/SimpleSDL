/**
 * \file Image.hpp
 *
 * \author Thomas Pointhuber
 *
 * \date 6/6/2013
 * \copyright GNU General Public License (GPL) 3.0
 */

#ifndef SSDL_IMAGE_HPP
#define	SSDL_IMAGE_HPP

#include "Surface.hpp"

#include "SDL/SDL.h"

#include <string>

namespace SDL {

    /**
     * \brief Represent an Image
     */

    class Image : public SDL::Surface {
    public:
        Image();
        Image(const Image& orig);
        virtual ~Image();

        /**
         * \brief Load an Image from a *.bmp-file
         *
         * \param Filepath Path to the *.bmp-file
         */
        void LoadBmp(const std::string Filepath);

    };

}
#endif	/* IMAGE_HPP */

