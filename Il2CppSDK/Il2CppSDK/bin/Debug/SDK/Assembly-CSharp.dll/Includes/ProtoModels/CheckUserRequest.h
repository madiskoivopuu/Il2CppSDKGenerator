#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CheckUserRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CheckUserRequest"));
	}

	 static MessageParser1<ProtoModels::CheckUserRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::CheckUserRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& DeviceIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& deviceID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& GoogleIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& googleID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& GamecenterIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& gamecenterID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& FBTokenFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& fBToken_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::CheckUserRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::CheckUserRequest*>* (*)(void *))(Il2CppBase() + 0x173D38C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x173D3F0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(CheckUserRequest*))(Il2CppBase() + 0x173D510))(this);
	}
	template <typename R = ProtoModels::CheckUserRequest*> R Clone() {
		return ((R (*)(CheckUserRequest*))(Il2CppBase() + 0x173D65C))(this);
	}
	template <typename R = Il2CppString*> R get_DeviceID() {
		return ((R (*)(CheckUserRequest*))(Il2CppBase() + 0x173D6B8))(this);
	}
	template <typename R = void> R set_DeviceID(Il2CppString* value) {
		return ((R (*)(CheckUserRequest*, Il2CppString*))(Il2CppBase() + 0x173D6C0))(this, value);
	}
	template <typename R = Il2CppString*> R get_GoogleID() {
		return ((R (*)(CheckUserRequest*))(Il2CppBase() + 0x173D740))(this);
	}
	template <typename R = void> R set_GoogleID(Il2CppString* value) {
		return ((R (*)(CheckUserRequest*, Il2CppString*))(Il2CppBase() + 0x173D748))(this, value);
	}
	template <typename R = Il2CppString*> R get_GamecenterID() {
		return ((R (*)(CheckUserRequest*))(Il2CppBase() + 0x173D7C8))(this);
	}
	template <typename R = void> R set_GamecenterID(Il2CppString* value) {
		return ((R (*)(CheckUserRequest*, Il2CppString*))(Il2CppBase() + 0x173D7D0))(this, value);
	}
	template <typename R = Il2CppString*> R get_FBToken() {
		return ((R (*)(CheckUserRequest*))(Il2CppBase() + 0x173D850))(this);
	}
	template <typename R = void> R set_FBToken(Il2CppString* value) {
		return ((R (*)(CheckUserRequest*, Il2CppString*))(Il2CppBase() + 0x173D858))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(CheckUserRequest*, Il2CppObject*))(Il2CppBase() + 0x173D8D8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::CheckUserRequest* other) {
		return ((R (*)(CheckUserRequest*, ProtoModels::CheckUserRequest*))(Il2CppBase() + 0x173D948))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(CheckUserRequest*))(Il2CppBase() + 0x173D9D8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(CheckUserRequest*))(Il2CppBase() + 0x173DA84))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(CheckUserRequest*, uintptr_t))(Il2CppBase() + 0x173DAE8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(CheckUserRequest*))(Il2CppBase() + 0x173DBE4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::CheckUserRequest* other) {
		return ((R (*)(CheckUserRequest*, ProtoModels::CheckUserRequest*))(Il2CppBase() + 0x173DD44))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(CheckUserRequest*, uintptr_t))(Il2CppBase() + 0x173DDD4))(this, input);
	}

};

}
