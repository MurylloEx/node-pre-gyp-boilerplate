#include "exports.h"

template <typename Callable>
boolean_t ExportFunction(NodeEnv env, NodeObject exports, const string_t name, Callable* function) {
  return exports.Set(
    NodeString::New(env, name),
    NodeFunction::New(env, function)
  );
}

boolean_t ExportString(NodeEnv env, NodeObject exports, const string_t name, const char16_t* value) {
  return exports.Set(
    NodeString::New(env, name),
    NodeString::New(env, value)
  );
}

boolean_t ExportNumber(NodeEnv env, NodeObject exports, const string_t name, double value) {
  return exports.Set(
    NodeString::New(env, name),
    NodeNumber::New(env, value)
  );
}

boolean_t ExportObject(NodeEnv env, NodeObject exports, const string_t name, const NodeObject& object) {
  return exports.Set(NodeString::New(env, name), object);
}

boolean_t ExportStringTypeFunction(NodeEnv env, NodeObject exports, const string_t name, NodeStringTypeFunction function) {
  return ExportFunction(env, exports, name, function);
}

boolean_t ExportNumberTypeFunction(NodeEnv env, NodeObject exports, const string_t name, NodeNumberTypeFunction function) {
  return ExportFunction(env, exports, name, function);
}

boolean_t ExportObjectTypeFunction(NodeEnv env, NodeObject exports, const string_t name, NodeObjectTypeFunction function) {
  return ExportFunction(env, exports, name, function);
}

boolean_t ExportFunctionTypeFunction(NodeEnv env, NodeObject exports, const string_t name, NodeFunctionTypeFunction function) {
  return ExportFunction(env, exports, name, function);
}
