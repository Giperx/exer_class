//
// Created by Giperx on 2022/5/30.
//

#ifndef EXER_CLASS_POINT_H
#define EXER_CLASS_POINT_H

class Point {
private:
    int _x, _y;
public:
    Point();
    Point(int x, int y);
    Point operator++();
    Point operator--();
    void show();
};


#endif //EXER_CLASS_POINT_H
