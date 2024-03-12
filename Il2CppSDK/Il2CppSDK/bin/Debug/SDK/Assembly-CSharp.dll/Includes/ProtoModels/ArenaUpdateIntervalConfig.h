#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUpdateIntervalConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUpdateIntervalConfig"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& EnabledFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& enabled_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& EventIntervalFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& eventInterval_() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> static T& UpdateIntervalFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& updateInterval_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& LimitFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& limit_() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0xF545E8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5464C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaUpdateIntervalConfig*))(Il2CppBase() + 0xF5476C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaUpdateIntervalConfig*))(Il2CppBase() + 0xF5481C))(this);
	}
	template <typename T = bool> T get_Enabled() {
		return ((T (*)(ArenaUpdateIntervalConfig*))(Il2CppBase() + 0xF54878))(this);
	}
	template <typename T = void> T set_Enabled(bool value) {
		return ((T (*)(ArenaUpdateIntervalConfig*, bool))(Il2CppBase() + 0xF54880))(this, value);
	}
	template <typename T = int32_t> T get_EventInterval() {
		return ((T (*)(ArenaUpdateIntervalConfig*))(Il2CppBase() + 0xF5488C))(this);
	}
	template <typename T = void> T set_EventInterval(int32_t value) {
		return ((T (*)(ArenaUpdateIntervalConfig*, int32_t))(Il2CppBase() + 0xF54894))(this, value);
	}
	template <typename T = int32_t> T get_UpdateInterval() {
		return ((T (*)(ArenaUpdateIntervalConfig*))(Il2CppBase() + 0xF5489C))(this);
	}
	template <typename T = void> T set_UpdateInterval(int32_t value) {
		return ((T (*)(ArenaUpdateIntervalConfig*, int32_t))(Il2CppBase() + 0xF548A4))(this, value);
	}
	template <typename T = int32_t> T get_Limit() {
		return ((T (*)(ArenaUpdateIntervalConfig*))(Il2CppBase() + 0xF548AC))(this);
	}
	template <typename T = void> T set_Limit(int32_t value) {
		return ((T (*)(ArenaUpdateIntervalConfig*, int32_t))(Il2CppBase() + 0xF548B4))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaUpdateIntervalConfig*, uintptr_t))(Il2CppBase() + 0xF548BC))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaUpdateIntervalConfig*, uintptr_t))(Il2CppBase() + 0xF5492C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaUpdateIntervalConfig*))(Il2CppBase() + 0xF5499C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaUpdateIntervalConfig*))(Il2CppBase() + 0xF54A40))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaUpdateIntervalConfig*, uintptr_t))(Il2CppBase() + 0xF54AA4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaUpdateIntervalConfig*))(Il2CppBase() + 0xF54B80))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaUpdateIntervalConfig*, uintptr_t))(Il2CppBase() + 0xF54C8C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaUpdateIntervalConfig*, uintptr_t))(Il2CppBase() + 0xF54CC4))(this, input);
	}

};

}
