#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class SetRaidMatchingTimeoutRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "SetRaidMatchingTimeoutRequest"));
	}

	 static MessageParser1ProtoModels::SetRaidMatchingTimeoutRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::SetRaidMatchingTimeoutRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& EndDateTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& endDateTime_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::SetRaidMatchingTimeoutRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::SetRaidMatchingTimeoutRequest*>* (*)(void *))(Il2CppBase() + 0x162523C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x16252A0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(SetRaidMatchingTimeoutRequest*))(Il2CppBase() + 0x16253C0))(this);
	}
	template <typename R = ProtoModels::SetRaidMatchingTimeoutRequest*> R Clone() {
		return ((R (*)(SetRaidMatchingTimeoutRequest*))(Il2CppBase() + 0x1625468))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(SetRaidMatchingTimeoutRequest*))(Il2CppBase() + 0x16254C4))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(SetRaidMatchingTimeoutRequest*, int64_t))(Il2CppBase() + 0x16254CC))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(SetRaidMatchingTimeoutRequest*))(Il2CppBase() + 0x16254D4))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(SetRaidMatchingTimeoutRequest*, int64_t))(Il2CppBase() + 0x16254DC))(this, value);
	}
	template <typename R = int64_t> R get_EndDateTime() {
		return ((R (*)(SetRaidMatchingTimeoutRequest*))(Il2CppBase() + 0x16254E4))(this);
	}
	template <typename R = void> R set_EndDateTime(int64_t value) {
		return ((R (*)(SetRaidMatchingTimeoutRequest*, int64_t))(Il2CppBase() + 0x16254EC))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(SetRaidMatchingTimeoutRequest*, Il2CppObject*))(Il2CppBase() + 0x16254F4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::SetRaidMatchingTimeoutRequest* other) {
		return ((R (*)(SetRaidMatchingTimeoutRequest*, ProtoModels::SetRaidMatchingTimeoutRequest*))(Il2CppBase() + 0x16255A0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(SetRaidMatchingTimeoutRequest*))(Il2CppBase() + 0x16255F0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(SetRaidMatchingTimeoutRequest*))(Il2CppBase() + 0x1625678))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(SetRaidMatchingTimeoutRequest*, uintptr_t))(Il2CppBase() + 0x16256DC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(SetRaidMatchingTimeoutRequest*))(Il2CppBase() + 0x162578C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::SetRaidMatchingTimeoutRequest* other) {
		return ((R (*)(SetRaidMatchingTimeoutRequest*, ProtoModels::SetRaidMatchingTimeoutRequest*))(Il2CppBase() + 0x1625884))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(SetRaidMatchingTimeoutRequest*, uintptr_t))(Il2CppBase() + 0x16258B0))(this, input);
	}

};

}
