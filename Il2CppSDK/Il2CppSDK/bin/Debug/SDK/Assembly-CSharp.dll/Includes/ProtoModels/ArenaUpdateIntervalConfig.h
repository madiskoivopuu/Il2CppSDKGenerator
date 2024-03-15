#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUpdateIntervalConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUpdateIntervalConfig"));
	}

	 static MessageParser1<ProtoModels::ArenaUpdateIntervalConfig*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaUpdateIntervalConfig*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& EnabledFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& enabled_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& EventIntervalFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& eventInterval_() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> static R& UpdateIntervalFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& updateInterval_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& LimitFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& limit_() {
		return *(R*)((uintptr_t)this + 0x1C);
	}

	 static MessageParser1<ProtoModels::ArenaUpdateIntervalConfig*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaUpdateIntervalConfig*>* (*)(void *))(Il2CppBase() + 0xF545E8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0xF5464C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaUpdateIntervalConfig*))(Il2CppBase() + 0xF5476C))(this);
	}
	template <typename R = ProtoModels::ArenaUpdateIntervalConfig*> R Clone() {
		return ((R (*)(ArenaUpdateIntervalConfig*))(Il2CppBase() + 0xF5481C))(this);
	}
	template <typename R = bool> R get_Enabled() {
		return ((R (*)(ArenaUpdateIntervalConfig*))(Il2CppBase() + 0xF54878))(this);
	}
	template <typename R = void> R set_Enabled(bool value) {
		return ((R (*)(ArenaUpdateIntervalConfig*, bool))(Il2CppBase() + 0xF54880))(this, value);
	}
	template <typename R = int32_t> R get_EventInterval() {
		return ((R (*)(ArenaUpdateIntervalConfig*))(Il2CppBase() + 0xF5488C))(this);
	}
	template <typename R = void> R set_EventInterval(int32_t value) {
		return ((R (*)(ArenaUpdateIntervalConfig*, int32_t))(Il2CppBase() + 0xF54894))(this, value);
	}
	template <typename R = int32_t> R get_UpdateInterval() {
		return ((R (*)(ArenaUpdateIntervalConfig*))(Il2CppBase() + 0xF5489C))(this);
	}
	template <typename R = void> R set_UpdateInterval(int32_t value) {
		return ((R (*)(ArenaUpdateIntervalConfig*, int32_t))(Il2CppBase() + 0xF548A4))(this, value);
	}
	template <typename R = int32_t> R get_Limit() {
		return ((R (*)(ArenaUpdateIntervalConfig*))(Il2CppBase() + 0xF548AC))(this);
	}
	template <typename R = void> R set_Limit(int32_t value) {
		return ((R (*)(ArenaUpdateIntervalConfig*, int32_t))(Il2CppBase() + 0xF548B4))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaUpdateIntervalConfig*, Il2CppObject*))(Il2CppBase() + 0xF548BC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaUpdateIntervalConfig* other) {
		return ((R (*)(ArenaUpdateIntervalConfig*, ProtoModels::ArenaUpdateIntervalConfig*))(Il2CppBase() + 0xF5492C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaUpdateIntervalConfig*))(Il2CppBase() + 0xF5499C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaUpdateIntervalConfig*))(Il2CppBase() + 0xF54A40))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaUpdateIntervalConfig*, uintptr_t))(Il2CppBase() + 0xF54AA4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaUpdateIntervalConfig*))(Il2CppBase() + 0xF54B80))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaUpdateIntervalConfig* other) {
		return ((R (*)(ArenaUpdateIntervalConfig*, ProtoModels::ArenaUpdateIntervalConfig*))(Il2CppBase() + 0xF54C8C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaUpdateIntervalConfig*, uintptr_t))(Il2CppBase() + 0xF54CC4))(this, input);
	}

};

}
