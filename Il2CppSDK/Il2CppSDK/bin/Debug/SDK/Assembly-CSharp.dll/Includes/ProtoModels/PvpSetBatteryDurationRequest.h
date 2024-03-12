#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PvpSetBatteryDurationRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PvpSetBatteryDurationRequest"));
	}

	template <typename T = void*> static T& _parser() {
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
	template <typename T = int32_t> static T& DurationFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& duration_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x11C34B8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x11C351C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(PvpSetBatteryDurationRequest*))(Il2CppBase() + 0x11C363C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(PvpSetBatteryDurationRequest*))(Il2CppBase() + 0x11C36E4))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(PvpSetBatteryDurationRequest*))(Il2CppBase() + 0x11C3740))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(PvpSetBatteryDurationRequest*, int64_t))(Il2CppBase() + 0x11C3748))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(PvpSetBatteryDurationRequest*))(Il2CppBase() + 0x11C3750))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(PvpSetBatteryDurationRequest*, int64_t))(Il2CppBase() + 0x11C3758))(this, value);
	}
	template <typename T = int64_t> T get_Duration() {
		return ((T (*)(PvpSetBatteryDurationRequest*))(Il2CppBase() + 0x11C3760))(this);
	}
	template <typename T = void> T set_Duration(int64_t value) {
		return ((T (*)(PvpSetBatteryDurationRequest*, int64_t))(Il2CppBase() + 0x11C3768))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(PvpSetBatteryDurationRequest*, uintptr_t))(Il2CppBase() + 0x11C3770))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(PvpSetBatteryDurationRequest*, uintptr_t))(Il2CppBase() + 0x11C381C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PvpSetBatteryDurationRequest*))(Il2CppBase() + 0x11C386C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PvpSetBatteryDurationRequest*))(Il2CppBase() + 0x11C38F4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(PvpSetBatteryDurationRequest*, uintptr_t))(Il2CppBase() + 0x11C3958))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(PvpSetBatteryDurationRequest*))(Il2CppBase() + 0x11C3A08))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(PvpSetBatteryDurationRequest*, uintptr_t))(Il2CppBase() + 0x11C3B00))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(PvpSetBatteryDurationRequest*, uintptr_t))(Il2CppBase() + 0x11C3B2C))(this, input);
	}

};

}
