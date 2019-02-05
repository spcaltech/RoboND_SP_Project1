/*
  * Copyright (C) 2016 Open Source Robotics Foundation
  *
  * Licensed under the Apache License, Version 2.0 (the "License");
  * you may not use this file except in compliance with the License.
  * You may obtain a copy of the License at
  *
  * http://www.apache.org/licenses/LICENSE-2.09  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
 */
 /*
 #ifndef GAZEBO_PLUGINS_FOLLOWERPLUGIN_HH_
 #define GAZEBO_PLUGINS_FOLLOWERPLUGIN_HH_
 
 #include <memory>
 #include <string>
 
 #include <sdf/sdf.hh>
 
 #include <gazebo/common/Plugin.hh>
 #include <gazebo/physics/PhysicsTypes.hh>
 */
 namespace gazebo
 {
  // Forward declare private class
  struct FollowerPluginPrivate;
 
  class GAZEBO_VISIBLE FollowerPlugin : public ModelPlugin
  {
  public: FollowerPlugin();
 
  public: ~FollowerPlugin();
 
  // Documentation Inherited.
  public: virtual void Load(physics::ModelPtr _model, sdf::ElementPtr _sdf);
 
  // Documentation Inherited.
  public: virtual void Init();
 
  // Documentation Unherited.
  public: virtual void Reset();
 
  private: void OnNewDepthFrame(const float *_image,
  const unsigned int _width, const unsigned int _height,
  const unsigned int _depth, const std::string &_format);
 
  private: void OnUpdate();
 
  private: bool FindSensor(const physics::ModelPtr &_model);
 
  private: void FindJoints();
 
  private: void UpdateFollower();
 
  private: std::unique_ptr<FollowerPluginPrivate> dataPtr;
  };
}

