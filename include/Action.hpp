/**
*   \copyright Copyright 2016 Hochschule Emden/Leer. This project is released
* under
* the MIT License, see the file
* LICENSE.md for rights and limitations.
*   \file Action.hpp
*   \author Jan-Niklas Braak
*/

#ifndef __ACTION__
#define __ACTION__

/**
\brief  Action to be perfomed by a Robot during a timeStep.
*/
struct Action {
  double v;           //!< The desired speed of the Robot.
  double w;           //!< The desired turning rate of the Robot.
  double turretAngle; //<! The desired angle of the turret.
  bool shooting;      //<! Whether to shoot or not.
};

#endif /* end of include guard: __ACTION__ */
