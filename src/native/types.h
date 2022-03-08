#pragma once

#include <napi.h> //Node API

typedef unsigned char       uint8_t           *puint8_t;
typedef unsigned short      uint16_t          *puint16_t;
typedef unsigned int        uint32_t          *puint32_t;
typedef unsigned long       uint64_t          *puint64_t;
typedef uint8_t             byte_t,           *pbyte_t;
typedef char*               string_t,         *pstring_t;
typedef wchar_t*            wstring_t,        *pwstring_t;
typedef bool                boolean_t,        *pboolean_t;
typedef float               float_t,          *pfloat_t;
typedef double              double_t,         *pdouble_t;

typedef Napi::Env           NodeEnv,          *PNodeEnv;
typedef Napi::Array         NodeArray,        *PNodeArray;
typedef Napi::Object        NodeObject,       *PNodeObject;
typedef Napi::Number        NodeNumber,       *PNodeNumber;
typedef Napi::String        NodeString,       *PNodeString;
typedef Napi::Function      NodeFunction,     *PNodeFunction;
typedef Napi::CallbackInfo  NodeCallbackInfo, *PNodeCallbackInfo;
