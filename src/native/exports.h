#pragma once

#include "types.h"

typedef NodeString    (*NodeStringTypeFunction)(const NodeCallbackInfo &info);
typedef NodeNumber    (*NodeNumberTypeFunction)(const NodeCallbackInfo &info);
typedef NodeObject    (*NodeObjectTypeFunction)(const NodeCallbackInfo &info);
typedef NodeFunction  (*NodeFunctionTypeFunction)(const NodeCallbackInfo &info);

boolean_t ExportStringTypeFunction(NodeEnv env, NodeObject exports, const string_t name, NodeStringTypeFunction function);
boolean_t ExportNumberTypeFunction(NodeEnv env, NodeObject exports, const string_t name, NodeNumberTypeFunction function);
boolean_t ExportObjectTypeFunction(NodeEnv env, NodeObject exports, const string_t name, NodeObjectTypeFunction function);
boolean_t ExportFunctionTypeFunction(NodeEnv env, NodeObject exports, const string_t name, NodeFunctionTypeFunction function);

boolean_t ExportString(NodeEnv env, NodeObject exports, const string_t name, const char16_t* value);
boolean_t ExportNumber(NodeEnv env, NodeObject exports, const string_t name, double value);
boolean_t ExportObject(NodeEnv env, NodeObject exports, const string_t name, const NodeObject& object);
