#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaSendBadFpsStatsRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaSendBadFpsStatsRequest"));
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
	template <typename T = int32_t> static T& DataFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& data_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2710F7C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2710FE0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaSendBadFpsStatsRequest*))(Il2CppBase() + 0x2711100))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaSendBadFpsStatsRequest*))(Il2CppBase() + 0x27111BC))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaSendBadFpsStatsRequest*))(Il2CppBase() + 0x2711218))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaSendBadFpsStatsRequest*, int64_t))(Il2CppBase() + 0x2711220))(this, value);
	}
	template <typename T = uintptr_t> T get_Data() {
		return ((T (*)(ArenaSendBadFpsStatsRequest*))(Il2CppBase() + 0x2711228))(this);
	}
	template <typename T = void> T set_Data(uintptr_t value) {
		return ((T (*)(ArenaSendBadFpsStatsRequest*, uintptr_t))(Il2CppBase() + 0x2711230))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaSendBadFpsStatsRequest*, uintptr_t))(Il2CppBase() + 0x2711238))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaSendBadFpsStatsRequest*, uintptr_t))(Il2CppBase() + 0x27112A8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaSendBadFpsStatsRequest*))(Il2CppBase() + 0x27112E4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaSendBadFpsStatsRequest*))(Il2CppBase() + 0x271134C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaSendBadFpsStatsRequest*, uintptr_t))(Il2CppBase() + 0x27113B0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaSendBadFpsStatsRequest*))(Il2CppBase() + 0x2711434))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaSendBadFpsStatsRequest*, uintptr_t))(Il2CppBase() + 0x27114E8))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaSendBadFpsStatsRequest*, uintptr_t))(Il2CppBase() + 0x27115A0))(this, input);
	}

};

}
