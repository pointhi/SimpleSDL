/*
 * File:   Time.hpp
 * Author: thomas
 *
 * Created on 5. Juni 2013, 19:06
 */

#ifndef SSDL_TIME_HPP
#define	SSDL_TIME_HPP

namespace SDL {

    class Time {
    public:

        static void Delay(unsigned int Time);

        static long int GetTicks();

    private:
        Time();

    };

}

#endif	/* TIME_HPP */

