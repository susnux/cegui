// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "HorizontalLayoutContainer.pypp.hpp"

namespace bp = boost::python;

struct HorizontalLayoutContainer_wrapper : CEGUI::HorizontalLayoutContainer, bp::wrapper< CEGUI::HorizontalLayoutContainer > {

    HorizontalLayoutContainer_wrapper(::CEGUI::String const & type, ::CEGUI::String const & name )
    : CEGUI::HorizontalLayoutContainer( boost::ref(type), boost::ref(name) )
      , bp::wrapper< CEGUI::HorizontalLayoutContainer >(){
        // constructor
    
    }

    virtual void layout(  ) {
        if( bp::override func_layout = this->get_override( "layout" ) )
            func_layout(  );
        else{
            this->CEGUI::HorizontalLayoutContainer::layout(  );
        }
    }
    
    void default_layout(  ) {
        CEGUI::HorizontalLayoutContainer::layout( );
    }

    virtual void beginInitialisation(  ) {
        if( bp::override func_beginInitialisation = this->get_override( "beginInitialisation" ) )
            func_beginInitialisation(  );
        else{
            this->CEGUI::Window::beginInitialisation(  );
        }
    }
    
    void default_beginInitialisation(  ) {
        CEGUI::Window::beginInitialisation( );
    }

    virtual void cloneChildWidgetsTo( ::CEGUI::Window & target ) const  {
        if( bp::override func_cloneChildWidgetsTo = this->get_override( "cloneChildWidgetsTo" ) )
            func_cloneChildWidgetsTo( boost::ref(target) );
        else{
            this->CEGUI::Window::cloneChildWidgetsTo( boost::ref(target) );
        }
    }
    
    void default_cloneChildWidgetsTo( ::CEGUI::Window & target ) const  {
        CEGUI::Window::cloneChildWidgetsTo( boost::ref(target) );
    }

    virtual void clonePropertiesTo( ::CEGUI::Window & target ) const  {
        if( bp::override func_clonePropertiesTo = this->get_override( "clonePropertiesTo" ) )
            func_clonePropertiesTo( boost::ref(target) );
        else{
            this->CEGUI::Window::clonePropertiesTo( boost::ref(target) );
        }
    }
    
    void default_clonePropertiesTo( ::CEGUI::Window & target ) const  {
        CEGUI::Window::clonePropertiesTo( boost::ref(target) );
    }

    virtual void destroy(  ) {
        if( bp::override func_destroy = this->get_override( "destroy" ) )
            func_destroy(  );
        else{
            this->CEGUI::Window::destroy(  );
        }
    }
    
    void default_destroy(  ) {
        CEGUI::Window::destroy( );
    }

    virtual void endInitialisation(  ) {
        if( bp::override func_endInitialisation = this->get_override( "endInitialisation" ) )
            func_endInitialisation(  );
        else{
            this->CEGUI::Window::endInitialisation(  );
        }
    }
    
    void default_endInitialisation(  ) {
        CEGUI::Window::endInitialisation( );
    }

    virtual void fireEvent( ::CEGUI::String const & name, ::CEGUI::EventArgs & args, ::CEGUI::String const & eventNamespace="" ) {
        if( bp::override func_fireEvent = this->get_override( "fireEvent" ) )
            func_fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
        else{
            this->CEGUI::EventSet::fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
        }
    }
    
    void default_fireEvent( ::CEGUI::String const & name, ::CEGUI::EventArgs & args, ::CEGUI::String const & eventNamespace="" ) {
        CEGUI::EventSet::fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
    }

    virtual void getRenderingContext_impl( ::CEGUI::RenderingContext & ctx ) const  {
        if( bp::override func_getRenderingContext_impl = this->get_override( "getRenderingContext_impl" ) )
            func_getRenderingContext_impl( boost::ref(ctx) );
        else{
            this->CEGUI::Window::getRenderingContext_impl( boost::ref(ctx) );
        }
    }
    
    void default_getRenderingContext_impl( ::CEGUI::RenderingContext & ctx ) const  {
        CEGUI::Window::getRenderingContext_impl( boost::ref(ctx) );
    }

    virtual ::CEGUI::Rectf getUnclippedInnerRect_impl(  ) const  {
        if( bp::override func_getUnclippedInnerRect_impl = this->get_override( "getUnclippedInnerRect_impl" ) )
            return func_getUnclippedInnerRect_impl(  );
        else{
            return this->CEGUI::LayoutContainer::getUnclippedInnerRect_impl(  );
        }
    }
    
