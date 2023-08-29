#include "Particle.hpp"

Particle::Particle(Vector2 position, float radius): m_position(position), m_radius(radius)
{
}

float Particle::Radius() const
{
    return m_radius;
}

void Particle::Radius(float radius)
{
    m_radius = radius;
}

Vector2 Particle::Position() const
{
    return m_position;
}

void Particle::Position(Vector2 position)
{
    m_position = position;
}
