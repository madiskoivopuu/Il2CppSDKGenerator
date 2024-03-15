#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminRpcRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminRpcRequest"));
	}

	 static MessageParser1ProtoModels::AdminRpcRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::AdminRpcRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CommandFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& command_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::AdminRpcRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::AdminRpcRequest*>* (*)(void *))(Il2CppBase() + 0x12945E8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x129464C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(AdminRpcRequest*))(Il2CppBase() + 0x129476C))(this);
	}
	template <typename R = ProtoModels::AdminRpcRequest*> R Clone() {
		return ((R (*)(AdminRpcRequest*))(Il2CppBase() + 0x1294860))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(AdminRpcRequest*))(Il2CppBase() + 0x12948BC))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(AdminRpcRequest*, int64_t))(Il2CppBase() + 0x12948C4))(this, value);
	}
	template <typename R = Il2CppString*> R get_Command() {
		return ((R (*)(AdminRpcRequest*))(Il2CppBase() + 0x12948CC))(this);
	}
	template <typename R = void> R set_Command(Il2CppString* value) {
		return ((R (*)(AdminRpcRequest*, Il2CppString*))(Il2CppBase() + 0x12948D4))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(AdminRpcRequest*, Il2CppObject*))(Il2CppBase() + 0x1294954))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::AdminRpcRequest* other) {
		return ((R (*)(AdminRpcRequest*, ProtoModels::AdminRpcRequest*))(Il2CppBase() + 0x12949C4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(AdminRpcRequest*))(Il2CppBase() + 0x1294A18))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(AdminRpcRequest*))(Il2CppBase() + 0x1294A8C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(AdminRpcRequest*, uintptr_t))(Il2CppBase() + 0x1294AF0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(AdminRpcRequest*))(Il2CppBase() + 0x1294B7C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::AdminRpcRequest* other) {
		return ((R (*)(AdminRpcRequest*, ProtoModels::AdminRpcRequest*))(Il2CppBase() + 0x1294C3C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(AdminRpcRequest*, uintptr_t))(Il2CppBase() + 0x1294C70))(this, input);
	}

};

}
