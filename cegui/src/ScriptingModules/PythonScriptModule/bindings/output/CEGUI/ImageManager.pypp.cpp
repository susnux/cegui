// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "ImageManager.pypp.hpp"

namespace bp = boost::python;

struct ImageManager_wrapper : CEGUI::ImageManager, bp::wrapper< CEGUI::ImageManager > {

    ImageManager_wrapper( )
    : CEGUI::ImageManager( )
      , bp::wrapper< CEGUI::ImageManager >(){
        // null constructor
    
    }

    virtual void elementStart( ::CEGUI::String const & element, ::CEGUI::XMLAttributes const & attributes ) {
        if( bp::override func_elementStart = this->get_override( "elementStart" ) )
            func_elementStart( boost::ref(element), boost::ref(attributes) );
        else{
            this->CEGUI::ImageManager::elementStart( boost::ref(element), boost::ref(attributes) );
        }
    }
    
    void default_elementStart( ::CEGUI::String const & element, ::CEGUI::XMLAttributes const & attributes ) {
        CEGUI::ImageManager::elementStart( boost::ref(element), boost::ref(attributes) );
    }

    virtual void elementEnd( ::CEGUI::String const & element ) {
        if( bp::override func_elementEnd = this->get_override( "elementEnd" ) )
            func_elementEnd( boost::ref(element) );
        else{
            this->CEGUI::XMLHandler::elementEnd( boost::ref(element) );
        }
    }
    
    void default_elementEnd( ::CEGUI::String const & element ) {
        CEGUI::XMLHandler::elementEnd( boost::ref(element) );
    }

    virtual void text( ::CEGUI::String const & text ) {
        if( bp::override func_text = this->get_override( "text" ) )
            func_text( boost::ref(text) );
        else{
            this->CEGUI::XMLHandler::text( boost::ref(text) );
        }
    }
    
    void default_text( ::CEGUI::String const & text ) {
        CEGUI::XMLHandler::text( boost::ref(text) );
    }

};

