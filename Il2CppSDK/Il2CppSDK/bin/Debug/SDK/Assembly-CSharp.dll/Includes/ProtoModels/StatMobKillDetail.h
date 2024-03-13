#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class StatMobKillDetail
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "StatMobKillDetail"));
	}

	template <typename T = MessageParser1StatMobKillDetail*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MobNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& mobName_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& XFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& x_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& YFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& y_() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> static T& UserKillerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userKillerID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& EventTimeUnixFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& eventTimeUnix_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = MessageParser1StatMobKillDetail*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x148E250))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x148E2B4))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(StatMobKillDetail*))(Il2CppBase() + 0x148E3D4))(this);
	}
	template <typename T = StatMobKillDetail*> T Clone() {
		return ((T (*)(StatMobKillDetail*))(Il2CppBase() + 0x148E4E4))(this);
	}
	template <typename T = Il2CppString*> T get_MobName() {
		return ((T (*)(StatMobKillDetail*))(Il2CppBase() + 0x148E540))(this);
	}
	template <typename T = void> T set_MobName(Il2CppString* value) {
		return ((T (*)(StatMobKillDetail*, Il2CppString*))(Il2CppBase() + 0x148E548))(this, value);
	}
	template <typename T = int32_t> T get_X() {
		return ((T (*)(StatMobKillDetail*))(Il2CppBase() + 0x148E5C8))(this);
	}
	template <typename T = void> T set_X(int32_t value) {
		return ((T (*)(StatMobKillDetail*, int32_t))(Il2CppBase() + 0x148E5D0))(this, value);
	}
	template <typename T = int32_t> T get_Y() {
		return ((T (*)(StatMobKillDetail*))(Il2CppBase() + 0x148E5D8))(this);
	}
	template <typename T = void> T set_Y(int32_t value) {
		return ((T (*)(StatMobKillDetail*, int32_t))(Il2CppBase() + 0x148E5E0))(this, value);
	}
	template <typename T = int64_t> T get_UserKillerID() {
		return ((T (*)(StatMobKillDetail*))(Il2CppBase() + 0x148E5E8))(this);
	}
	template <typename T = void> T set_UserKillerID(int64_t value) {
		return ((T (*)(StatMobKillDetail*, int64_t))(Il2CppBase() + 0x148E5F0))(this, value);
	}
	template <typename T = int64_t> T get_EventTimeUnix() {
		return ((T (*)(StatMobKillDetail*))(Il2CppBase() + 0x148E5F8))(this);
	}
	template <typename T = void> T set_EventTimeUnix(int64_t value) {
		return ((T (*)(StatMobKillDetail*, int64_t))(Il2CppBase() + 0x148E600))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(StatMobKillDetail*, Il2CppObject*))(Il2CppBase() + 0x148E608))(this, other);
	}
	template <typename T = bool> T Equals_1(StatMobKillDetail* other) {
		return ((T (*)(StatMobKillDetail*, StatMobKillDetail*))(Il2CppBase() + 0x148E678))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(StatMobKillDetail*))(Il2CppBase() + 0x148E708))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(StatMobKillDetail*))(Il2CppBase() + 0x148E7D4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(StatMobKillDetail*, uintptr_t))(Il2CppBase() + 0x148E838))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(StatMobKillDetail*))(Il2CppBase() + 0x148E948))(this);
	}
	template <typename T = void> T MergeFrom(StatMobKillDetail* other) {
		return ((T (*)(StatMobKillDetail*, StatMobKillDetail*))(Il2CppBase() + 0x148EACC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(StatMobKillDetail*, uintptr_t))(Il2CppBase() + 0x148EB3C))(this, input);
	}

};

}
