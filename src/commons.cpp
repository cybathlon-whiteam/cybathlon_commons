#include "cybathlon_commons/commons.h"

namespace cybathlon {

GameState to_gamestate(const rosneuro_msgs::NeuroEvent& msg) {
	
	GameState state;

	switch(msg.event) {
		case static_cast<int>(GameState::Wheelchair):
			state = GameState::Wheelchair;
			break;
		case static_cast<int>(GameState::RoboticArm):
			state = GameState::RoboticArm;
			break;
		case static_cast<int>(GameState::ScreenCursor):
			state = GameState::ScreenCursor;
			break;
		case static_cast<int>(GameState::End):
			state = GameState::End;
			break;
		default:
			state = GameState::Undefined;
			break;
	}

	return state;
}

FeedbackState to_feedbackstate(const rosneuro_msgs::NeuroEvent& msg) {
	
	FeedbackState state;
	
	switch(msg.event) {
		case static_cast<int>(FeedbackState::OverHardLeft):
			state = FeedbackState::OverHardLeft;
			break;
			case static_cast<int>(FeedbackState::OverSoftLeft):
			state = FeedbackState::OverSoftLeft;
			break;
		case static_cast<int>(FeedbackState::OverSoftRight):
			state = FeedbackState::OverSoftRight;
			break;
		case static_cast<int>(FeedbackState::OverHardRight):
			state = FeedbackState::OverHardRight;
			break;
		case static_cast<int>(FeedbackState::None):
			state = FeedbackState::None;
			break;
		default:
			state = FeedbackState::Undefined;
			break;
	}


	return state;

}

ArtifactState to_artifactstate(const rosneuro_msgs::NeuroEvent& msg) {
	
	ArtifactState state;

	switch(msg.event) {
		case static_cast<int>(ArtifactState::Ocular):
			state = ArtifactState::Ocular;
			break;
		case static_cast<int>(ArtifactState::EndOcular):
			state = ArtifactState::EndOcular;
			break;
		case static_cast<int>(ArtifactState::None):
			state = ArtifactState::None;
			break;
		default:
			state = ArtifactState::Undefined;
			break;
	}


	return state;

}

ControllerState to_controllerstate(const rosneuro_msgs::NeuroEvent& msg) {
	
	ControllerState state;

	switch(msg.event) {
		case static_cast<int>(ControllerState::Activated):
			state = ControllerState::Activated;
			break;
		case static_cast<int>(ControllerState::Deactivated):
			state = ControllerState::Deactivated;
			break;
		default:
			state = ControllerState::Undefined;
			break;
	}


	return state;

}


std::string to_string(const GameState& state) {

	std::string label;

	switch(state) {
		case GameState::Wheelchair:
			label = "Wheelchair";
			break;
		case GameState::RoboticArm:
			label = "RoboticArm";
			break;
		case GameState::ScreenCursor:
			label = "ScreenCursor";
			break;
		case GameState::End:
			label = "End";
			break;
		case GameState::Undefined:
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

std::string to_string(const FeedbackState& state) {

	std::string label;

	switch(state) {
		case FeedbackState::OverSoftLeft:
			label = "OverSoftLeft";
			break;
		case FeedbackState::OverSoftRight:
			label = "OverSoftRight";
			break;
		case FeedbackState::OverHardLeft:
			label = "OverHardLeft";
			break;
		case FeedbackState::OverHardRight:
			label = "OverHardRight";
			break;
		case FeedbackState::None:
			label = "None";
			break;
		default:
			label = "Unknown";
			break;
	}

	return label;
}

std::string to_string(const ArtifactState& state) {

	std::string label;

	switch(state) {
		case ArtifactState::Ocular:
			label = "Ocular";
			break;
		case ArtifactState::EndOcular:
			label = "EndOcular";
			break;
		case ArtifactState::None:
			label = "None";
			break;
		default:
			label = "Unknown";
			break;
	}

	return label;
}

std::string to_string(const ControllerState& state) {

	std::string label;

	switch(state) {
		case ControllerState::Undefined:
			label = "Undefined";
			break;
		case ControllerState::Activated:
			label = "Activated";
			break;
			case ControllerState::Deactivated:
			label = "Deactivated";
			break;
		default:
			label = "Unknown";
			break;
	}

	return label;
}

}