void register_ImageManager_class(){

    { //::CEGUI::ImageManager
        typedef bp::class_< ImageManager_wrapper, bp::bases< CEGUI::Singleton< CEGUI::ImageManager >, CEGUI::XMLHandler >, boost::noncopyable > ImageManager_exposer_t;
        ImageManager_exposer_t ImageManager_exposer = ImageManager_exposer_t( "ImageManager", bp::init< >() );
        bp::scope ImageManager_scope( ImageManager_exposer );
        { //::CEGUI::ImageManager::add
        
            typedef void ( ::CEGUI::ImageManager::*add_function_type )( ::CEGUI::Image const & ) ;
            
            ImageManager_exposer.def( 
                "add"
                , add_function_type( &::CEGUI::ImageManager::add )
                , ( bp::arg("image") )
                , "! add a copy (via Image.clone) of  image.\n" );
        
        }
        { //::CEGUI::ImageManager::addFromImageFile
        
            typedef void ( ::CEGUI::ImageManager::*addFromImageFile_function_type )( ::CEGUI::String const &,::CEGUI::String const &,::CEGUI::String const & ) ;
            
            ImageManager_exposer.def( 
                "addFromImageFile"
                , addFromImageFile_function_type( &::CEGUI::ImageManager::addFromImageFile )
                , ( bp::arg("name"), bp::arg("filename"), bp::arg("resource_group")="" ) );
        
        }
        { //::CEGUI::ImageManager::destroy
        
            typedef void ( ::CEGUI::ImageManager::*destroy_function_type )( ::CEGUI::Image & ) ;
            
            ImageManager_exposer.def( 
                "destroy"
                , destroy_function_type( &::CEGUI::ImageManager::destroy )
                , ( bp::arg("image") )
                , "! add a copy (via Image.clone) of  image.\n" );
        
        }
        { //::CEGUI::ImageManager::destroy
        
            typedef void ( ::CEGUI::ImageManager::*destroy_function_type )( ::CEGUI::String const & ) ;
            
            ImageManager_exposer.def( 
                "destroy"
                , destroy_function_type( &::CEGUI::ImageManager::destroy )
                , ( bp::arg("name") ) );
        
        }
        { //::CEGUI::ImageManager::destroyAll
        
            typedef void ( ::CEGUI::ImageManager::*destroyAll_function_type )(  ) ;
            
            ImageManager_exposer.def( 
                "destroyAll"
                , destroyAll_function_type( &::CEGUI::ImageManager::destroyAll ) );
        
        }
        { //::CEGUI::ImageManager::destroyImageCollection
        
            typedef void ( ::CEGUI::ImageManager::*destroyImageCollection_function_type )( ::CEGUI::String const &,bool const ) ;
            
            ImageManager_exposer.def( 
                "destroyImageCollection"
                , destroyImageCollection_function_type( &::CEGUI::ImageManager::destroyImageCollection )
                , ( bp::arg("prefix"), bp::arg("delete_texture")=(bool const)(true) ) );
        
        }
        { //::CEGUI::ImageManager::elementStart
        
            typedef void ( ::CEGUI::ImageManager::*elementStart_function_type )( ::CEGUI::String const &,::CEGUI::XMLAttributes const & ) ;
            typedef void ( ImageManager_wrapper::*default_elementStart_function_type )( ::CEGUI::String const &,::CEGUI::XMLAttributes const & ) ;
            
            ImageManager_exposer.def( 
                "elementStart"
                , elementStart_function_type(&::CEGUI::ImageManager::elementStart)
                , default_elementStart_function_type(&ImageManager_wrapper::default_elementStart)
                , ( bp::arg("element"), bp::arg("attributes") ) );
        
        }
        { //::CEGUI::ImageManager::get
        
            typedef ::CEGUI::Image & ( ::CEGUI::ImageManager::*get_function_type )( ::CEGUI::String const & ) const;
            
            ImageManager_exposer.def( 
                "get"
                , get_function_type( &::CEGUI::ImageManager::get )
                , ( bp::arg("name") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::ImageManager::getImageCount
        
            typedef ::CEGUI::uint ( ::CEGUI::ImageManager::*getImageCount_function_type )(  ) const;
            
            ImageManager_exposer.def( 
                "getImageCount"
                , getImageCount_function_type( &::CEGUI::ImageManager::getImageCount ) );
        
        }
        { //::CEGUI::ImageManager::getImagesetDefaultResourceGroup
        
            typedef ::CEGUI::String const & ( *getImagesetDefaultResourceGroup_function_type )(  );
            
            ImageManager_exposer.def( 
                "getImagesetDefaultResourceGroup"
                , getImagesetDefaultResourceGroup_function_type( &::CEGUI::ImageManager::getImagesetDefaultResourceGroup )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                \n\
                    Returns the default resource group currently set for Imagesets.\n\
            \n\
                @return\n\
                    String describing the default resource group identifier that will be\n\
                    used when loading Imageset data.\n\
                *\n" );
        
        }
        { //::CEGUI::ImageManager::isDefined
        
            typedef bool ( ::CEGUI::ImageManager::*isDefined_function_type )( ::CEGUI::String const & ) const;
            
            ImageManager_exposer.def( 
                "isDefined"
                , isDefined_function_type( &::CEGUI::ImageManager::isDefined )
                , ( bp::arg("name") ) );
        
        }
        { //::CEGUI::ImageManager::loadImageset
        
            typedef void ( ::CEGUI::ImageManager::*loadImageset_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            
            ImageManager_exposer.def( 
                "loadImageset"
                , loadImageset_function_type( &::CEGUI::ImageManager::loadImageset )
                , ( bp::arg("filename"), bp::arg("resource_group")="" ) );
        
        }
        { //::CEGUI::ImageManager::notifyDisplaySizeChanged
        
            typedef void ( ::CEGUI::ImageManager::*notifyDisplaySizeChanged_function_type )( ::CEGUI::Sizef const & ) ;
            
            ImageManager_exposer.def( 
                "notifyDisplaySizeChanged"
                , notifyDisplaySizeChanged_function_type( &::CEGUI::ImageManager::notifyDisplaySizeChanged )
                , ( bp::arg("size") )
                , "*!\n\
                \n\
                    Notify the ImageManager that the display size may have changed.\n\
            \n\
                @param size\n\
                    Size object describing the display resolution\n\
                *\n" );
        
        }
        { //::CEGUI::ImageManager::setImagesetDefaultResourceGroup
        
            typedef void ( *setImagesetDefaultResourceGroup_function_type )( ::CEGUI::String const & );
            
            ImageManager_exposer.def( 
                "setImagesetDefaultResourceGroup"
                , setImagesetDefaultResourceGroup_function_type( &::CEGUI::ImageManager::setImagesetDefaultResourceGroup )
                , ( bp::arg("resourceGroup") )
                , "*!\n\
                \n\
                    Sets the default resource group to be used when loading imageset data\n\
            \n\
                @param resourceGroup\n\
                    String describing the default resource group identifier to be used.\n\
                *\n" );
        
        }
        { //::CEGUI::XMLHandler::elementEnd
        
            typedef void ( ::CEGUI::XMLHandler::*elementEnd_function_type )( ::CEGUI::String const & ) ;
            typedef void ( ImageManager_wrapper::*default_elementEnd_function_type )( ::CEGUI::String const & ) ;
            
            ImageManager_exposer.def( 
                "elementEnd"
                , elementEnd_function_type(&::CEGUI::XMLHandler::elementEnd)
                , default_elementEnd_function_type(&ImageManager_wrapper::default_elementEnd)
                , ( bp::arg("element") ) );
        
        }
        { //::CEGUI::XMLHandler::text
        
            typedef void ( ::CEGUI::XMLHandler::*text_function_type )( ::CEGUI::String const & ) ;
            typedef void ( ImageManager_wrapper::*default_text_function_type )( ::CEGUI::String const & ) ;
            
            ImageManager_exposer.def( 
                "text"
                , text_function_type(&::CEGUI::XMLHandler::text)
                , default_text_function_type(&ImageManager_wrapper::default_text)
                , ( bp::arg("text") ) );
        
        }
        ImageManager_exposer.staticmethod( "getImagesetDefaultResourceGroup" );
        ImageManager_exposer.staticmethod( "setImagesetDefaultResourceGroup" );
    }

}
