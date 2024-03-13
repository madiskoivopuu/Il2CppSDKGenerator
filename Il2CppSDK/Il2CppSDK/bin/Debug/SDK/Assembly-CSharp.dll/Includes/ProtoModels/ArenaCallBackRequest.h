#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaCallBackRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaCallBackRequest"));
	}

	template <typename T = MessageParser1ArenaCallBackRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CallbackIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& callbackID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1ArenaCallBackRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A19BE4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A19C48))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaCallBackRequest*))(Il2CppBase() + 0x1A19D68))(this);
	}
	template <typename T = ArenaCallBackRequest*> T Clone() {
		return ((T (*)(ArenaCallBackRequest*))(Il2CppBase() + 0x1A19E08))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaCallBackRequest*))(Il2CppBase() + 0x1A19E64))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaCallBackRequest*, int64_t))(Il2CppBase() + 0x1A19E6C))(this, value);
	}
	template <typename T = int64_t> T get_CallbackID() {
		return ((T (*)(ArenaCallBackRequest*))(Il2CppBase() + 0x1A19E74))(this);
	}
	template <typename T = void> T set_CallbackID(int64_t value) {
		return ((T (*)(ArenaCallBackRequest*, int64_t))(Il2CppBase() + 0x1A19E7C))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaCallBackRequest*, Il2CppObject*))(Il2CppBase() + 0x1A19E84))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaCallBackRequest* other) {
		return ((T (*)(ArenaCallBackRequest*, ArenaCallBackRequest*))(Il2CppBase() + 0x1A19F20))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaCallBackRequest*))(Il2CppBase() + 0x1A19F60))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaCallBackRequest*))(Il2CppBase() + 0x1A19FCC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaCallBackRequest*, uintptr_t))(Il2CppBase() + 0x1A1A030))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaCallBackRequest*))(Il2CppBase() + 0x1A1A0B4))(this);
	}
	template <typename T = void> T MergeFrom(ArenaCallBackRequest* other) {
		return ((T (*)(ArenaCallBackRequest*, ArenaCallBackRequest*))(Il2CppBase() + 0x1A1A168))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaCallBackRequest*, uintptr_t))(Il2CppBase() + 0x1A1A188))(this, input);
	}

};

}
