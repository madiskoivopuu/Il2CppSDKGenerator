#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PvpSetBatteryRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PvpSetBatteryRequest"));
	}

	template <typename T = MessageParser1PvpSetBatteryRequest*>*> static T& _parser() {
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

	template <typename T = MessageParser1PvpSetBatteryRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x11C3CF4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x11C3D58))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(PvpSetBatteryRequest*))(Il2CppBase() + 0x11C3E78))(this);
	}
	template <typename T = PvpSetBatteryRequest*> T Clone() {
		return ((T (*)(PvpSetBatteryRequest*))(Il2CppBase() + 0x11C3F18))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(PvpSetBatteryRequest*))(Il2CppBase() + 0x11C3F74))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(PvpSetBatteryRequest*, int64_t))(Il2CppBase() + 0x11C3F7C))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(PvpSetBatteryRequest*))(Il2CppBase() + 0x11C3F84))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(PvpSetBatteryRequest*, int64_t))(Il2CppBase() + 0x11C3F8C))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(PvpSetBatteryRequest*, Il2CppObject*))(Il2CppBase() + 0x11C3F94))(this, other);
	}
	template <typename T = bool> T Equals_1(PvpSetBatteryRequest* other) {
		return ((T (*)(PvpSetBatteryRequest*, PvpSetBatteryRequest*))(Il2CppBase() + 0x11C4030))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PvpSetBatteryRequest*))(Il2CppBase() + 0x11C4070))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PvpSetBatteryRequest*))(Il2CppBase() + 0x11C40DC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(PvpSetBatteryRequest*, uintptr_t))(Il2CppBase() + 0x11C4140))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(PvpSetBatteryRequest*))(Il2CppBase() + 0x11C41C4))(this);
	}
	template <typename T = void> T MergeFrom(PvpSetBatteryRequest* other) {
		return ((T (*)(PvpSetBatteryRequest*, PvpSetBatteryRequest*))(Il2CppBase() + 0x11C4278))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(PvpSetBatteryRequest*, uintptr_t))(Il2CppBase() + 0x11C4298))(this, input);
	}

};

}
