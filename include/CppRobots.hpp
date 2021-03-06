/**
*   \copyright Copyright 2016 Hochschule Emden/Leer. This project is released under
* the MIT License, see the file
* LICENSE.md for rights and limitations.
*   \file CppRobots.hpp
*   \author Jan-Niklas Braak
*/

#include "version.h"
#include "Robot.hpp"
#include "Simulation.hpp"
#include "Rules.hpp"
#include "Rectangle.hpp"
#include "Vector.hpp"
#include "Projectile.hpp"
#include "Angles.hpp"
#include "Action.hpp"
#include "Collision.hpp"
#include "SignalSlot.hpp"
#include "pathUtility.hpp"
#include "Game.hpp"
#include "View.hpp"

#include "ViewConsole.hpp"

#ifdef USE_SFML
#include "ViewSFML.hpp"
#endif
