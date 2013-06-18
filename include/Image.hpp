/*
 * File:   Image.hpp
 * Author: thomas
 *
 * Created on 6. Juni 2013, 19:23
 */

#ifndef SSDL_IMAGE_HPP
#define	SSDL_IMAGE_HPP

#include "Surface.hpp"

#include "SDL/SDL.h"

#include <string>

namespace SDL {

    //! Represent a Image

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

