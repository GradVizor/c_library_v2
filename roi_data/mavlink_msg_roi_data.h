#pragma once
// MESSAGE ROI_DATA PACKING

#define MAVLINK_MSG_ID_ROI_DATA 43210


typedef struct __mavlink_roi_data_t {
 uint64_t timestamp; /*<  time since system start (microseconds)*/
 uint32_t frame_id; /*<  Frame number from video stream*/
 uint32_t x1; /*<  X-Coordinate of first point clicked*/
 uint32_t y1; /*<  Y-Coordinate of first point clicked*/
 uint32_t x2; /*<  X-Coordinate of last point clicked*/
 uint32_t y2; /*<  Y-Coordinate of last point clicked*/
} mavlink_roi_data_t;

#define MAVLINK_MSG_ID_ROI_DATA_LEN 28
#define MAVLINK_MSG_ID_ROI_DATA_MIN_LEN 28
#define MAVLINK_MSG_ID_43210_LEN 28
#define MAVLINK_MSG_ID_43210_MIN_LEN 28

#define MAVLINK_MSG_ID_ROI_DATA_CRC 110
#define MAVLINK_MSG_ID_43210_CRC 110



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ROI_DATA { \
    43210, \
    "ROI_DATA", \
    6, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_roi_data_t, timestamp) }, \
         { "frame_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_roi_data_t, frame_id) }, \
         { "x1", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_roi_data_t, x1) }, \
         { "y1", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_roi_data_t, y1) }, \
         { "x2", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_roi_data_t, x2) }, \
         { "y2", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_roi_data_t, y2) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ROI_DATA { \
    "ROI_DATA", \
    6, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_roi_data_t, timestamp) }, \
         { "frame_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_roi_data_t, frame_id) }, \
         { "x1", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_roi_data_t, x1) }, \
         { "y1", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_roi_data_t, y1) }, \
         { "x2", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_roi_data_t, x2) }, \
         { "y2", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_roi_data_t, y2) }, \
         } \
}
#endif

