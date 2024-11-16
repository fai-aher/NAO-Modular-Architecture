cmake_minimum_required(VERSION 3.8)
project(speech_interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)

# Generate services
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/Speak.srv"
  "srv/PlaySong.srv"
  "srv/ChangeVoice.srv"
  "srv/ListVoices.srv"
  "srv/SetVoiceParameters.srv"
  "srv/LiveConversation.srv"
  "srv/StartListening.srv"
  "srv/RecognizeSpeech.srv"
  "srv/LiveConversationWithTranscription.srv"
  "srv/StartAudioRecording.srv"
  "srv/StopAudioRecording.srv"
  "srv/TranscribeAudio.srv"
  DEPENDENCIES std_msgs
)

ament_export_dependencies(rosidl_default_runtime)

ament_package()
