#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaPvpConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaPvpConfiguration"));
	}

	 static MessageParser1<ProtoModels::ArenaPvpConfiguration*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaPvpConfiguration*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MinRaidPlayerLevelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& minRaidPlayerLevel_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& PeaceShieldTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& peaceShieldTime_() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> static R& CombatTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& combatTime_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& SearchingTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& searchingTime_() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = int32_t> static R& PassiveMaxCountOfflineFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& passiveMaxCountOffline_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ShieldTimeSecondFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& shieldTimeSecond_() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int32_t> static R& ShieldMaxSecondFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& shieldMaxSecond_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::ArenaPvpConfiguration*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaPvpConfiguration*>* (*)(void *))(Il2CppBase() + 0x1A688A8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A6890C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaPvpConfiguration*))(Il2CppBase() + 0x1A68A2C))(this);
	}
	template <typename R = ProtoModels::ArenaPvpConfiguration*> R Clone() {
		return ((R (*)(ArenaPvpConfiguration*))(Il2CppBase() + 0x1A68AF4))(this);
	}
	template <typename R = int32_t> R get_MinRaidPlayerLevel() {
		return ((R (*)(ArenaPvpConfiguration*))(Il2CppBase() + 0x1A68B50))(this);
	}
	template <typename R = void> R set_MinRaidPlayerLevel(int32_t value) {
		return ((R (*)(ArenaPvpConfiguration*, int32_t))(Il2CppBase() + 0x1A68B58))(this, value);
	}
	template <typename R = int32_t> R get_PeaceShieldTime() {
		return ((R (*)(ArenaPvpConfiguration*))(Il2CppBase() + 0x1A68B60))(this);
	}
	template <typename R = void> R set_PeaceShieldTime(int32_t value) {
		return ((R (*)(ArenaPvpConfiguration*, int32_t))(Il2CppBase() + 0x1A68B68))(this, value);
	}
	template <typename R = int32_t> R get_CombatTime() {
		return ((R (*)(ArenaPvpConfiguration*))(Il2CppBase() + 0x1A68B70))(this);
	}
	template <typename R = void> R set_CombatTime(int32_t value) {
		return ((R (*)(ArenaPvpConfiguration*, int32_t))(Il2CppBase() + 0x1A68B78))(this, value);
	}
	template <typename R = int32_t> R get_SearchingTime() {
		return ((R (*)(ArenaPvpConfiguration*))(Il2CppBase() + 0x1A68B80))(this);
	}
	template <typename R = void> R set_SearchingTime(int32_t value) {
		return ((R (*)(ArenaPvpConfiguration*, int32_t))(Il2CppBase() + 0x1A68B88))(this, value);
	}
	template <typename R = int32_t> R get_PassiveMaxCountOffline() {
		return ((R (*)(ArenaPvpConfiguration*))(Il2CppBase() + 0x1A68B90))(this);
	}
	template <typename R = void> R set_PassiveMaxCountOffline(int32_t value) {
		return ((R (*)(ArenaPvpConfiguration*, int32_t))(Il2CppBase() + 0x1A68B98))(this, value);
	}
	template <typename R = int32_t> R get_ShieldTimeSecond() {
		return ((R (*)(ArenaPvpConfiguration*))(Il2CppBase() + 0x1A68BA0))(this);
	}
	template <typename R = void> R set_ShieldTimeSecond(int32_t value) {
		return ((R (*)(ArenaPvpConfiguration*, int32_t))(Il2CppBase() + 0x1A68BA8))(this, value);
	}
	template <typename R = int32_t> R get_ShieldMaxSecond() {
		return ((R (*)(ArenaPvpConfiguration*))(Il2CppBase() + 0x1A68BB0))(this);
	}
	template <typename R = void> R set_ShieldMaxSecond(int32_t value) {
		return ((R (*)(ArenaPvpConfiguration*, int32_t))(Il2CppBase() + 0x1A68BB8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaPvpConfiguration*, Il2CppObject*))(Il2CppBase() + 0x1A68BC0))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaPvpConfiguration* other) {
		return ((R (*)(ArenaPvpConfiguration*, ProtoModels::ArenaPvpConfiguration*))(Il2CppBase() + 0x1A68C30))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaPvpConfiguration*))(Il2CppBase() + 0x1A68CC0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaPvpConfiguration*))(Il2CppBase() + 0x1A68DB8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaPvpConfiguration*, uintptr_t))(Il2CppBase() + 0x1A68E1C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaPvpConfiguration*))(Il2CppBase() + 0x1A68F7C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaPvpConfiguration* other) {
		return ((R (*)(ArenaPvpConfiguration*, ProtoModels::ArenaPvpConfiguration*))(Il2CppBase() + 0x1A69164))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaPvpConfiguration*, uintptr_t))(Il2CppBase() + 0x1A691C0))(this, input);
	}

};

}
