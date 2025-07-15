/** @file
 *  @brief MAVLink comm protocol generated from roi_data.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_ROI_DATA_H
#define MAVLINK_ROI_DATA_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_ROI_DATA.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#define MAVLINK_ROI_DATA_XML_HASH -3418198380414527919

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{43210, 110, 28, 28, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_ROI_DATA

// ENUM DEFINITIONS



// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_roi_data.h"

// base include



#if MAVLINK_ROI_DATA_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_ROI_DATA}
# define MAVLINK_MESSAGE_NAMES {{ "ROI_DATA", 43210 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_ROI_DATA_H
