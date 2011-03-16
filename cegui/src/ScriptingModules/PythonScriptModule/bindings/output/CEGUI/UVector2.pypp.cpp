// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "UVector2.pypp.hpp"

namespace bp = boost::python;

void register_UVector2_class(){

    { //::CEGUI::Vector2< CEGUI::UDim >
        typedef bp::class_< CEGUI::Vector2< CEGUI::UDim > > UVector2_exposer_t;
        UVector2_exposer_t UVector2_exposer = UVector2_exposer_t( "UVector2", bp::init< >() );
        bp::scope UVector2_scope( UVector2_exposer );
        UVector2_exposer.def( bp::init< CEGUI::UDim const &, CEGUI::UDim const & >(( bp::arg("x"), bp::arg("y") )) );
        UVector2_exposer.def( bp::init< CEGUI::Vector2< CEGUI::UDim > const & >(( bp::arg("v") )) );
        UVector2_exposer.def( bp::self != bp::self );
        UVector2_exposer.def( bp::self * bp::self );
        UVector2_exposer.def( bp::self * bp::other< CEGUI::UDim >() );
        UVector2_exposer.def( bp::self *= bp::self );
        UVector2_exposer.def( bp::self *= bp::other< CEGUI::UDim >() );
        UVector2_exposer.def( bp::self + bp::self );
        UVector2_exposer.def( bp::self += bp::self );
        UVector2_exposer.def( bp::self - bp::self );
        UVector2_exposer.def( bp::self -= bp::self );
        UVector2_exposer.def( bp::self / bp::self );
        UVector2_exposer.def( bp::self / bp::other< CEGUI::UDim >() );
        UVector2_exposer.def( bp::self /= bp::self );
        UVector2_exposer.def( bp::self == bp::self );
        UVector2_exposer.def_readwrite( "d_x", &CEGUI::Vector2< CEGUI::UDim >::d_x );
        UVector2_exposer.def_readwrite( "d_y", &CEGUI::Vector2< CEGUI::UDim >::d_y );
    }

}
