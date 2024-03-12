#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaPvpConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaPvpConfiguration"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MinRaidPlayerLevelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& minRaidPlayerLevel_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& PeaceShieldTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& peaceShieldTime_() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> static T& CombatTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& combatTime_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& SearchingTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& searchingTime_() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> static T& PassiveMaxCountOfflineFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& passiveMaxCountOffline_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ShieldTimeSecondFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& shieldTimeSecond_() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& ShieldMaxSecondFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& shieldMaxSecond_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A688A8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A6890C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaPvpConfiguration*))(Il2CppBase() + 0x1A68A2C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaPvpConfiguration*))(Il2CppBase() + 0x1A68AF4))(this);
	}
	template <typename T = int32_t> T get_MinRaidPlayerLevel() {
		return ((T (*)(ArenaPvpConfiguration*))(Il2CppBase() + 0x1A68B50))(this);
	}
	template <typename T = void> T set_MinRaidPlayerLevel(int32_t value) {
		return ((T (*)(ArenaPvpConfiguration*, int32_t))(Il2CppBase() + 0x1A68B58))(this, value);
	}
	template <typename T = int32_t> T get_PeaceShieldTime() {
		return ((T (*)(ArenaPvpConfiguration*))(Il2CppBase() + 0x1A68B60))(this);
	}
	template <typename T = void> T set_PeaceShieldTime(int32_t value) {
		return ((T (*)(ArenaPvpConfiguration*, int32_t))(Il2CppBase() + 0x1A68B68))(this, value);
	}
	template <typename T = int32_t> T get_CombatTime() {
		return ((T (*)(ArenaPvpConfiguration*))(Il2CppBase() + 0x1A68B70))(this);
	}
	template <typename T = void> T set_CombatTime(int32_t value) {
		return ((T (*)(ArenaPvpConfiguration*, int32_t))(Il2CppBase() + 0x1A68B78))(this, value);
	}
	template <typename T = int32_t> T get_SearchingTime() {
		return ((T (*)(ArenaPvpConfiguration*))(Il2CppBase() + 0x1A68B80))(this);
	}
	template <typename T = void> T set_SearchingTime(int32_t value) {
		return ((T (*)(ArenaPvpConfiguration*, int32_t))(Il2CppBase() + 0x1A68B88))(this, value);
	}
	template <typename T = int32_t> T get_PassiveMaxCountOffline() {
		return ((T (*)(ArenaPvpConfiguration*))(Il2CppBase() + 0x1A68B90))(this);
	}
	template <typename T = void> T set_PassiveMaxCountOffline(int32_t value) {
		return ((T (*)(ArenaPvpConfiguration*, int32_t))(Il2CppBase() + 0x1A68B98))(this, value);
	}
	template <typename T = int32_t> T get_ShieldTimeSecond() {
		return ((T (*)(ArenaPvpConfiguration*))(Il2CppBase() + 0x1A68BA0))(this);
	}
	template <typename T = void> T set_ShieldTimeSecond(int32_t value) {
		return ((T (*)(ArenaPvpConfiguration*, int32_t))(Il2CppBase() + 0x1A68BA8))(this, value);
	}
	template <typename T = int32_t> T get_ShieldMaxSecond() {
		return ((T (*)(ArenaPvpConfiguration*))(Il2CppBase() + 0x1A68BB0))(this);
	}
	template <typename T = void> T set_ShieldMaxSecond(int32_t value) {
		return ((T (*)(ArenaPvpConfiguration*, int32_t))(Il2CppBase() + 0x1A68BB8))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaPvpConfiguration*, uintptr_t))(Il2CppBase() + 0x1A68BC0))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaPvpConfiguration*, uintptr_t))(Il2CppBase() + 0x1A68C30))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaPvpConfiguration*))(Il2CppBase() + 0x1A68CC0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaPvpConfiguration*))(Il2CppBase() + 0x1A68DB8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaPvpConfiguration*, uintptr_t))(Il2CppBase() + 0x1A68E1C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaPvpConfiguration*))(Il2CppBase() + 0x1A68F7C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaPvpConfiguration*, uintptr_t))(Il2CppBase() + 0x1A69164))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaPvpConfiguration*, uintptr_t))(Il2CppBase() + 0x1A691C0))(this, input);
	}

};

}