/**
 * @brief Pack a roi_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  time since system start (microseconds)
 * @param frame_id  Frame number from video stream
 * @param x1  X-Coordinate of first point clicked
 * @param y1  Y-Coordinate of first point clicked
 * @param x2  X-Coordinate of last point clicked
 * @param y2  Y-Coordinate of last point clicked
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_roi_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, uint32_t frame_id, uint32_t x1, uint32_t y1, uint32_t x2, uint32_t y2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ROI_DATA_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint32_t(buf, 8, frame_id);
    _mav_put_uint32_t(buf, 12, x1);
    _mav_put_uint32_t(buf, 16, y1);
    _mav_put_uint32_t(buf, 20, x2);
    _mav_put_uint32_t(buf, 24, y2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROI_DATA_LEN);
#else
    mavlink_roi_data_t packet;
    packet.timestamp = timestamp;
    packet.frame_id = frame_id;
    packet.x1 = x1;
    packet.y1 = y1;
    packet.x2 = x2;
    packet.y2 = y2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROI_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ROI_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROI_DATA_MIN_LEN, MAVLINK_MSG_ID_ROI_DATA_LEN, MAVLINK_MSG_ID_ROI_DATA_CRC);
}

/**
 * @brief Pack a roi_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  time since system start (microseconds)
 * @param frame_id  Frame number from video stream
 * @param x1  X-Coordinate of first point clicked
 * @param y1  Y-Coordinate of first point clicked
 * @param x2  X-Coordinate of last point clicked
 * @param y2  Y-Coordinate of last point clicked
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_roi_data_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp, uint32_t frame_id, uint32_t x1, uint32_t y1, uint32_t x2, uint32_t y2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ROI_DATA_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint32_t(buf, 8, frame_id);
    _mav_put_uint32_t(buf, 12, x1);
    _mav_put_uint32_t(buf, 16, y1);
    _mav_put_uint32_t(buf, 20, x2);
    _mav_put_uint32_t(buf, 24, y2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROI_DATA_LEN);
#else
    mavlink_roi_data_t packet;
    packet.timestamp = timestamp;
    packet.frame_id = frame_id;
    packet.x1 = x1;
    packet.y1 = y1;
    packet.x2 = x2;
    packet.y2 = y2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROI_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ROI_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ROI_DATA_MIN_LEN, MAVLINK_MSG_ID_ROI_DATA_LEN, MAVLINK_MSG_ID_ROI_DATA_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ROI_DATA_MIN_LEN, MAVLINK_MSG_ID_ROI_DATA_LEN);
#endif
}

/**
 * @brief Pack a roi_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp  time since system start (microseconds)
 * @param frame_id  Frame number from video stream
 * @param x1  X-Coordinate of first point clicked
 * @param y1  Y-Coordinate of first point clicked
 * @param x2  X-Coordinate of last point clicked
 * @param y2  Y-Coordinate of last point clicked
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_roi_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,uint32_t frame_id,uint32_t x1,uint32_t y1,uint32_t x2,uint32_t y2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ROI_DATA_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint32_t(buf, 8, frame_id);
    _mav_put_uint32_t(buf, 12, x1);
    _mav_put_uint32_t(buf, 16, y1);
    _mav_put_uint32_t(buf, 20, x2);
    _mav_put_uint32_t(buf, 24, y2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROI_DATA_LEN);
#else
    mavlink_roi_data_t packet;
    packet.timestamp = timestamp;
    packet.frame_id = frame_id;
    packet.x1 = x1;
    packet.y1 = y1;
    packet.x2 = x2;
    packet.y2 = y2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROI_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ROI_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROI_DATA_MIN_LEN, MAVLINK_MSG_ID_ROI_DATA_LEN, MAVLINK_MSG_ID_ROI_DATA_CRC);
}

/**
 * @brief Encode a roi_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param roi_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_roi_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_roi_data_t* roi_data)
{
    return mavlink_msg_roi_data_pack(system_id, component_id, msg, roi_data->timestamp, roi_data->frame_id, roi_data->x1, roi_data->y1, roi_data->x2, roi_data->y2);
}

/**
 * @brief Encode a roi_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param roi_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_roi_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_roi_data_t* roi_data)
{
    return mavlink_msg_roi_data_pack_chan(system_id, component_id, chan, msg, roi_data->timestamp, roi_data->frame_id, roi_data->x1, roi_data->y1, roi_data->x2, roi_data->y2);
}

/**
 * @brief Encode a roi_data struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param roi_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_roi_data_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_roi_data_t* roi_data)
{
    return mavlink_msg_roi_data_pack_status(system_id, component_id, _status, msg,  roi_data->timestamp, roi_data->frame_id, roi_data->x1, roi_data->y1, roi_data->x2, roi_data->y2);
}

/**
 * @brief Send a roi_data message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp  time since system start (microseconds)
 * @param frame_id  Frame number from video stream
 * @param x1  X-Coordinate of first point clicked
 * @param y1  Y-Coordinate of first point clicked
 * @param x2  X-Coordinate of last point clicked
 * @param y2  Y-Coordinate of last point clicked
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_roi_data_send(mavlink_channel_t chan, uint64_t timestamp, uint32_t frame_id, uint32_t x1, uint32_t y1, uint32_t x2, uint32_t y2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ROI_DATA_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint32_t(buf, 8, frame_id);
    _mav_put_uint32_t(buf, 12, x1);
    _mav_put_uint32_t(buf, 16, y1);
    _mav_put_uint32_t(buf, 20, x2);
    _mav_put_uint32_t(buf, 24, y2);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROI_DATA, buf, MAVLINK_MSG_ID_ROI_DATA_MIN_LEN, MAVLINK_MSG_ID_ROI_DATA_LEN, MAVLINK_MSG_ID_ROI_DATA_CRC);
#else
    mavlink_roi_data_t packet;
    packet.timestamp = timestamp;
    packet.frame_id = frame_id;
    packet.x1 = x1;
    packet.y1 = y1;
    packet.x2 = x2;
    packet.y2 = y2;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROI_DATA, (const char *)&packet, MAVLINK_MSG_ID_ROI_DATA_MIN_LEN, MAVLINK_MSG_ID_ROI_DATA_LEN, MAVLINK_MSG_ID_ROI_DATA_CRC);
#endif
}

/**
 * @brief Send a roi_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_roi_data_send_struct(mavlink_channel_t chan, const mavlink_roi_data_t* roi_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_roi_data_send(chan, roi_data->timestamp, roi_data->frame_id, roi_data->x1, roi_data->y1, roi_data->x2, roi_data->y2);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROI_DATA, (const char *)roi_data, MAVLINK_MSG_ID_ROI_DATA_MIN_LEN, MAVLINK_MSG_ID_ROI_DATA_LEN, MAVLINK_MSG_ID_ROI_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_ROI_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_roi_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, uint32_t frame_id, uint32_t x1, uint32_t y1, uint32_t x2, uint32_t y2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint32_t(buf, 8, frame_id);
    _mav_put_uint32_t(buf, 12, x1);
    _mav_put_uint32_t(buf, 16, y1);
    _mav_put_uint32_t(buf, 20, x2);
    _mav_put_uint32_t(buf, 24, y2);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROI_DATA, buf, MAVLINK_MSG_ID_ROI_DATA_MIN_LEN, MAVLINK_MSG_ID_ROI_DATA_LEN, MAVLINK_MSG_ID_ROI_DATA_CRC);
#else
    mavlink_roi_data_t *packet = (mavlink_roi_data_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->frame_id = frame_id;
    packet->x1 = x1;
    packet->y1 = y1;
    packet->x2 = x2;
    packet->y2 = y2;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROI_DATA, (const char *)packet, MAVLINK_MSG_ID_ROI_DATA_MIN_LEN, MAVLINK_MSG_ID_ROI_DATA_LEN, MAVLINK_MSG_ID_ROI_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE ROI_DATA UNPACKING


/**
 * @brief Get field timestamp from roi_data message
 *
 * @return  time since system start (microseconds)
 */
