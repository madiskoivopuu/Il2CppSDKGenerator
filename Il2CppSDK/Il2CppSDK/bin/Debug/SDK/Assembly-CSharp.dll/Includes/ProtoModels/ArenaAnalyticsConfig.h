#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaAnalyticsConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaAnalyticsConfig"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& FPSFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& fPS_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& PingFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& ping_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A153F0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A15454))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaAnalyticsConfig*))(Il2CppBase() + 0x1A15574))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaAnalyticsConfig*))(Il2CppBase() + 0x1A15654))(this);
	}
	template <typename T = uintptr_t> T get_FPS() {
		return ((T (*)(ArenaAnalyticsConfig*))(Il2CppBase() + 0x1A156B0))(this);
	}
	template <typename T = void> T set_FPS(uintptr_t value) {
		return ((T (*)(ArenaAnalyticsConfig*, uintptr_t))(Il2CppBase() + 0x1A156B8))(this, value);
	}
	template <typename T = uintptr_t> T get_Ping() {
		return ((T (*)(ArenaAnalyticsConfig*))(Il2CppBase() + 0x1A156C0))(this);
	}
	template <typename T = void> T set_Ping(uintptr_t value) {
		return ((T (*)(ArenaAnalyticsConfig*, uintptr_t))(Il2CppBase() + 0x1A156C8))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaAnalyticsConfig*, uintptr_t))(Il2CppBase() + 0x1A156D0))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaAnalyticsConfig*, uintptr_t))(Il2CppBase() + 0x1A15740))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaAnalyticsConfig*))(Il2CppBase() + 0x1A157A4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaAnalyticsConfig*))(Il2CppBase() + 0x1A157FC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaAnalyticsConfig*, uintptr_t))(Il2CppBase() + 0x1A15860))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaAnalyticsConfig*))(Il2CppBase() + 0x1A158E4))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaAnalyticsConfig*, uintptr_t))(Il2CppBase() + 0x1A15998))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaAnalyticsConfig*, uintptr_t))(Il2CppBase() + 0x1A15A98))(this, input);
	}

};

}
