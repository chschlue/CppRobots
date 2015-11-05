/**
*   \copyright Copyright 2015 Jan-Niklas Braak. This project is released under
* the MIT License, see the file
* LICENSE.md for rights and limitations.
*   \file Bullet.hpp
*   \author Jan-Niklas Braak
*/

#ifndef __PROJECTILE__
#define __PROJECTILE__

#include "Rules.hpp"
#include "Rectangle.hpp"
#include "Vector.hpp"

class Projectile {
  const Rules &rules;
  Rectangle body;

public:
  Projectile(const Rules &rules, Vector_d position, double direction);
  void update();
  const Rectangle &getBody() const;
};

#endif /* end of include guard: __PROJECTILE__ */