static inline uint64_t mavlink_msg_roi_data_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field frame_id from roi_data message
 *
 * @return  Frame number from video stream
 */
static inline uint32_t mavlink_msg_roi_data_get_frame_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field x1 from roi_data message
 *
 * @return  X-Coordinate of first point clicked
 */
static inline uint32_t mavlink_msg_roi_data_get_x1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  12);
}

/**
 * @brief Get field y1 from roi_data message
 *
 * @return  Y-Coordinate of first point clicked
 */
static inline uint32_t mavlink_msg_roi_data_get_y1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  16);
}

/**
 * @brief Get field x2 from roi_data message
 *
 * @return  X-Coordinate of last point clicked
 */
static inline uint32_t mavlink_msg_roi_data_get_x2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  20);
}

/**
 * @brief Get field y2 from roi_data message
 *
 * @return  Y-Coordinate of last point clicked
 */
static inline uint32_t mavlink_msg_roi_data_get_y2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  24);
}

/**
 * @brief Decode a roi_data message into a struct
 *
 * @param msg The message to decode
 * @param roi_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_roi_data_decode(const mavlink_message_t* msg, mavlink_roi_data_t* roi_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    roi_data->timestamp = mavlink_msg_roi_data_get_timestamp(msg);
    roi_data->frame_id = mavlink_msg_roi_data_get_frame_id(msg);
    roi_data->x1 = mavlink_msg_roi_data_get_x1(msg);
    roi_data->y1 = mavlink_msg_roi_data_get_y1(msg);
    roi_data->x2 = mavlink_msg_roi_data_get_x2(msg);
    roi_data->y2 = mavlink_msg_roi_data_get_y2(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ROI_DATA_LEN? msg->len : MAVLINK_MSG_ID_ROI_DATA_LEN;
        memset(roi_data, 0, MAVLINK_MSG_ID_ROI_DATA_LEN);
    memcpy(roi_data, _MAV_PAYLOAD(msg), len);
#endif
}
