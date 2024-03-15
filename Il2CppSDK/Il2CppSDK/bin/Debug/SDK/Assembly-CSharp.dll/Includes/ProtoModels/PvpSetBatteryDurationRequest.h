#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PvpSetBatteryDurationRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PvpSetBatteryDurationRequest"));
	}

	 static MessageParser1ProtoModels::PvpSetBatteryDurationRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::PvpSetBatteryDurationRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& DurationFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& duration_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::PvpSetBatteryDurationRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::PvpSetBatteryDurationRequest*>* (*)(void *))(Il2CppBase() + 0x11C34B8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x11C351C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(PvpSetBatteryDurationRequest*))(Il2CppBase() + 0x11C363C))(this);
	}
	template <typename R = ProtoModels::PvpSetBatteryDurationRequest*> R Clone() {
		return ((R (*)(PvpSetBatteryDurationRequest*))(Il2CppBase() + 0x11C36E4))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(PvpSetBatteryDurationRequest*))(Il2CppBase() + 0x11C3740))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(PvpSetBatteryDurationRequest*, int64_t))(Il2CppBase() + 0x11C3748))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(PvpSetBatteryDurationRequest*))(Il2CppBase() + 0x11C3750))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(PvpSetBatteryDurationRequest*, int64_t))(Il2CppBase() + 0x11C3758))(this, value);
	}
	template <typename R = int64_t> R get_Duration() {
		return ((R (*)(PvpSetBatteryDurationRequest*))(Il2CppBase() + 0x11C3760))(this);
	}
	template <typename R = void> R set_Duration(int64_t value) {
		return ((R (*)(PvpSetBatteryDurationRequest*, int64_t))(Il2CppBase() + 0x11C3768))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(PvpSetBatteryDurationRequest*, Il2CppObject*))(Il2CppBase() + 0x11C3770))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::PvpSetBatteryDurationRequest* other) {
		return ((R (*)(PvpSetBatteryDurationRequest*, ProtoModels::PvpSetBatteryDurationRequest*))(Il2CppBase() + 0x11C381C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(PvpSetBatteryDurationRequest*))(Il2CppBase() + 0x11C386C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(PvpSetBatteryDurationRequest*))(Il2CppBase() + 0x11C38F4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(PvpSetBatteryDurationRequest*, uintptr_t))(Il2CppBase() + 0x11C3958))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(PvpSetBatteryDurationRequest*))(Il2CppBase() + 0x11C3A08))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::PvpSetBatteryDurationRequest* other) {
		return ((R (*)(PvpSetBatteryDurationRequest*, ProtoModels::PvpSetBatteryDurationRequest*))(Il2CppBase() + 0x11C3B00))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(PvpSetBatteryDurationRequest*, uintptr_t))(Il2CppBase() + 0x11C3B2C))(this, input);
	}

};

}
