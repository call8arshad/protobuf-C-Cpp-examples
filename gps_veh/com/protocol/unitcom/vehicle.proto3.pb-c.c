/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: com/protocol/unitcom/vehicle.proto3 */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "com/protocol/unitcom/vehicle.proto3.pb-c.h"
void   com__protocol__unitcom__vehicle_message__init
                     (Com__Protocol__Unitcom__VehicleMessage         *message)
{
  static Com__Protocol__Unitcom__VehicleMessage init_value = COM__PROTOCOL__UNITCOM__VEHICLE_MESSAGE__INIT;
  *message = init_value;
}
size_t com__protocol__unitcom__vehicle_message__get_packed_size
                     (const Com__Protocol__Unitcom__VehicleMessage *message)
{
  assert(message->base.descriptor == &com__protocol__unitcom__vehicle_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t com__protocol__unitcom__vehicle_message__pack
                     (const Com__Protocol__Unitcom__VehicleMessage *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &com__protocol__unitcom__vehicle_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t com__protocol__unitcom__vehicle_message__pack_to_buffer
                     (const Com__Protocol__Unitcom__VehicleMessage *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &com__protocol__unitcom__vehicle_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Com__Protocol__Unitcom__VehicleMessage *
       com__protocol__unitcom__vehicle_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Com__Protocol__Unitcom__VehicleMessage *)
     protobuf_c_message_unpack (&com__protocol__unitcom__vehicle_message__descriptor,
                                allocator, len, data);
}
void   com__protocol__unitcom__vehicle_message__free_unpacked
                     (Com__Protocol__Unitcom__VehicleMessage *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &com__protocol__unitcom__vehicle_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   com__protocol__unitcom__fleet_message__init
                     (Com__Protocol__Unitcom__FleetMessage         *message)
{
  static Com__Protocol__Unitcom__FleetMessage init_value = COM__PROTOCOL__UNITCOM__FLEET_MESSAGE__INIT;
  *message = init_value;
}
size_t com__protocol__unitcom__fleet_message__get_packed_size
                     (const Com__Protocol__Unitcom__FleetMessage *message)
{
  assert(message->base.descriptor == &com__protocol__unitcom__fleet_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t com__protocol__unitcom__fleet_message__pack
                     (const Com__Protocol__Unitcom__FleetMessage *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &com__protocol__unitcom__fleet_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t com__protocol__unitcom__fleet_message__pack_to_buffer
                     (const Com__Protocol__Unitcom__FleetMessage *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &com__protocol__unitcom__fleet_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Com__Protocol__Unitcom__FleetMessage *
       com__protocol__unitcom__fleet_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Com__Protocol__Unitcom__FleetMessage *)
     protobuf_c_message_unpack (&com__protocol__unitcom__fleet_message__descriptor,
                                allocator, len, data);
}
void   com__protocol__unitcom__fleet_message__free_unpacked
                     (Com__Protocol__Unitcom__FleetMessage *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &com__protocol__unitcom__fleet_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCEnumValue com__protocol__unitcom__vehicle_message__type__enum_values_by_number[1] =
{
  { "FLEET", "COM__PROTOCOL__UNITCOM__VEHICLE_MESSAGE__TYPE__FLEET", 0 },
};
static const ProtobufCIntRange com__protocol__unitcom__vehicle_message__type__value_ranges[] = {
{0, 0},{0, 1}
};
static const ProtobufCEnumValueIndex com__protocol__unitcom__vehicle_message__type__enum_values_by_name[1] =
{
  { "FLEET", 0 },
};
const ProtobufCEnumDescriptor com__protocol__unitcom__vehicle_message__type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "com.protocol.unitcom.VehicleMessage.Type",
  "Type",
  "Com__Protocol__Unitcom__VehicleMessage__Type",
  "com.protocol.unitcom",
  1,
  com__protocol__unitcom__vehicle_message__type__enum_values_by_number,
  1,
  com__protocol__unitcom__vehicle_message__type__enum_values_by_name,
  1,
  com__protocol__unitcom__vehicle_message__type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor com__protocol__unitcom__vehicle_message__field_descriptors[3] =
{
  {
    "type",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    offsetof(Com__Protocol__Unitcom__VehicleMessage, has_type),
    offsetof(Com__Protocol__Unitcom__VehicleMessage, type),
    &com__protocol__unitcom__vehicle_message__type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "timestamp",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    offsetof(Com__Protocol__Unitcom__VehicleMessage, has_timestamp),
    offsetof(Com__Protocol__Unitcom__VehicleMessage, timestamp),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "fleet_message",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Com__Protocol__Unitcom__VehicleMessage, fleet_message),
    &com__protocol__unitcom__fleet_message__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned com__protocol__unitcom__vehicle_message__field_indices_by_name[] = {
  2,   /* field[2] = fleet_message */
  1,   /* field[1] = timestamp */
  0,   /* field[0] = type */
};
static const ProtobufCIntRange com__protocol__unitcom__vehicle_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor com__protocol__unitcom__vehicle_message__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "com.protocol.unitcom.VehicleMessage",
  "VehicleMessage",
  "Com__Protocol__Unitcom__VehicleMessage",
  "com.protocol.unitcom",
  sizeof(Com__Protocol__Unitcom__VehicleMessage),
  3,
  com__protocol__unitcom__vehicle_message__field_descriptors,
  com__protocol__unitcom__vehicle_message__field_indices_by_name,
  1,  com__protocol__unitcom__vehicle_message__number_ranges,
  (ProtobufCMessageInit) com__protocol__unitcom__vehicle_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor com__protocol__unitcom__fleet_message__field_descriptors[1] =
{
  {
    "gps",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Com__Protocol__Unitcom__FleetMessage, gps),
    &com__protocol__shared__gps_data__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned com__protocol__unitcom__fleet_message__field_indices_by_name[] = {
  0,   /* field[0] = gps */
};
static const ProtobufCIntRange com__protocol__unitcom__fleet_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor com__protocol__unitcom__fleet_message__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "com.protocol.unitcom.FleetMessage",
  "FleetMessage",
  "Com__Protocol__Unitcom__FleetMessage",
  "com.protocol.unitcom",
  sizeof(Com__Protocol__Unitcom__FleetMessage),
  1,
  com__protocol__unitcom__fleet_message__field_descriptors,
  com__protocol__unitcom__fleet_message__field_indices_by_name,
  1,  com__protocol__unitcom__fleet_message__number_ranges,
  (ProtobufCMessageInit) com__protocol__unitcom__fleet_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};