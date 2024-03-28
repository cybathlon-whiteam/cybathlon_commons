#include "cybathlon_commons/commons.h"

namespace cybathlon {

GameTask to_gametask(const rosneuro_msgs::NeuroEvent& msg) {
	
	GameTask task;

	switch(msg.event) {
		case static_cast<int>(GameTask::Wheelchair):
			task = GameTask::Wheelchair;
			break;
		case static_cast<int>(GameTask::RoboticArm):
			task = GameTask::RoboticArm;
			break;
		case static_cast<int>(GameTask::ScreenCursor):
			task = GameTask::ScreenCursor;
			break;
		case static_cast<int>(GameTask::End):
			task = GameTask::End;
			break;
		case static_cast<int>(GameTask::Undefined):
			task = GameTask::Undefined;
			break;
		default:
			task = GameTask::Undefined;
			break;
	}


	return task;

}

BCICommand to_bcicommand(const rosneuro_msgs::NeuroEvent& msg) {
	
	BCICommand cmd;

	switch(msg.event) {
		case static_cast<int>(BCICommand::HardLeft):
			cmd = BCICommand::HardLeft;
			break;
			case static_cast<int>(BCICommand::SoftLeft):
			cmd = BCICommand::SoftLeft;
			break;
		case static_cast<int>(BCICommand::SoftRight):
			cmd = BCICommand::SoftRight;
			break;
		case static_cast<int>(BCICommand::HardRight):
			cmd = BCICommand::HardRight;
			break;
		case static_cast<int>(BCICommand::None):
			cmd = BCICommand::None;
			break;
		default:
			cmd = BCICommand::None;
			break;
	}


	return cmd;

}

Artifact to_artifact(const rosneuro_msgs::NeuroEvent& msg) {
	
	Artifact art;

	switch(msg.event) {
		case static_cast<int>(Artifact::Ocular):
			art = Artifact::Ocular;
			break;
		case static_cast<int>(Artifact::EndOcular):
			art = Artifact::EndOcular;
			break;
		case static_cast<int>(Artifact::None):
		default:
			art = Artifact::None;
			break;
	}


	return art;

}


std::string to_string(const GameTask& task) {

	std::string label;

	switch(task) {
		case GameTask::Wheelchair:
			label = "Wheelchair";
			break;
		case GameTask::RoboticArm:
			label = "RoboticArm";
			break;
		case GameTask::ScreenCursor:
			label = "ScreenCursor";
			break;
		case GameTask::End:
			label = "End";
			break;
		case GameTask::Undefined:
			label = "Undefined";
			break;
		default:
			label = "Unknown";
			break;
	}

	return label;
}

std::string to_string(const GameCommand& command) {

	std::string label;

	switch(command) {
		case GameCommand::A:
			label = "A";
			break;
		case GameCommand::B:
			label = "B";
			break;
		case GameCommand::None:
			label = "None";
			break;
		default:
			label = "Unknown";
			break;
	}

	return label;
}

std::string to_string(const BCICommand& command) {

	std::string label;

	switch(command) {
		case BCICommand::SoftLeft:
			label = "SoftLeft";
			break;
		case BCICommand::SoftRight:
			label = "SoftRight";
			break;
		case BCICommand::HardLeft:
			label = "HardLeft";
			break;
		case BCICommand::HardRight:
			label = "HardRight";
			break;
		case BCICommand::None:
			label = "None";
			break;
		default:
			label = "Unknown";
			break;
	}

	return label;
}

std::string to_string(const Artifact& artifact) {

	std::string label;

	switch(artifact) {
		case Artifact::Ocular:
			label = "Ocular";
			break;
		case Artifact::EndOcular:
			label = "EndOcular";
			break;
		case Artifact::None:
			label = "None";
			break;
		default:
			label = "Unknown";
			break;
	}

	return label;
}

}

