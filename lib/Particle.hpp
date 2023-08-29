#pragma once

#include "Vector.hpp"

class Particle
{
public:
    Particle(Vector2 position, float radius);

    float Radius() const;
    void Radius(float radius);

    Vector2 Position() const;
    void Position(Vector2 position);

private:
    float m_radius;
    Vector2 m_position;
};
