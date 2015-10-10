#include <nan.h>
#include "hello.h"

using namespace v8;
using Nan::New;

NAN_METHOD(SayHello) {
  info.GetReturnValue().Set(New("Hellow world!").ToLocalChecked());
}
