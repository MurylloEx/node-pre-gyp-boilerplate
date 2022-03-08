#include "module.h"

NodeString SayHelloWorldMethod(const NodeCallbackInfo& info) {
  //Simulated syscall to Win32 API
  return NodeString::New(info.Env(), "Hello world, dude!"); 
}

NodeString SayMyNameMethod(const NodeCallbackInfo& info) {
  //Simulated syscall to Win32 API
  return NodeString::New(info.Env(), "Muryllo Oliveira");
}

NodeObject ModuleEntryPoint(NodeEnv env, NodeObject exports) {
  //Export library functions to JavaScript V8 Engine
  ExportStringTypeFunction(env, exports, "sayHelloWorld", SayHelloWorldMethod);
  ExportStringTypeFunction(env, exports, "sayMyName", SayMyNameMethod);

  return exports;
}

//Define EntryPoint of Node.js Module
NODE_API_MODULE(hello, ModuleEntryPoint)
