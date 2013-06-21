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

#include "SSDL_Surface.hpp"

namespace SSDL {

    /**
     * @brief Represent an Image
     */
    class Image : public SSDL::Surface {
    public:
        Image();

        /**
         * @brief Constructor with loading an image
         *
         * @param Filepath Path to the image
         *
         * @warning Class can actually only handle files with lowercase typdefinitions
         */
        Image(const std::string Filepath);
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
         * @brief Load an Image
         *
         * @param Filepath Path to the image
         *
         * @warning Class can actually only handle files with lowercase typdefinitions
         * @todo Convert type to lowercase before evaluation
         * @throw 1 Cannot load Image
         * @throw 2 Unknow File-Type
         */
        void LoadImage(const std::string Filepath);

        /**
         * @brief Load an Image from a *.bmp-file
         *
         * @param Filepath Path to the *.bmp-file
         *
         * @throw 1 Cannot load Image
         */
        void LoadBmp(const std::string Filepath);

        /**
         * @brief Load an Image from a *.png-file
         *
         * @param Filepath Path to the *.png-file
         *
         * @throw 1 Cannot load Image
         */
        void LoadPng(const std::string Filepath);

        /**
         * @brief Load an Image from a *.jpg-file
         *
         * @param Filepath Path to the *.jpg-file
         *
         * @throw 1 Cannot load Image
         */
        void LoadJpg(const std::string Filepath);

        /**
         * @brief Load an Image from a *.gif-file
         *
         * @param Filepath Path to the *.gif-file
         *
         * @throw 1 Cannot load Image
         */
        void LoadGif(const std::string Filepath);

    };

}
#endif	/* SSDL_IMAGE_HPP */

