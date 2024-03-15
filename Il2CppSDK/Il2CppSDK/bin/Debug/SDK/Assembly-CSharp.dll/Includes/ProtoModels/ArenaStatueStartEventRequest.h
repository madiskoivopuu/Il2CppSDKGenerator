#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStatueStartEventRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStatueStartEventRequest"));
	}

	 static MessageParser1ProtoModels::ArenaStatueStartEventRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaStatueStartEventRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::ArenaStatueStartEventRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaStatueStartEventRequest*>* (*)(void *))(Il2CppBase() + 0x27133F8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x271345C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaStatueStartEventRequest*))(Il2CppBase() + 0x271357C))(this);
	}
	template <typename R = ProtoModels::ArenaStatueStartEventRequest*> R Clone() {
		return ((R (*)(ArenaStatueStartEventRequest*))(Il2CppBase() + 0x271361C))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaStatueStartEventRequest*))(Il2CppBase() + 0x2713678))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaStatueStartEventRequest*, int64_t))(Il2CppBase() + 0x2713680))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaStatueStartEventRequest*))(Il2CppBase() + 0x2713688))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaStatueStartEventRequest*, int64_t))(Il2CppBase() + 0x2713690))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaStatueStartEventRequest*, Il2CppObject*))(Il2CppBase() + 0x2713698))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaStatueStartEventRequest* other) {
		return ((R (*)(ArenaStatueStartEventRequest*, ProtoModels::ArenaStatueStartEventRequest*))(Il2CppBase() + 0x2713734))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaStatueStartEventRequest*))(Il2CppBase() + 0x2713774))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaStatueStartEventRequest*))(Il2CppBase() + 0x27137E0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaStatueStartEventRequest*, uintptr_t))(Il2CppBase() + 0x2713844))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaStatueStartEventRequest*))(Il2CppBase() + 0x27138C8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaStatueStartEventRequest* other) {
		return ((R (*)(ArenaStatueStartEventRequest*, ProtoModels::ArenaStatueStartEventRequest*))(Il2CppBase() + 0x271397C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaStatueStartEventRequest*, uintptr_t))(Il2CppBase() + 0x271399C))(this, input);
	}

};

}
