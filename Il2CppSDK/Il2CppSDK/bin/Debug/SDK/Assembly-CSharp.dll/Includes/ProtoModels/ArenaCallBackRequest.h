#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaCallBackRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaCallBackRequest"));
	}

	 static MessageParser1<ProtoModels::ArenaCallBackRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaCallBackRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CallbackIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& callbackID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::ArenaCallBackRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaCallBackRequest*>* (*)(void *))(Il2CppBase() + 0x1A19BE4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A19C48))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaCallBackRequest*))(Il2CppBase() + 0x1A19D68))(this);
	}
	template <typename R = ProtoModels::ArenaCallBackRequest*> R Clone() {
		return ((R (*)(ArenaCallBackRequest*))(Il2CppBase() + 0x1A19E08))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaCallBackRequest*))(Il2CppBase() + 0x1A19E64))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaCallBackRequest*, int64_t))(Il2CppBase() + 0x1A19E6C))(this, value);
	}
	template <typename R = int64_t> R get_CallbackID() {
		return ((R (*)(ArenaCallBackRequest*))(Il2CppBase() + 0x1A19E74))(this);
	}
	template <typename R = void> R set_CallbackID(int64_t value) {
		return ((R (*)(ArenaCallBackRequest*, int64_t))(Il2CppBase() + 0x1A19E7C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaCallBackRequest*, Il2CppObject*))(Il2CppBase() + 0x1A19E84))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaCallBackRequest* other) {
		return ((R (*)(ArenaCallBackRequest*, ProtoModels::ArenaCallBackRequest*))(Il2CppBase() + 0x1A19F20))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaCallBackRequest*))(Il2CppBase() + 0x1A19F60))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaCallBackRequest*))(Il2CppBase() + 0x1A19FCC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaCallBackRequest*, uintptr_t))(Il2CppBase() + 0x1A1A030))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaCallBackRequest*))(Il2CppBase() + 0x1A1A0B4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaCallBackRequest* other) {
		return ((R (*)(ArenaCallBackRequest*, ProtoModels::ArenaCallBackRequest*))(Il2CppBase() + 0x1A1A168))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaCallBackRequest*, uintptr_t))(Il2CppBase() + 0x1A1A188))(this, input);
	}

};

}
