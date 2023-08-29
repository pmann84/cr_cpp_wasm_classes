#include <emscripten/bind.h>

#include "Vector.hpp"
#include "Particle.hpp"

EMSCRIPTEN_BINDINGS(MyLibrary) {
    emscripten::class_<Vector2>("Vector2");

    emscripten::class_<Particle>("Particle")
            .constructor<Vector2, float>();
//        emscripten::class_<Vector2>("Vector2")
//                .constructor<double, double>()
//                .function("at", emscripten::select_overload<const double&(unsigned int) const>(&Vector2::operator[]));
//
//        emscripten::class_<Body>("Body")
//        .function("position", emscripten::select_overload<Vector2() const>(&Body::Position))
//        .function("radius", emscripten::select_overload<double() const>(&Body::Radius));
//
//        emscripten::class_<Simulation>("Simulation")
//        .constructor()
//        .function("addBody", emscripten::select_overload<void(double, double, Vector2, Vector2, bool)>(&Simulation::AddBody))
//        .function("update", &Simulation::Update)
//        .function("reset", &Simulation::Reset)
//        .function("pause", &Simulation::Pause)
//        .function("isPaused", &Simulation::IsPaused)
//        .function("bodyCount", &Simulation::BodyCount)
//        .function("bodies", &Simulation::Bodies)
//        .function("getG", emscripten::select_overload<double() const>(&Simulation::G))
//        .function("setG", emscripten::select_overload<void(double)>(&Simulation::G))
//        .function("setGWithScales", emscripten::select_overload<void(double, double, double)>(&Simulation::G))
//        .function("soften", &Simulation::soften)
//        .function("getDt", emscripten::select_overload<double() const>(&Simulation::dt))
//        .function("setDt", emscripten::select_overload<void(double)>(&Simulation::dt))
//        .function("centerOfMass", &Simulation::centerOfMass);
//
//        emscripten::register_vector<Body>("BodyVector");
}