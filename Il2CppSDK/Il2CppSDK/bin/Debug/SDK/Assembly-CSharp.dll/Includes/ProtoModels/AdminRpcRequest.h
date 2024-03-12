#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminRpcRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminRpcRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CommandFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& command_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x12945E8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x129464C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(AdminRpcRequest*))(Il2CppBase() + 0x129476C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(AdminRpcRequest*))(Il2CppBase() + 0x1294860))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(AdminRpcRequest*))(Il2CppBase() + 0x12948BC))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(AdminRpcRequest*, int64_t))(Il2CppBase() + 0x12948C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Command() {
		return ((T (*)(AdminRpcRequest*))(Il2CppBase() + 0x12948CC))(this);
	}
	template <typename T = void> T set_Command(Il2CppString* value) {
		return ((T (*)(AdminRpcRequest*, Il2CppString*))(Il2CppBase() + 0x12948D4))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(AdminRpcRequest*, uintptr_t))(Il2CppBase() + 0x1294954))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(AdminRpcRequest*, uintptr_t))(Il2CppBase() + 0x12949C4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AdminRpcRequest*))(Il2CppBase() + 0x1294A18))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AdminRpcRequest*))(Il2CppBase() + 0x1294A8C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(AdminRpcRequest*, uintptr_t))(Il2CppBase() + 0x1294AF0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(AdminRpcRequest*))(Il2CppBase() + 0x1294B7C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(AdminRpcRequest*, uintptr_t))(Il2CppBase() + 0x1294C3C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(AdminRpcRequest*, uintptr_t))(Il2CppBase() + 0x1294C70))(this, input);
	}

};

}
