#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class StatMobKillDetail
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "StatMobKillDetail"));
	}

	 static MessageParser1<ProtoModels::StatMobKillDetail*>*& _parser() {
		return *(MessageParser1<ProtoModels::StatMobKillDetail*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MobNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& mobName_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& XFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& x_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& YFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& y_() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = int32_t> static R& UserKillerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userKillerID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& EventTimeUnixFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& eventTimeUnix_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::StatMobKillDetail*>* get_Parser() {
		return ((MessageParser1<ProtoModels::StatMobKillDetail*>* (*)(void *))(Il2CppBase() + 0x148E250))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x148E2B4))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(StatMobKillDetail*))(Il2CppBase() + 0x148E3D4))(this);
	}
	template <typename R = ProtoModels::StatMobKillDetail*> R Clone() {
		return ((R (*)(StatMobKillDetail*))(Il2CppBase() + 0x148E4E4))(this);
	}
	template <typename R = Il2CppString*> R get_MobName() {
		return ((R (*)(StatMobKillDetail*))(Il2CppBase() + 0x148E540))(this);
	}
	template <typename R = void> R set_MobName(Il2CppString* value) {
		return ((R (*)(StatMobKillDetail*, Il2CppString*))(Il2CppBase() + 0x148E548))(this, value);
	}
	template <typename R = int32_t> R get_X() {
		return ((R (*)(StatMobKillDetail*))(Il2CppBase() + 0x148E5C8))(this);
	}
	template <typename R = void> R set_X(int32_t value) {
		return ((R (*)(StatMobKillDetail*, int32_t))(Il2CppBase() + 0x148E5D0))(this, value);
	}
	template <typename R = int32_t> R get_Y() {
		return ((R (*)(StatMobKillDetail*))(Il2CppBase() + 0x148E5D8))(this);
	}
	template <typename R = void> R set_Y(int32_t value) {
		return ((R (*)(StatMobKillDetail*, int32_t))(Il2CppBase() + 0x148E5E0))(this, value);
	}
	template <typename R = int64_t> R get_UserKillerID() {
		return ((R (*)(StatMobKillDetail*))(Il2CppBase() + 0x148E5E8))(this);
	}
	template <typename R = void> R set_UserKillerID(int64_t value) {
		return ((R (*)(StatMobKillDetail*, int64_t))(Il2CppBase() + 0x148E5F0))(this, value);
	}
	template <typename R = int64_t> R get_EventTimeUnix() {
		return ((R (*)(StatMobKillDetail*))(Il2CppBase() + 0x148E5F8))(this);
	}
	template <typename R = void> R set_EventTimeUnix(int64_t value) {
		return ((R (*)(StatMobKillDetail*, int64_t))(Il2CppBase() + 0x148E600))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(StatMobKillDetail*, Il2CppObject*))(Il2CppBase() + 0x148E608))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::StatMobKillDetail* other) {
		return ((R (*)(StatMobKillDetail*, ProtoModels::StatMobKillDetail*))(Il2CppBase() + 0x148E678))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(StatMobKillDetail*))(Il2CppBase() + 0x148E708))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(StatMobKillDetail*))(Il2CppBase() + 0x148E7D4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(StatMobKillDetail*, uintptr_t))(Il2CppBase() + 0x148E838))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(StatMobKillDetail*))(Il2CppBase() + 0x148E948))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::StatMobKillDetail* other) {
		return ((R (*)(StatMobKillDetail*, ProtoModels::StatMobKillDetail*))(Il2CppBase() + 0x148EACC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(StatMobKillDetail*, uintptr_t))(Il2CppBase() + 0x148EB3C))(this, input);
	}

};

}
