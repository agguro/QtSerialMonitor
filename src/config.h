#ifndef CONFIG_H
#define CONFIG_H

#define VERSION "1.6"

#define CHANGELOG_TEXT "" //"Changelog - version " VERSION ": \n"

#define INTRO_TEXT  "" \
                    "Welcome to QtSerialMonitor, \n" \
                    "Press F1 to activate \"What's this\" mode. In this mode, clicked widget \r" \
                    "will display an explanation about its function. \n"

#define RADIO_BUTTON_UPDATE_SERIAL_DEVICES_ON_INTERVAL 100
#define SERIAL_DEVICE_CHECK_TIMER_INTERVAL 500

// ----- App messages ----- //
#define APP_MSG_SERIAL_SEND_SUCCES ""
#define APP_MSG_FILE_READ_SUCCES "App >>\t File processed succesfully. "
#define APP_MSG_FILE_READ_ERROR "App >>\t Error - file read problem."
#define APP_MSG_ERROR_INVALID_FILE_PATH "App >>\t Error - invalid file path !"
#define APP_MSG_ERROR_SETTINGS_LOAD_FAILED "App >>\t Error loading settings. Config file incorrect !"
// ------------------------ //

#endif // CONFIG_H
