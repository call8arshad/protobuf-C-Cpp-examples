/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: com/protocol/unitcom_event.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "com/protocol/unitcom_event.pb-c.h"
void   com__protocol__unitcom_event__device_state_event__init
                     (Com__Protocol__UnitcomEvent__DeviceStateEvent         *message)
{
  static Com__Protocol__UnitcomEvent__DeviceStateEvent init_value = COM__PROTOCOL__UNITCOM_EVENT__DEVICE_STATE_EVENT__INIT;
  *message = init_value;
}
void   com__protocol__unitcom_event__vehicle_state_event__init
                     (Com__Protocol__UnitcomEvent__VehicleStateEvent         *message)
{
  static Com__Protocol__UnitcomEvent__VehicleStateEvent init_value = COM__PROTOCOL__UNITCOM_EVENT__VEHICLE_STATE_EVENT__INIT;
  *message = init_value;
}
void   com__protocol__unitcom_event__connection_stats_event__init
                     (Com__Protocol__UnitcomEvent__ConnectionStatsEvent         *message)
{
  static Com__Protocol__UnitcomEvent__ConnectionStatsEvent init_value = COM__PROTOCOL__UNITCOM_EVENT__CONNECTION_STATS_EVENT__INIT;
  *message = init_value;
}
void   com__protocol__unitcom_event__fence_crossing_event__init
                     (Com__Protocol__UnitcomEvent__FenceCrossingEvent         *message)
{
  static Com__Protocol__UnitcomEvent__FenceCrossingEvent init_value = COM__PROTOCOL__UNITCOM_EVENT__FENCE_CROSSING_EVENT__INIT;
  *message = init_value;
}
void   com__protocol__unitcom_event__notify_event__init
                     (Com__Protocol__UnitcomEvent__NotifyEvent         *message)
{
  static Com__Protocol__UnitcomEvent__NotifyEvent init_value = COM__PROTOCOL__UNITCOM_EVENT__NOTIFY_EVENT__INIT;
  *message = init_value;
}
void   com__protocol__unitcom_event__position_event__init
                     (Com__Protocol__UnitcomEvent__PositionEvent         *message)
{
  static Com__Protocol__UnitcomEvent__PositionEvent init_value = COM__PROTOCOL__UNITCOM_EVENT__POSITION_EVENT__INIT;
  *message = init_value;
}
void   com__protocol__unitcom_event__init
                     (Com__Protocol__UnitcomEvent         *message)
{
  static Com__Protocol__UnitcomEvent init_value = COM__PROTOCOL__UNITCOM_EVENT__INIT;
  *message = init_value;
}
size_t com__protocol__unitcom_event__get_packed_size
                     (const Com__Protocol__UnitcomEvent *message)
{
  assert(message->base.descriptor == &com__protocol__unitcom_event__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t com__protocol__unitcom_event__pack
                     (const Com__Protocol__UnitcomEvent *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &com__protocol__unitcom_event__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t com__protocol__unitcom_event__pack_to_buffer
                     (const Com__Protocol__UnitcomEvent *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &com__protocol__unitcom_event__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Com__Protocol__UnitcomEvent *
       com__protocol__unitcom_event__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Com__Protocol__UnitcomEvent *)
     protobuf_c_message_unpack (&com__protocol__unitcom_event__descriptor,
                                allocator, len, data);
}
void   com__protocol__unitcom_event__free_unpacked
                     (Com__Protocol__UnitcomEvent *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &com__protocol__unitcom_event__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor com__protocol__unitcom_event__device_state_event__field_descriptors[11] =
{
  {
    "routerId",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Com__Protocol__UnitcomEvent__DeviceStateEvent, has_routerid),
    offsetof(Com__Protocol__UnitcomEvent__DeviceStateEvent, routerid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "timestamp",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Com__Protocol__UnitcomEvent__DeviceStateEvent, has_timestamp),
    offsetof(Com__Protocol__UnitcomEvent__DeviceStateEvent, timestamp),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "mdn",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Com__Protocol__UnitcomEvent__DeviceStateEvent, mdn),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "esn",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Com__Protocol__UnitcomEvent__DeviceStateEvent, esn),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "imsi",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Com__Protocol__UnitcomEvent__DeviceStateEvent, imsi),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "imei",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Com__Protocol__UnitcomEvent__DeviceStateEvent, imei),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "iccid",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Com__Protocol__UnitcomEvent__DeviceStateEvent, iccid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "prl",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Com__Protocol__UnitcomEvent__DeviceStateEvent, prl),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "min",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Com__Protocol__UnitcomEvent__DeviceStateEvent, min),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dow_status",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Com__Protocol__UnitcomEvent__DeviceStateEvent, dow_status),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "hw_config",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Com__Protocol__UnitcomEvent__DeviceStateEvent, hw_config),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned com__protocol__unitcom_event__device_state_event__field_indices_by_name[] = {
  9,   /* field[9] = dow_status */
  3,   /* field[3] = esn */
  10,   /* field[10] = hw_config */
  6,   /* field[6] = iccid */
  5,   /* field[5] = imei */
  4,   /* field[4] = imsi */
  2,   /* field[2] = mdn */
  8,   /* field[8] = min */
  7,   /* field[7] = prl */
  0,   /* field[0] = routerId */
  1,   /* field[1] = timestamp */
};
static const ProtobufCIntRange com__protocol__unitcom_event__device_state_event__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 11 }
};
const ProtobufCMessageDescriptor com__protocol__unitcom_event__device_state_event__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "com.protocol.UnitcomEvent.DeviceStateEvent",
  "DeviceStateEvent",
  "Com__Protocol__UnitcomEvent__DeviceStateEvent",
  "com.protocol",
  sizeof(Com__Protocol__UnitcomEvent__DeviceStateEvent),
  11,
  com__protocol__unitcom_event__device_state_event__field_descriptors,
  com__protocol__unitcom_event__device_state_event__field_indices_by_name,
  1,  com__protocol__unitcom_event__device_state_event__number_ranges,
  (ProtobufCMessageInit) com__protocol__unitcom_event__device_state_event__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor com__protocol__unitcom_event__vehicle_state_event__field_descriptors[7] =
{
  {
    "routerId",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Com__Protocol__UnitcomEvent__VehicleStateEvent, has_routerid),
    offsetof(Com__Protocol__UnitcomEvent__VehicleStateEvent, routerid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "timestamp",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Com__Protocol__UnitcomEvent__VehicleStateEvent, has_timestamp),
    offsetof(Com__Protocol__UnitcomEvent__VehicleStateEvent, timestamp),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "vin",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Com__Protocol__UnitcomEvent__VehicleStateEvent, vin),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "mileage",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Com__Protocol__UnitcomEvent__VehicleStateEvent, has_mileage),
    offsetof(Com__Protocol__UnitcomEvent__VehicleStateEvent, mileage),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ignition",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    offsetof(Com__Protocol__UnitcomEvent__VehicleStateEvent, has_ignition),
    offsetof(Com__Protocol__UnitcomEvent__VehicleStateEvent, ignition),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "battery",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(Com__Protocol__UnitcomEvent__VehicleStateEvent, has_battery),
    offsetof(Com__Protocol__UnitcomEvent__VehicleStateEvent, battery),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "fuel",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(Com__Protocol__UnitcomEvent__VehicleStateEvent, has_fuel),
    offsetof(Com__Protocol__UnitcomEvent__VehicleStateEvent, fuel),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned com__protocol__unitcom_event__vehicle_state_event__field_indices_by_name[] = {
  5,   /* field[5] = battery */
  6,   /* field[6] = fuel */
  4,   /* field[4] = ignition */
  3,   /* field[3] = mileage */
  0,   /* field[0] = routerId */
  1,   /* field[1] = timestamp */
  2,   /* field[2] = vin */
};
static const ProtobufCIntRange com__protocol__unitcom_event__vehicle_state_event__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 7 }
};
const ProtobufCMessageDescriptor com__protocol__unitcom_event__vehicle_state_event__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "com.protocol.UnitcomEvent.VehicleStateEvent",
  "VehicleStateEvent",
  "Com__Protocol__UnitcomEvent__VehicleStateEvent",
  "com.protocol",
  sizeof(Com__Protocol__UnitcomEvent__VehicleStateEvent),
  7,
  com__protocol__unitcom_event__vehicle_state_event__field_descriptors,
  com__protocol__unitcom_event__vehicle_state_event__field_indices_by_name,
  1,  com__protocol__unitcom_event__vehicle_state_event__number_ranges,
  (ProtobufCMessageInit) com__protocol__unitcom_event__vehicle_state_event__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor com__protocol__unitcom_event__connection_stats_event__field_descriptors[8] =
{
  {
    "routerId",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Com__Protocol__UnitcomEvent__ConnectionStatsEvent, has_routerid),
    offsetof(Com__Protocol__UnitcomEvent__ConnectionStatsEvent, routerid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "timestamp",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Com__Protocol__UnitcomEvent__ConnectionStatsEvent, has_timestamp),
    offsetof(Com__Protocol__UnitcomEvent__ConnectionStatsEvent, timestamp),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "up",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Com__Protocol__UnitcomEvent__ConnectionStatsEvent, has_up),
    offsetof(Com__Protocol__UnitcomEvent__ConnectionStatsEvent, up),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "down",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Com__Protocol__UnitcomEvent__ConnectionStatsEvent, has_down),
    offsetof(Com__Protocol__UnitcomEvent__ConnectionStatsEvent, down),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "uptime",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Com__Protocol__UnitcomEvent__ConnectionStatsEvent, has_uptime),
    offsetof(Com__Protocol__UnitcomEvent__ConnectionStatsEvent, uptime),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "online",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Com__Protocol__UnitcomEvent__ConnectionStatsEvent, has_online),
    offsetof(Com__Protocol__UnitcomEvent__ConnectionStatsEvent, online),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "type",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Com__Protocol__UnitcomEvent__ConnectionStatsEvent, type),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "signal",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Com__Protocol__UnitcomEvent__ConnectionStatsEvent, has_signal),
    offsetof(Com__Protocol__UnitcomEvent__ConnectionStatsEvent, signal),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned com__protocol__unitcom_event__connection_stats_event__field_indices_by_name[] = {
  3,   /* field[3] = down */
  5,   /* field[5] = online */
  0,   /* field[0] = routerId */
  7,   /* field[7] = signal */
  1,   /* field[1] = timestamp */
  6,   /* field[6] = type */
  2,   /* field[2] = up */
  4,   /* field[4] = uptime */
};
static const ProtobufCIntRange com__protocol__unitcom_event__connection_stats_event__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 8 }
};
const ProtobufCMessageDescriptor com__protocol__unitcom_event__connection_stats_event__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "com.protocol.UnitcomEvent.ConnectionStatsEvent",
  "ConnectionStatsEvent",
  "Com__Protocol__UnitcomEvent__ConnectionStatsEvent",
  "com.protocol",
  sizeof(Com__Protocol__UnitcomEvent__ConnectionStatsEvent),
  8,
  com__protocol__unitcom_event__connection_stats_event__field_descriptors,
  com__protocol__unitcom_event__connection_stats_event__field_indices_by_name,
  1,  com__protocol__unitcom_event__connection_stats_event__number_ranges,
  (ProtobufCMessageInit) com__protocol__unitcom_event__connection_stats_event__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor com__protocol__unitcom_event__fence_crossing_event__field_descriptors[4] =
{
  {
    "routerId",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Com__Protocol__UnitcomEvent__FenceCrossingEvent, has_routerid),
    offsetof(Com__Protocol__UnitcomEvent__FenceCrossingEvent, routerid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "timestamp",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Com__Protocol__UnitcomEvent__FenceCrossingEvent, has_timestamp),
    offsetof(Com__Protocol__UnitcomEvent__FenceCrossingEvent, timestamp),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "direction",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    offsetof(Com__Protocol__UnitcomEvent__FenceCrossingEvent, has_direction),
    offsetof(Com__Protocol__UnitcomEvent__FenceCrossingEvent, direction),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "location",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Com__Protocol__UnitcomEvent__FenceCrossingEvent, location),
    &com__protocol__gps_location__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned com__protocol__unitcom_event__fence_crossing_event__field_indices_by_name[] = {
  2,   /* field[2] = direction */
  3,   /* field[3] = location */
  0,   /* field[0] = routerId */
  1,   /* field[1] = timestamp */
};
static const ProtobufCIntRange com__protocol__unitcom_event__fence_crossing_event__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor com__protocol__unitcom_event__fence_crossing_event__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "com.protocol.UnitcomEvent.FenceCrossingEvent",
  "FenceCrossingEvent",
  "Com__Protocol__UnitcomEvent__FenceCrossingEvent",
  "com.protocol",
  sizeof(Com__Protocol__UnitcomEvent__FenceCrossingEvent),
  4,
  com__protocol__unitcom_event__fence_crossing_event__field_descriptors,
  com__protocol__unitcom_event__fence_crossing_event__field_indices_by_name,
  1,  com__protocol__unitcom_event__fence_crossing_event__number_ranges,
  (ProtobufCMessageInit) com__protocol__unitcom_event__fence_crossing_event__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor com__protocol__unitcom_event__notify_event__field_descriptors[7] =
{
  {
    "routerId",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Com__Protocol__UnitcomEvent__NotifyEvent, has_routerid),
    offsetof(Com__Protocol__UnitcomEvent__NotifyEvent, routerid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "timestamp",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Com__Protocol__UnitcomEvent__NotifyEvent, has_timestamp),
    offsetof(Com__Protocol__UnitcomEvent__NotifyEvent, timestamp),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "type",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Com__Protocol__UnitcomEvent__NotifyEvent, type),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "recipient",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Com__Protocol__UnitcomEvent__NotifyEvent, recipient),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "message",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Com__Protocol__UnitcomEvent__NotifyEvent, message),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "reason",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Com__Protocol__UnitcomEvent__NotifyEvent, reason),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "location",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Com__Protocol__UnitcomEvent__NotifyEvent, location),
    &com__protocol__gps_location__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned com__protocol__unitcom_event__notify_event__field_indices_by_name[] = {
  6,   /* field[6] = location */
  4,   /* field[4] = message */
  5,   /* field[5] = reason */
  3,   /* field[3] = recipient */
  0,   /* field[0] = routerId */
  1,   /* field[1] = timestamp */
  2,   /* field[2] = type */
};
static const ProtobufCIntRange com__protocol__unitcom_event__notify_event__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 7 }
};
const ProtobufCMessageDescriptor com__protocol__unitcom_event__notify_event__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "com.protocol.UnitcomEvent.NotifyEvent",
  "NotifyEvent",
  "Com__Protocol__UnitcomEvent__NotifyEvent",
  "com.protocol",
  sizeof(Com__Protocol__UnitcomEvent__NotifyEvent),
  7,
  com__protocol__unitcom_event__notify_event__field_descriptors,
  com__protocol__unitcom_event__notify_event__field_indices_by_name,
  1,  com__protocol__unitcom_event__notify_event__number_ranges,
  (ProtobufCMessageInit) com__protocol__unitcom_event__notify_event__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor com__protocol__unitcom_event__position_event__field_descriptors[3] =
{
  {
    "routerId",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Com__Protocol__UnitcomEvent__PositionEvent, has_routerid),
    offsetof(Com__Protocol__UnitcomEvent__PositionEvent, routerid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "timestamp",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Com__Protocol__UnitcomEvent__PositionEvent, has_timestamp),
    offsetof(Com__Protocol__UnitcomEvent__PositionEvent, timestamp),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "location",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Com__Protocol__UnitcomEvent__PositionEvent, location),
    &com__protocol__gps_location__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned com__protocol__unitcom_event__position_event__field_indices_by_name[] = {
  2,   /* field[2] = location */
  0,   /* field[0] = routerId */
  1,   /* field[1] = timestamp */
};
static const ProtobufCIntRange com__protocol__unitcom_event__position_event__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor com__protocol__unitcom_event__position_event__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "com.protocol.UnitcomEvent.PositionEvent",
  "PositionEvent",
  "Com__Protocol__UnitcomEvent__PositionEvent",
  "com.protocol",
  sizeof(Com__Protocol__UnitcomEvent__PositionEvent),
  3,
  com__protocol__unitcom_event__position_event__field_descriptors,
  com__protocol__unitcom_event__position_event__field_indices_by_name,
  1,  com__protocol__unitcom_event__position_event__number_ranges,
  (ProtobufCMessageInit) com__protocol__unitcom_event__position_event__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue com__protocol__unitcom_event__event_type__enum_values_by_number[6] =
{
  { "DEVICE_STATE", "COM__PROTOCOL__UNITCOM_EVENT__EVENT_TYPE__DEVICE_STATE", 0 },
  { "VEHICLE_STATE", "COM__PROTOCOL__UNITCOM_EVENT__EVENT_TYPE__VEHICLE_STATE", 1 },
  { "CONNECTION_STATS", "COM__PROTOCOL__UNITCOM_EVENT__EVENT_TYPE__CONNECTION_STATS", 2 },
  { "FENCE_CROSSING", "COM__PROTOCOL__UNITCOM_EVENT__EVENT_TYPE__FENCE_CROSSING", 3 },
  { "NOTIFY", "COM__PROTOCOL__UNITCOM_EVENT__EVENT_TYPE__NOTIFY", 4 },
  { "POSITION", "COM__PROTOCOL__UNITCOM_EVENT__EVENT_TYPE__POSITION", 5 },
};
static const ProtobufCIntRange com__protocol__unitcom_event__event_type__value_ranges[] = {
{0, 0},{0, 6}
};
static const ProtobufCEnumValueIndex com__protocol__unitcom_event__event_type__enum_values_by_name[6] =
{
  { "CONNECTION_STATS", 2 },
  { "DEVICE_STATE", 0 },
  { "FENCE_CROSSING", 3 },
  { "NOTIFY", 4 },
  { "POSITION", 5 },
  { "VEHICLE_STATE", 1 },
};
const ProtobufCEnumDescriptor com__protocol__unitcom_event__event_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "com.protocol.UnitcomEvent.EventType",
  "EventType",
  "Com__Protocol__UnitcomEvent__EventType",
  "com.protocol",
  6,
  com__protocol__unitcom_event__event_type__enum_values_by_number,
  6,
  com__protocol__unitcom_event__event_type__enum_values_by_name,
  1,
  com__protocol__unitcom_event__event_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor com__protocol__unitcom_event__field_descriptors[7] =
{
  {
    "type",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    offsetof(Com__Protocol__UnitcomEvent, has_type),
    offsetof(Com__Protocol__UnitcomEvent, type),
    &com__protocol__unitcom_event__event_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "device_state",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Com__Protocol__UnitcomEvent, event_case),
    offsetof(Com__Protocol__UnitcomEvent, device_state),
    &com__protocol__unitcom_event__device_state_event__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "vehicle_state",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Com__Protocol__UnitcomEvent, event_case),
    offsetof(Com__Protocol__UnitcomEvent, vehicle_state),
    &com__protocol__unitcom_event__vehicle_state_event__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "connection_stats",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Com__Protocol__UnitcomEvent, event_case),
    offsetof(Com__Protocol__UnitcomEvent, connection_stats),
    &com__protocol__unitcom_event__connection_stats_event__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "fence_crossing",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Com__Protocol__UnitcomEvent, event_case),
    offsetof(Com__Protocol__UnitcomEvent, fence_crossing),
    &com__protocol__unitcom_event__fence_crossing_event__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "notify",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Com__Protocol__UnitcomEvent, event_case),
    offsetof(Com__Protocol__UnitcomEvent, notify),
    &com__protocol__unitcom_event__notify_event__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "position",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Com__Protocol__UnitcomEvent, event_case),
    offsetof(Com__Protocol__UnitcomEvent, position),
    &com__protocol__unitcom_event__position_event__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned com__protocol__unitcom_event__field_indices_by_name[] = {
  3,   /* field[3] = connection_stats */
  1,   /* field[1] = device_state */
  4,   /* field[4] = fence_crossing */
  5,   /* field[5] = notify */
  6,   /* field[6] = position */
  0,   /* field[0] = type */
  2,   /* field[2] = vehicle_state */
};
static const ProtobufCIntRange com__protocol__unitcom_event__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 7 }
};
const ProtobufCMessageDescriptor com__protocol__unitcom_event__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "com.protocol.UnitcomEvent",
  "UnitcomEvent",
  "Com__Protocol__UnitcomEvent",
  "com.protocol",
  sizeof(Com__Protocol__UnitcomEvent),
  7,
  com__protocol__unitcom_event__field_descriptors,
  com__protocol__unitcom_event__field_indices_by_name,
  1,  com__protocol__unitcom_event__number_ranges,
  (ProtobufCMessageInit) com__protocol__unitcom_event__init,
  NULL,NULL,NULL    /* reserved[123] */
};
