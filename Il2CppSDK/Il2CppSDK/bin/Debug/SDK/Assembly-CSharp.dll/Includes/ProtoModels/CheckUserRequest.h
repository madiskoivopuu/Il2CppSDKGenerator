#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CheckUserRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CheckUserRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& DeviceIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& deviceID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& GoogleIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& googleID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& GamecenterIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& gamecenterID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& FBTokenFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& fBToken_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x173D38C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x173D3F0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(CheckUserRequest*))(Il2CppBase() + 0x173D510))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(CheckUserRequest*))(Il2CppBase() + 0x173D65C))(this);
	}
	template <typename T = Il2CppString*> T get_DeviceID() {
		return ((T (*)(CheckUserRequest*))(Il2CppBase() + 0x173D6B8))(this);
	}
	template <typename T = void> T set_DeviceID(Il2CppString* value) {
		return ((T (*)(CheckUserRequest*, Il2CppString*))(Il2CppBase() + 0x173D6C0))(this, value);
	}
	template <typename T = Il2CppString*> T get_GoogleID() {
		return ((T (*)(CheckUserRequest*))(Il2CppBase() + 0x173D740))(this);
	}
	template <typename T = void> T set_GoogleID(Il2CppString* value) {
		return ((T (*)(CheckUserRequest*, Il2CppString*))(Il2CppBase() + 0x173D748))(this, value);
	}
	template <typename T = Il2CppString*> T get_GamecenterID() {
		return ((T (*)(CheckUserRequest*))(Il2CppBase() + 0x173D7C8))(this);
	}
	template <typename T = void> T set_GamecenterID(Il2CppString* value) {
		return ((T (*)(CheckUserRequest*, Il2CppString*))(Il2CppBase() + 0x173D7D0))(this, value);
	}
	template <typename T = Il2CppString*> T get_FBToken() {
		return ((T (*)(CheckUserRequest*))(Il2CppBase() + 0x173D850))(this);
	}
	template <typename T = void> T set_FBToken(Il2CppString* value) {
		return ((T (*)(CheckUserRequest*, Il2CppString*))(Il2CppBase() + 0x173D858))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(CheckUserRequest*, uintptr_t))(Il2CppBase() + 0x173D8D8))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(CheckUserRequest*, uintptr_t))(Il2CppBase() + 0x173D948))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(CheckUserRequest*))(Il2CppBase() + 0x173D9D8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CheckUserRequest*))(Il2CppBase() + 0x173DA84))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(CheckUserRequest*, uintptr_t))(Il2CppBase() + 0x173DAE8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(CheckUserRequest*))(Il2CppBase() + 0x173DBE4))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(CheckUserRequest*, uintptr_t))(Il2CppBase() + 0x173DD44))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(CheckUserRequest*, uintptr_t))(Il2CppBase() + 0x173DDD4))(this, input);
	}

};

}