    ::CEGUI::Rectf default_getUnclippedInnerRect_impl(  ) const  {
        return CEGUI::LayoutContainer::getUnclippedInnerRect_impl( );
    }

    virtual void initialiseComponents(  ) {
        if( bp::override func_initialiseComponents = this->get_override( "initialiseComponents" ) )
            func_initialiseComponents(  );
        else{
            this->CEGUI::Window::initialiseComponents(  );
        }
    }
    
    void default_initialiseComponents(  ) {
        CEGUI::Window::initialiseComponents( );
    }

    virtual bool isHit( ::CEGUI::Vector2f const & position, bool const allow_disabled=false ) const  {
        if( bp::override func_isHit = this->get_override( "isHit" ) )
            return func_isHit( boost::ref(position), allow_disabled );
        else{
            return this->CEGUI::Window::isHit( boost::ref(position), allow_disabled );
        }
    }
    
    bool default_isHit( ::CEGUI::Vector2f const & position, bool const allow_disabled=false ) const  {
        return CEGUI::Window::isHit( boost::ref(position), allow_disabled );
    }

    virtual void layoutIfNecessary(  ) {
        if( bp::override func_layoutIfNecessary = this->get_override( "layoutIfNecessary" ) )
            func_layoutIfNecessary(  );
        else{
            this->CEGUI::LayoutContainer::layoutIfNecessary(  );
        }
    }
    
    void default_layoutIfNecessary(  ) {
        CEGUI::LayoutContainer::layoutIfNecessary( );
    }

    virtual void moveChildToPosition( ::CEGUI::Window * wnd, ::size_t position ) {
        if( bp::override func_moveChildToPosition = this->get_override( "moveChildToPosition" ) )
            func_moveChildToPosition( boost::python::ptr(wnd), position );
        else{
            this->CEGUI::SequentialLayoutContainer::moveChildToPosition( boost::python::ptr(wnd), position );
        }
    }
    
    void default_moveChildToPosition( ::CEGUI::Window * wnd, ::size_t position ) {
        CEGUI::SequentialLayoutContainer::moveChildToPosition( boost::python::ptr(wnd), position );
    }

    virtual void performChildWindowLayout(  ) {
        if( bp::override func_performChildWindowLayout = this->get_override( "performChildWindowLayout" ) )
            func_performChildWindowLayout(  );
        else{
            this->CEGUI::Window::performChildWindowLayout(  );
        }
    }
    
    void default_performChildWindowLayout(  ) {
        CEGUI::Window::performChildWindowLayout( );
    }

    virtual void setLookNFeel( ::CEGUI::String const & look ) {
        if( bp::override func_setLookNFeel = this->get_override( "setLookNFeel" ) )
            func_setLookNFeel( boost::ref(look) );
        else{
            this->CEGUI::Window::setLookNFeel( boost::ref(look) );
        }
    }
    
    void default_setLookNFeel( ::CEGUI::String const & look ) {
        CEGUI::Window::setLookNFeel( boost::ref(look) );
    }

    virtual void setMargin( ::CEGUI::UBox const & margin ) {
        if( bp::override func_setMargin = this->get_override( "setMargin" ) )
            func_setMargin( boost::ref(margin) );
        else{
            this->CEGUI::Window::setMargin( boost::ref(margin) );
        }
    }
    
    void default_setMargin( ::CEGUI::UBox const & margin ) {
        CEGUI::Window::setMargin( boost::ref(margin) );
    }

    virtual ::CEGUI::RefCounted< CEGUI::BoundSlot > subscribeScriptedEvent( ::CEGUI::String const & name, ::CEGUI::String const & subscriber_name ) {
        if( bp::override func_subscribeScriptedEvent = this->get_override( "subscribeScriptedEvent" ) )
            return func_subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
        else{
            return this->CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
        }
    }
    
    ::CEGUI::RefCounted< CEGUI::BoundSlot > default_subscribeScriptedEvent( ::CEGUI::String const & name, ::CEGUI::String const & subscriber_name ) {
        return CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
    }

    virtual ::CEGUI::RefCounted< CEGUI::BoundSlot > subscribeScriptedEvent( ::CEGUI::String const & name, unsigned int group, ::CEGUI::String const & subscriber_name ) {
        if( bp::override func_subscribeScriptedEvent = this->get_override( "subscribeScriptedEvent" ) )
            return func_subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
        else{
            return this->CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
        }
    }
    
