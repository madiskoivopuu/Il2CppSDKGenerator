#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class SetRaidMatchingTimeoutRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "SetRaidMatchingTimeoutRequest"));
	}

	template <typename T = MessageParser1SetRaidMatchingTimeoutRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& EndDateTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& endDateTime_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1SetRaidMatchingTimeoutRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x162523C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x16252A0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(SetRaidMatchingTimeoutRequest*))(Il2CppBase() + 0x16253C0))(this);
	}
	template <typename T = SetRaidMatchingTimeoutRequest*> T Clone() {
		return ((T (*)(SetRaidMatchingTimeoutRequest*))(Il2CppBase() + 0x1625468))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(SetRaidMatchingTimeoutRequest*))(Il2CppBase() + 0x16254C4))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(SetRaidMatchingTimeoutRequest*, int64_t))(Il2CppBase() + 0x16254CC))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(SetRaidMatchingTimeoutRequest*))(Il2CppBase() + 0x16254D4))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(SetRaidMatchingTimeoutRequest*, int64_t))(Il2CppBase() + 0x16254DC))(this, value);
	}
	template <typename T = int64_t> T get_EndDateTime() {
		return ((T (*)(SetRaidMatchingTimeoutRequest*))(Il2CppBase() + 0x16254E4))(this);
	}
	template <typename T = void> T set_EndDateTime(int64_t value) {
		return ((T (*)(SetRaidMatchingTimeoutRequest*, int64_t))(Il2CppBase() + 0x16254EC))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(SetRaidMatchingTimeoutRequest*, Il2CppObject*))(Il2CppBase() + 0x16254F4))(this, other);
	}
	template <typename T = bool> T Equals_1(SetRaidMatchingTimeoutRequest* other) {
		return ((T (*)(SetRaidMatchingTimeoutRequest*, SetRaidMatchingTimeoutRequest*))(Il2CppBase() + 0x16255A0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(SetRaidMatchingTimeoutRequest*))(Il2CppBase() + 0x16255F0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(SetRaidMatchingTimeoutRequest*))(Il2CppBase() + 0x1625678))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(SetRaidMatchingTimeoutRequest*, uintptr_t))(Il2CppBase() + 0x16256DC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(SetRaidMatchingTimeoutRequest*))(Il2CppBase() + 0x162578C))(this);
	}
	template <typename T = void> T MergeFrom(SetRaidMatchingTimeoutRequest* other) {
		return ((T (*)(SetRaidMatchingTimeoutRequest*, SetRaidMatchingTimeoutRequest*))(Il2CppBase() + 0x1625884))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(SetRaidMatchingTimeoutRequest*, uintptr_t))(Il2CppBase() + 0x16258B0))(this, input);
	}

};

}
