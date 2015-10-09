#include <nan.h>
using namespace v8;

NAN_METHOD(SayHello) {
  info.GetReturnValue().Set(Nan::New("Hellow world!").ToLocalChecked());
}

NAN_MODULE_INIT(InitAll) {
  Nan::Set(target, Nan::New("sayHello").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(SayHello)).ToLocalChecked());
}

NODE_MODULE(NativeExtension, InitAll)