    ::CEGUI::RefCounted< CEGUI::BoundSlot > default_subscribeScriptedEvent( ::CEGUI::String const & name, unsigned int group, ::CEGUI::String const & subscriber_name ) {
        return CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
    }

    virtual void swapChildPositions( ::size_t wnd1, ::size_t wnd2 ) {
        if( bp::override func_swapChildPositions = this->get_override( "swapChildPositions" ) )
            func_swapChildPositions( wnd1, wnd2 );
        else{
            this->CEGUI::SequentialLayoutContainer::swapChildPositions( wnd1, wnd2 );
        }
    }
    
    void default_swapChildPositions( ::size_t wnd1, ::size_t wnd2 ) {
        CEGUI::SequentialLayoutContainer::swapChildPositions( wnd1, wnd2 );
    }

    virtual void update( float elapsed ) {
        if( bp::override func_update = this->get_override( "update" ) )
            func_update( elapsed );
        else{
            this->CEGUI::LayoutContainer::update( elapsed );
        }
    }
    
    void default_update( float elapsed ) {
        CEGUI::LayoutContainer::update( elapsed );
    }

    virtual void writeXMLToStream( ::CEGUI::XMLSerializer & xml_stream ) const  {
        if( bp::override func_writeXMLToStream = this->get_override( "writeXMLToStream" ) )
            func_writeXMLToStream( boost::ref(xml_stream) );
        else{
            this->CEGUI::Window::writeXMLToStream( boost::ref(xml_stream) );
        }
    }
    
    void default_writeXMLToStream( ::CEGUI::XMLSerializer & xml_stream ) const  {
        CEGUI::Window::writeXMLToStream( boost::ref(xml_stream) );
    }

};

