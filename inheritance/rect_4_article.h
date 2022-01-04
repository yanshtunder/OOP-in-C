****************************************************************************/
#ifndef RECT_H
#define RECT_H

#include "shape.h" /* the base class interface */

/* Rectangle's attributes... */
typedef struct {
    Shape super; /* <== inherits Shape */

    /* attributes added by this subclass... */
    uint16_t width;
    uint16_t height;
} Rectangle;

/* constructor prototype */
void Rectangle_ctor(Rectangle * const me, int16_t x, int16_t y,
                    uint16_t width, uint16_t height);

#endif /* RECT_H */
