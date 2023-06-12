/*
The gazebo/gazebo.hh file includes a core set of basic gazebo functions.
It doesn't include gazebo/physics/physics.hh, gazebo/rendering/rendering.hh,
or gazebo/sensors/sensors.hh as those should be included on a case by case basis.
*/
#include <gazebo/gazebo.hh>

// All plugins must be in the gazebo namespace.
namespace gazebo
{
  // Inherites from WorldPlugin
  class WorldPluginWelcome : public WorldPlugin
  {
    // Using/modifying the constructor from WorldPlugin
    public: WorldPluginWelcome() : WorldPlugin()
    {
      printf("Welcome to Nick's World!\n");
    }
    // "Load" is a mandatory function.
    // It receives an SDF element thatcontains the elements and
    // attributes specified in the loaded SDF file.
    public:void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
    {
    }

  };

  // the plugin must be registered with the simulator using
  // the "GZ_REGISTER_WORLD_PLUGIN" macro. The only parameter to this macro
  // is the name of the plugin class.
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginWelcome)

}