void register_HorizontalLayoutContainer_class(){

    { //::CEGUI::HorizontalLayoutContainer
        typedef bp::class_< HorizontalLayoutContainer_wrapper, bp::bases< CEGUI::SequentialLayoutContainer >, boost::noncopyable > HorizontalLayoutContainer_exposer_t;
        HorizontalLayoutContainer_exposer_t HorizontalLayoutContainer_exposer = HorizontalLayoutContainer_exposer_t( "HorizontalLayoutContainer", "*!\n\
        \n\
            A Layout Container window layouting it's children Horizontally\n\
        *\n", bp::init< CEGUI::String const &, CEGUI::String const & >(( bp::arg("type"), bp::arg("name") ), "*************************************************************************\n\
            Construction and Destruction\n\
        *************************************************************************\n\
        *!\n\
        \n\
            Constructor for GUISheet windows.\n\
        *\n") );
        bp::scope HorizontalLayoutContainer_scope( HorizontalLayoutContainer_exposer );
        { //::CEGUI::HorizontalLayoutContainer::layout
        
            typedef void ( ::CEGUI::HorizontalLayoutContainer::*layout_function_type )(  ) ;
            typedef void ( HorizontalLayoutContainer_wrapper::*default_layout_function_type )(  ) ;
            
            HorizontalLayoutContainer_exposer.def( 
                "layout"
                , layout_function_type(&::CEGUI::HorizontalLayoutContainer::layout)
                , default_layout_function_type(&HorizontalLayoutContainer_wrapper::default_layout) );
        
        }
        { //::CEGUI::Window::beginInitialisation
        
            typedef void ( ::CEGUI::Window::*beginInitialisation_function_type )(  ) ;
            typedef void ( HorizontalLayoutContainer_wrapper::*default_beginInitialisation_function_type )(  ) ;
            
            HorizontalLayoutContainer_exposer.def( 
                "beginInitialisation"
                , beginInitialisation_function_type(&::CEGUI::Window::beginInitialisation)
                , default_beginInitialisation_function_type(&HorizontalLayoutContainer_wrapper::default_beginInitialisation) );
        
        }
        { //::CEGUI::Window::cloneChildWidgetsTo
        
            typedef void ( ::CEGUI::Window::*cloneChildWidgetsTo_function_type )( ::CEGUI::Window & ) const;
            typedef void ( HorizontalLayoutContainer_wrapper::*default_cloneChildWidgetsTo_function_type )( ::CEGUI::Window & ) const;
            
            HorizontalLayoutContainer_exposer.def( 
                "cloneChildWidgetsTo"
                , cloneChildWidgetsTo_function_type(&::CEGUI::Window::cloneChildWidgetsTo)
                , default_cloneChildWidgetsTo_function_type(&HorizontalLayoutContainer_wrapper::default_cloneChildWidgetsTo)
                , ( bp::arg("target") ) );
        
        }
        { //::CEGUI::Window::clonePropertiesTo
        
            typedef void ( ::CEGUI::Window::*clonePropertiesTo_function_type )( ::CEGUI::Window & ) const;
            typedef void ( HorizontalLayoutContainer_wrapper::*default_clonePropertiesTo_function_type )( ::CEGUI::Window & ) const;
            
            HorizontalLayoutContainer_exposer.def( 
                "clonePropertiesTo"
                , clonePropertiesTo_function_type(&::CEGUI::Window::clonePropertiesTo)
                , default_clonePropertiesTo_function_type(&HorizontalLayoutContainer_wrapper::default_clonePropertiesTo)
                , ( bp::arg("target") ) );
        
        }
        { //::CEGUI::Window::destroy
        
            typedef void ( ::CEGUI::Window::*destroy_function_type )(  ) ;
            typedef void ( HorizontalLayoutContainer_wrapper::*default_destroy_function_type )(  ) ;
            
            HorizontalLayoutContainer_exposer.def( 
                "destroy"
                , destroy_function_type(&::CEGUI::Window::destroy)
                , default_destroy_function_type(&HorizontalLayoutContainer_wrapper::default_destroy) );
        
        }
        { //::CEGUI::Window::endInitialisation
        
            typedef void ( ::CEGUI::Window::*endInitialisation_function_type )(  ) ;
            typedef void ( HorizontalLayoutContainer_wrapper::*default_endInitialisation_function_type )(  ) ;
            
            HorizontalLayoutContainer_exposer.def( 
                "endInitialisation"
                , endInitialisation_function_type(&::CEGUI::Window::endInitialisation)
                , default_endInitialisation_function_type(&HorizontalLayoutContainer_wrapper::default_endInitialisation) );
        
        }
        { //::CEGUI::EventSet::fireEvent
        
            typedef void ( ::CEGUI::EventSet::*fireEvent_function_type )( ::CEGUI::String const &,::CEGUI::EventArgs &,::CEGUI::String const & ) ;
            typedef void ( HorizontalLayoutContainer_wrapper::*default_fireEvent_function_type )( ::CEGUI::String const &,::CEGUI::EventArgs &,::CEGUI::String const & ) ;
            
            HorizontalLayoutContainer_exposer.def( 
                "fireEvent"
                , fireEvent_function_type(&::CEGUI::EventSet::fireEvent)
                , default_fireEvent_function_type(&HorizontalLayoutContainer_wrapper::default_fireEvent)
                , ( bp::arg("name"), bp::arg("args"), bp::arg("eventNamespace")="" ) );
        
        }
        { //::CEGUI::Window::getRenderedStringParser
        
            typedef ::CEGUI::RenderedStringParser & ( ::CEGUI::Window::*getRenderedStringParser_function_type )(  ) const;
            
            HorizontalLayoutContainer_exposer.def( 
                "getRenderedStringParser"
                , getRenderedStringParser_function_type(&::CEGUI::Window::getRenderedStringParser)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::Window::getRenderingContext_impl
        
            typedef void ( ::CEGUI::Window::*getRenderingContext_impl_function_type )( ::CEGUI::RenderingContext & ) const;
            typedef void ( HorizontalLayoutContainer_wrapper::*default_getRenderingContext_impl_function_type )( ::CEGUI::RenderingContext & ) const;
            
            HorizontalLayoutContainer_exposer.def( 
                "getRenderingContext_impl"
                , getRenderingContext_impl_function_type(&::CEGUI::Window::getRenderingContext_impl)
                , default_getRenderingContext_impl_function_type(&HorizontalLayoutContainer_wrapper::default_getRenderingContext_impl)
                , ( bp::arg("ctx") ) );
        
        }
        { //::CEGUI::LayoutContainer::getUnclippedInnerRect_impl
        
            typedef ::CEGUI::Rectf ( ::CEGUI::LayoutContainer::*getUnclippedInnerRect_impl_function_type )(  ) const;
            typedef ::CEGUI::Rectf ( HorizontalLayoutContainer_wrapper::*default_getUnclippedInnerRect_impl_function_type )(  ) const;
            
            HorizontalLayoutContainer_exposer.def( 
                "getUnclippedInnerRect_impl"
                , getUnclippedInnerRect_impl_function_type(&::CEGUI::LayoutContainer::getUnclippedInnerRect_impl)
                , default_getUnclippedInnerRect_impl_function_type(&HorizontalLayoutContainer_wrapper::default_getUnclippedInnerRect_impl) );
        
        }
        { //::CEGUI::Window::initialiseComponents
        
            typedef void ( ::CEGUI::Window::*initialiseComponents_function_type )(  ) ;
            typedef void ( HorizontalLayoutContainer_wrapper::*default_initialiseComponents_function_type )(  ) ;
            
            HorizontalLayoutContainer_exposer.def( 
                "initialiseComponents"
                , initialiseComponents_function_type(&::CEGUI::Window::initialiseComponents)
                , default_initialiseComponents_function_type(&HorizontalLayoutContainer_wrapper::default_initialiseComponents) );
        
        }
        { //::CEGUI::Window::isHit
        
            typedef bool ( ::CEGUI::Window::*isHit_function_type )( ::CEGUI::Vector2f const &,bool const ) const;
            typedef bool ( HorizontalLayoutContainer_wrapper::*default_isHit_function_type )( ::CEGUI::Vector2f const &,bool const ) const;
            
            HorizontalLayoutContainer_exposer.def( 
                "isHit"
                , isHit_function_type(&::CEGUI::Window::isHit)
                , default_isHit_function_type(&HorizontalLayoutContainer_wrapper::default_isHit)
                , ( bp::arg("position"), bp::arg("allow_disabled")=(bool const)(false) ) );
        
        }
        { //::CEGUI::LayoutContainer::layoutIfNecessary
        
            typedef void ( ::CEGUI::LayoutContainer::*layoutIfNecessary_function_type )(  ) ;
            typedef void ( HorizontalLayoutContainer_wrapper::*default_layoutIfNecessary_function_type )(  ) ;
            
            HorizontalLayoutContainer_exposer.def( 
                "layoutIfNecessary"
                , layoutIfNecessary_function_type(&::CEGUI::LayoutContainer::layoutIfNecessary)
                , default_layoutIfNecessary_function_type(&HorizontalLayoutContainer_wrapper::default_layoutIfNecessary) );
        
        }
        { //::CEGUI::SequentialLayoutContainer::moveChildToPosition
        
            typedef void ( ::CEGUI::SequentialLayoutContainer::*moveChildToPosition_function_type )( ::CEGUI::Window *,::size_t ) ;
            typedef void ( HorizontalLayoutContainer_wrapper::*default_moveChildToPosition_function_type )( ::CEGUI::Window *,::size_t ) ;
            
            HorizontalLayoutContainer_exposer.def( 
                "moveChildToPosition"
                , moveChildToPosition_function_type(&::CEGUI::SequentialLayoutContainer::moveChildToPosition)
                , default_moveChildToPosition_function_type(&HorizontalLayoutContainer_wrapper::default_moveChildToPosition)
                , ( bp::arg("wnd"), bp::arg("position") ) );
        
        }
        { //::CEGUI::SequentialLayoutContainer::moveChildToPosition
        
            typedef void ( ::CEGUI::SequentialLayoutContainer::*moveChildToPosition_function_type )( ::CEGUI::String const &,::size_t ) ;
            
            HorizontalLayoutContainer_exposer.def( 
                "moveChildToPosition"
                , moveChildToPosition_function_type( &::CEGUI::SequentialLayoutContainer::moveChildToPosition )
                , ( bp::arg("wnd"), bp::arg("position") )
                , "*!\n\
            \n\
                Moves a window that is alrady child of thi layout container\n\
                to given position (if the window is currently in a position\n\
                that is smaller than given position, given position is\n\
                automatically decremented\n\
            *\n" );
        
        }
        { //::CEGUI::Window::performChildWindowLayout
        
            typedef void ( ::CEGUI::Window::*performChildWindowLayout_function_type )(  ) ;
            typedef void ( HorizontalLayoutContainer_wrapper::*default_performChildWindowLayout_function_type )(  ) ;
            
            HorizontalLayoutContainer_exposer.def( 
                "performChildWindowLayout"
                , performChildWindowLayout_function_type(&::CEGUI::Window::performChildWindowLayout)
                , default_performChildWindowLayout_function_type(&HorizontalLayoutContainer_wrapper::default_performChildWindowLayout) );
        
        }
        { //::CEGUI::Window::setLookNFeel
        
            typedef void ( ::CEGUI::Window::*setLookNFeel_function_type )( ::CEGUI::String const & ) ;
            typedef void ( HorizontalLayoutContainer_wrapper::*default_setLookNFeel_function_type )( ::CEGUI::String const & ) ;
            
            HorizontalLayoutContainer_exposer.def( 
                "setLookNFeel"
                , setLookNFeel_function_type(&::CEGUI::Window::setLookNFeel)
                , default_setLookNFeel_function_type(&HorizontalLayoutContainer_wrapper::default_setLookNFeel)
                , ( bp::arg("look") ) );
        
        }
        { //::CEGUI::Window::setMargin
        
            typedef void ( ::CEGUI::Window::*setMargin_function_type )( ::CEGUI::UBox const & ) ;
            typedef void ( HorizontalLayoutContainer_wrapper::*default_setMargin_function_type )( ::CEGUI::UBox const & ) ;
            
            HorizontalLayoutContainer_exposer.def( 
                "setMargin"
                , setMargin_function_type(&::CEGUI::Window::setMargin)
                , default_setMargin_function_type(&HorizontalLayoutContainer_wrapper::default_setMargin)
                , ( bp::arg("margin") ) );
        
        }
        { //::CEGUI::EventSet::subscribeScriptedEvent
        
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( ::CEGUI::EventSet::*subscribeScriptedEvent_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( HorizontalLayoutContainer_wrapper::*default_subscribeScriptedEvent_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            
            HorizontalLayoutContainer_exposer.def( 
                "subscribeScriptedEvent"
                , subscribeScriptedEvent_function_type(&::CEGUI::EventSet::subscribeScriptedEvent)
                , default_subscribeScriptedEvent_function_type(&HorizontalLayoutContainer_wrapper::default_subscribeScriptedEvent)
                , ( bp::arg("name"), bp::arg("subscriber_name") ) );
        
        }
        { //::CEGUI::EventSet::subscribeScriptedEvent
        
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( ::CEGUI::EventSet::*subscribeScriptedEvent_function_type )( ::CEGUI::String const &,unsigned int,::CEGUI::String const & ) ;
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( HorizontalLayoutContainer_wrapper::*default_subscribeScriptedEvent_function_type )( ::CEGUI::String const &,unsigned int,::CEGUI::String const & ) ;
            
            HorizontalLayoutContainer_exposer.def( 
                "subscribeScriptedEvent"
                , subscribeScriptedEvent_function_type(&::CEGUI::EventSet::subscribeScriptedEvent)
                , default_subscribeScriptedEvent_function_type(&HorizontalLayoutContainer_wrapper::default_subscribeScriptedEvent)
                , ( bp::arg("name"), bp::arg("group"), bp::arg("subscriber_name") ) );
        
        }
        { //::CEGUI::SequentialLayoutContainer::swapChildPositions
        
            typedef void ( ::CEGUI::SequentialLayoutContainer::*swapChildPositions_function_type )( ::size_t,::size_t ) ;
            typedef void ( HorizontalLayoutContainer_wrapper::*default_swapChildPositions_function_type )( ::size_t,::size_t ) ;
            
            HorizontalLayoutContainer_exposer.def( 
                "swapChildPositions"
                , swapChildPositions_function_type(&::CEGUI::SequentialLayoutContainer::swapChildPositions)
                , default_swapChildPositions_function_type(&HorizontalLayoutContainer_wrapper::default_swapChildPositions)
                , ( bp::arg("wnd1"), bp::arg("wnd2") ) );
        
        }
        { //::CEGUI::LayoutContainer::update
        
            typedef void ( ::CEGUI::LayoutContainer::*update_function_type )( float ) ;
            typedef void ( HorizontalLayoutContainer_wrapper::*default_update_function_type )( float ) ;
            
            HorizontalLayoutContainer_exposer.def( 
                "update"
                , update_function_type(&::CEGUI::LayoutContainer::update)
                , default_update_function_type(&HorizontalLayoutContainer_wrapper::default_update)
                , ( bp::arg("elapsed") ) );
        
        }
        { //::CEGUI::Window::writeXMLToStream
        
            typedef void ( ::CEGUI::Window::*writeXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            typedef void ( HorizontalLayoutContainer_wrapper::*default_writeXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            HorizontalLayoutContainer_exposer.def( 
                "writeXMLToStream"
                , writeXMLToStream_function_type(&::CEGUI::Window::writeXMLToStream)
                , default_writeXMLToStream_function_type(&HorizontalLayoutContainer_wrapper::default_writeXMLToStream)
                , ( bp::arg("xml_stream") ) );
        
        }
    }

}
