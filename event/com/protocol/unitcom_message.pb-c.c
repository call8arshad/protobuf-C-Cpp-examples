/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: com/protocol/unitcom_message.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "com/protocol/unitcom_message.pb-c.h"
void   com__protocol__unitcom_message__init
                     (Com__Protocol__UnitcomMessage         *message)
{
  static Com__Protocol__UnitcomMessage init_value = COM__PROTOCOL__UNITCOM_MESSAGE__INIT;
  *message = init_value;
}
size_t com__protocol__unitcom_message__get_packed_size
                     (const Com__Protocol__UnitcomMessage *message)
{
  assert(message->base.descriptor == &com__protocol__unitcom_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t com__protocol__unitcom_message__pack
                     (const Com__Protocol__UnitcomMessage *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &com__protocol__unitcom_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t com__protocol__unitcom_message__pack_to_buffer
                     (const Com__Protocol__UnitcomMessage *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &com__protocol__unitcom_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Com__Protocol__UnitcomMessage *
       com__protocol__unitcom_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Com__Protocol__UnitcomMessage *)
     protobuf_c_message_unpack (&com__protocol__unitcom_message__descriptor,
                                allocator, len, data);
}
void   com__protocol__unitcom_message__free_unpacked
                     (Com__Protocol__UnitcomMessage *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &com__protocol__unitcom_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCEnumValue com__protocol__unitcom_message__message_type__enum_values_by_number[1] =
{
  { "EVENT", "COM__PROTOCOL__UNITCOM_MESSAGE__MESSAGE_TYPE__EVENT", 0 },
};
static const ProtobufCIntRange com__protocol__unitcom_message__message_type__value_ranges[] = {
{0, 0},{0, 1}
};
static const ProtobufCEnumValueIndex com__protocol__unitcom_message__message_type__enum_values_by_name[1] =
{
  { "EVENT", 0 },
};
const ProtobufCEnumDescriptor com__protocol__unitcom_message__message_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "com.protocol.UnitcomMessage.MessageType",
  "MessageType",
  "Com__Protocol__UnitcomMessage__MessageType",
  "com.protocol",
  1,
  com__protocol__unitcom_message__message_type__enum_values_by_number,
  1,
  com__protocol__unitcom_message__message_type__enum_values_by_name,
  1,
  com__protocol__unitcom_message__message_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor com__protocol__unitcom_message__field_descriptors[2] =
{
  {
    "type",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    offsetof(Com__Protocol__UnitcomMessage, has_type),
    offsetof(Com__Protocol__UnitcomMessage, type),
    &com__protocol__unitcom_message__message_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "event",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Com__Protocol__UnitcomMessage, n_event),
    offsetof(Com__Protocol__UnitcomMessage, event),
    &com__protocol__unitcom_event__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned com__protocol__unitcom_message__field_indices_by_name[] = {
  1,   /* field[1] = event */
  0,   /* field[0] = type */
};
static const ProtobufCIntRange com__protocol__unitcom_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor com__protocol__unitcom_message__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "com.protocol.UnitcomMessage",
  "UnitcomMessage",
  "Com__Protocol__UnitcomMessage",
  "com.protocol",
  sizeof(Com__Protocol__UnitcomMessage),
  2,
  com__protocol__unitcom_message__field_descriptors,
  com__protocol__unitcom_message__field_indices_by_name,
  1,  com__protocol__unitcom_message__number_ranges,
  (ProtobufCMessageInit) com__protocol__unitcom_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
