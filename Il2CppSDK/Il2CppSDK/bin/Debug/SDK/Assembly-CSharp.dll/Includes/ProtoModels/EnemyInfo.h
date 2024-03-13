#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class EnemyInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "EnemyInfo"));
	}

	template <typename T = MessageParser1EnemyInfo*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ClanIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& clanID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ClanNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& clanName_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1EnemyInfo*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1370ADC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1370B40))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(EnemyInfo*))(Il2CppBase() + 0x1370C60))(this);
	}
	template <typename T = EnemyInfo*> T Clone() {
		return ((T (*)(EnemyInfo*))(Il2CppBase() + 0x1370D54))(this);
	}
	template <typename T = int64_t> T get_ClanID() {
		return ((T (*)(EnemyInfo*))(Il2CppBase() + 0x1370DB0))(this);
	}
	template <typename T = void> T set_ClanID(int64_t value) {
		return ((T (*)(EnemyInfo*, int64_t))(Il2CppBase() + 0x1370DB8))(this, value);
	}
	template <typename T = Il2CppString*> T get_ClanName() {
		return ((T (*)(EnemyInfo*))(Il2CppBase() + 0x1370DC0))(this);
	}
	template <typename T = void> T set_ClanName(Il2CppString* value) {
		return ((T (*)(EnemyInfo*, Il2CppString*))(Il2CppBase() + 0x1370DC8))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(EnemyInfo*, Il2CppObject*))(Il2CppBase() + 0x1370E48))(this, other);
	}
	template <typename T = bool> T Equals_1(EnemyInfo* other) {
		return ((T (*)(EnemyInfo*, EnemyInfo*))(Il2CppBase() + 0x1370EB8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(EnemyInfo*))(Il2CppBase() + 0x1370F0C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(EnemyInfo*))(Il2CppBase() + 0x1370F80))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(EnemyInfo*, uintptr_t))(Il2CppBase() + 0x1370FE4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(EnemyInfo*))(Il2CppBase() + 0x1371070))(this);
	}
	template <typename T = void> T MergeFrom(EnemyInfo* other) {
		return ((T (*)(EnemyInfo*, EnemyInfo*))(Il2CppBase() + 0x1371130))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(EnemyInfo*, uintptr_t))(Il2CppBase() + 0x1371164))(this, input);
	}

};

}
