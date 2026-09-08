#ifndef RECTANGLE_H
#define RECTANGLE_H


class RECTANGLE
{
private:
    float length;
    float width;
public:
    void setlength(float l);
    float getlength();
    void setwidth(float w);
    float getwidth();
    float Area();

    RECTANGLE();
    ~RECTANGLE();
};
#endif // RECTANGLE_H
