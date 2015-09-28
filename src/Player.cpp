/**
*   \copyright Copyright 2015 Jan-Niklas Braak. This project is released under
* the MIT License, see the file LICENSE.md for rights and limitations.
*   \file Player.cpp
*   \author Jan-Niklas Braak
*/

#include "Player.hpp"

Player::Player(const double &timeStep, const sf::Vector2f &size)
    : robot(timeStep), rectangle(size) {
  rectangle.setOrigin(0.5 * size.x, 0.5 * size.y);
}

Player::Player(Player &&player) noexcept
    : robot(std::move(player.robot)),
      agent(std::move(player.agent)),
      rectangle(std::move(player.rectangle)) {}

void Player::update() {
  if (!agent) {
    throw std::exception();
  }
  Robot::Action action = agent->update(robot);

  robot.update(action);

  Pose pose = robot.getPose();
  rectangle.setPosition(pose.x, pose.y);
  rectangle.setRotation(pose.theta * 180.0 / M_PI);
}

void Player::setAgent(Agent *agent_) { agent = std::unique_ptr<Agent>(agent_); }
void Player::setPose(Pose pose) { robot.setPose(pose); }
Pose Player::getPose() const { return robot.getPose(); }

void Player::draw(sf::RenderTarget &target, sf::RenderStates states) const {
  target.draw(rectangle, states);
}
