#ifndef CYBATHLON_COMMONS_
#define CYBATHLON_COMMONS_

#include <thread>

#include <ros/ros.h>
#include <rosneuro_msgs/NeuroEvent.h>
#include <ros/callback_queue.h>

namespace cybathlon {

enum class GameTask {Undefined = 100, Wheelchair = 101, RoboticArm = 102, ScreenCursor = 103, End = 110};
enum class GameCommand {None, A, B};
enum class BCICommand {None = 6000, HardLeft = 6001, SoftLeft = 6002, SoftRight = 6003, HardRight = 6004};


BCICommand to_bcicommand(const rosneuro_msgs::NeuroEvent& msg);
GameTask  to_gametask(const rosneuro_msgs::NeuroEvent& msg);

std::string to_string(const GameTask& task);
std::string to_string(const GameCommand& command);
std::string to_string(const BCICommand& command);

}



#endif
