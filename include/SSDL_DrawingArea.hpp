/**
 * @file DrawingArea.hpp
 *
 * @author Thomas Pointhuber
 *
 * @date 5/6/2013
 * @copyright GNU General Public License (GPL) 3.0
 */

#ifndef SSDL_DRAWINGAREA_HPP
#define	SSDL_DRAWINGAREA_HPP

#include "SSDL_Surface.hpp"
#include "SSDL_Color.hpp"

#include <string>

namespace SSDL {

    /**
     * @brief Represent a Surface and made it editable
     */

    class DrawingArea : public SSDL::Surface {
    public:

        DrawingArea();
        DrawingArea(const DrawingArea& orig);
        virtual ~DrawingArea();

    public:

        /**
         * @brief Clear the Surface
         */
        void Clear() {
            this->Fill(SSDL::ColorList::Black);
        }

        /**
         * @brief Copy a Surface like an Image or a DrawingArea in this Surface
         *
         * @param x The x-coordinate on the DrawingArea
         * @param y The y-coordinate on the DrawingArea
         * @param Surface The Surface which would draw
         *
         */
        void DrawSurface(const int x, const int y, const Surface& Surface);

        /**
         * @brief Draw a String
         *
         * @param x The x-coordinate on the DrawingArea
         * @param y The y-coordinate on the DrawingArea
         * @param size The size of the typeface (not implemented yet)
         * @param Text The Text who would be draw
         * @param Color The Color-Value in which the text would be draw
         *
         */
        void DrawString(const int x, const int y, const int size, const std::string Text, const SSDL::Color Color);

        /**
         * @brief Draw a Pixel
         *
         * @param x The x-coordinate on the DrawingArea
         * @param y The y-coordinate on the DrawingArea
         * @param Color The Color-Value which would be draw
         *
         */
        void DrawPixel(const int x, const int y, const SSDL::Color Color);

        /**
         * @brief Draw a Line
         *
         * @param x1 x Start-point of the Line
         * @param y1 y Start-point of the Line
         * @param x2 x End-point of the Line
         * @param y2 y End-point of the Line
         * @param Color Color of the Line
         */
        void DrawLine(const int x1, const int y1, const int x2, const int y2, const SSDL::Color Color);

        /**
         * @brief Draw a Line with a width > 1
         *
         * @param x1 x Start-point of the Line
         * @param y1 y Start-point of the Line
         * @param x2 x End-point of the Line
         * @param y2 y End-point of the Line
         * @param width Thickness of the Line
         * @param Color Color of the Line
         */
        void DrawThickLine(const int x1, const int y1, const int x2, const int y2, const int width, const SSDL::Color Color);

        /**
         * @brief Draw a Rect
         *
         * @param x1 x Start-point of the Rect
         * @param y1 y Start-point of the Rect
         * @param x2 x End-point of the Rect
         * @param y2 y End-point of the Rect
         * @param width Thickness of the Rect
         * @param Color Color of the Rect
         */
        void DrawRect(const int x1, const int y1, const int x2, const int y2, const SSDL::Color Color);

        /**
         * @brief Draw a Circle
         *
         * @param x x-Middle of the Circle
         * @param y y-Middle of the Circle
         * @param r Radius for the Circle
         * @param Color Color of the Circle
         */
        void DrawCircle(const int x, const int y, const int r, const SSDL::Color Color);

        /**
         * @brief Draw a Ellipse
         *
         * @param x x-Middle of the Ellipse
         * @param y y-Middle of the Ellipse
         * @param rx x-Radius for the Ellipse
         * @param ry y-Radius for the Ellipse
         * @param Color Color of the Ellipse
         */
        void DrawEllipse(const int x, const int y, const int rx, const int ry, const SSDL::Color Color);

        /**
         * @brief Draw a Triangle
         *
         * @param x1 first x-Point of the Triangle
         * @param y1 first y-Point of the Triangle
         * @param x2 second x-Point of the Triangle
         * @param y2 second y-Point of the Triangle
         * @param x3 third x-Point of the Triangle
         * @param y3 third y-Point of the Triangle
         * @param Color Color of the Triangle
         */
        void DrawTriangle(const int x1, const int y1, const int x2, const int y2, const int x3, const int y3, const SSDL::Color Color);

        /**
         * @brief Fill the Surface with a color
         *
         * @param Color The Color which the surface would be filled
         */
        void Fill(const SSDL::Color Color);

        /**
         * @brief Draw a Filled Rect
         *
         * @param x1 x Start-point of the Rect
         * @param y1 y Start-point of the Rect
         * @param x2 x End-point of the Rect
         * @param y2 y End-point of the Rect
         * @param width Thickness of the Rect
         * @param Color Color of the Rect
         */
        void DrawFilledRect(const int x1, const int y1, const int x2, const int y2, const SSDL::Color Color);

        /**
         * @brief Draw a Filled Circle
         *
         * @param x x-Middle of the Circle
         * @param y y-Middle of the Circle
         * @param r Radius for the Circle
         * @param Color Color of the Circle
         */
        void DrawFilledCircle(const int x, const int y, const int r, const SSDL::Color Color);

        /**
         * @brief Draw a Filled Ellipse
         *
         * @param x x-Middle of the Ellipse
         * @param y y-Middle of the Ellipse
         * @param rx x-Radius for the Ellipse
         * @param ry y-Radius for the Ellipse
         * @param Color Color of the Ellipse
         */
        void DrawFilledEllipse(const int x, const int y, const int rx, const int ry, const SSDL::Color Color);

        /**
         * @brief Draw a Filled Triangle
         *
         * @param x1 first x-Point of the Triangle
         * @param y1 first y-Point of the Triangle
         * @param x2 second x-Point of the Triangle
         * @param y2 second y-Point of the Triangle
         * @param x3 third x-Point of the Triangle
         * @param y3 third y-Point of the Triangle
         * @param Color Color of the Triangle
         */
        void DrawFilledTriangle(const int x1, const int y1, const int x2, const int y2, const int x3, const int y3, const SSDL::Color Color);

    };
}

#endif	/* SSDL_DRAWINGAREA_HPP */

