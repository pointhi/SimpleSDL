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

#include <string>

#include "SDL/SDL.h"

#include "SSDL_Surface.hpp"

namespace SSDL {

    /**
     * @brief Represent an Image
     *
     * @todo Implementing loader for other Image formats as *.bmp
     */
    class Image : public SSDL::Surface {
    public:
        Image();

        virtual ~Image();

    private:
        /**
         * @param orig
         *
         * @todo Implementing the Copy Constructor
         */
        Image(const Image& orig);

        /**
         * @param orig
         * @return
         *
         * @todo Implementing Copy Function
         */
        Image& operator=(const Image& orig);
    public:

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

