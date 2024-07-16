#ifndef CYBATHLON_COMMONS_
#define CYBATHLON_COMMONS_

#include <thread>

#include <ros/ros.h>
#include <rosneuro_msgs/NeuroEvent.h>
#include <ros/callback_queue.h>

namespace cybathlon {

enum class GameState       {Undefined = 100, Wheelchair = 101, RoboticArm = 102, 
						    ScreenCursor = 103, End = 110};
enum class FeedbackState   {Undefined, None = 6000, OverHardLeft = 6001, OverSoftLeft = 6002, 
						    OverSoftRight = 6003, OverHardRight = 6004};
enum class ArtifactState   {Undefined, None = 0x410, Ocular = 0x400, EndOcular = 0x8400};
enum class ControllerState {Undefined, Activated, Deactivated};
enum class GameCommand 	   {None, A, B};

GameState  	    to_gamestate(const rosneuro_msgs::NeuroEvent& msg);
ArtifactState   to_artifactstate(const rosneuro_msgs::NeuroEvent& msg);
FeedbackState   to_feedbackstate(const rosneuro_msgs::NeuroEvent& msg);
ControllerState to_controllerstate(const rosneuro_msgs::NeuroEvent& msg);

std::string to_string(const GameCommand& command);
std::string to_string(const GameState& state);
std::string to_string(const FeedbackState& state);
std::string to_string(const ArtifactState& state);
std::string to_string(const ControllerState& state);

}



#endif
