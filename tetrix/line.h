#ifndef LINE_H
#define LINE_H

class Line
{
public:
    int x(int index) const { return coords[index][0]; }
    int y(int index) const { return coords[index][1]; }
    int minX() const;

private:
    void dot(int index, int x);
    void setX(int index, int x) { coords[index][0] = x; }
    void setY(int index, int y) { coords[index][1] = y; }

    int coords[4][2];
};
#endif
