/*
 * File:   Time.hpp
 * Author: thomas
 *
 * Created on 5. Juni 2013, 19:06
 */

#ifndef SSDL_TIME_HPP
#define	SSDL_TIME_HPP

namespace SDL {

    //! Working with Time-Functions

    class Time {
    public:

        /**
         * \brief Made a simple Delay
         *
         * \param Time Amount of Milliseconds which the Programm would be wait
         */
        static void Delay(unsigned int Time);

        /**
         * \brief Get Milliseconds since program-start
         *
         * \return The amount of Time in Milliseconds since program start
         */
        static long int GetTicks();

    private:
        Time();

    };

}

#endif	/* TIME_HPP */

