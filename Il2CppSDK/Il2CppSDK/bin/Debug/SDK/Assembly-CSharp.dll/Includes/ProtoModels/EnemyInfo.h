#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class EnemyInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "EnemyInfo"));
	}

	 static MessageParser1<ProtoModels::EnemyInfo*>*& _parser() {
		return *(MessageParser1<ProtoModels::EnemyInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ClanIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& clanID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ClanNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& clanName_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::EnemyInfo*>* get_Parser() {
		return ((MessageParser1<ProtoModels::EnemyInfo*>* (*)(void *))(Il2CppBase() + 0x1370ADC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1370B40))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(EnemyInfo*))(Il2CppBase() + 0x1370C60))(this);
	}
	template <typename R = ProtoModels::EnemyInfo*> R Clone() {
		return ((R (*)(EnemyInfo*))(Il2CppBase() + 0x1370D54))(this);
	}
	template <typename R = int64_t> R get_ClanID() {
		return ((R (*)(EnemyInfo*))(Il2CppBase() + 0x1370DB0))(this);
	}
	template <typename R = void> R set_ClanID(int64_t value) {
		return ((R (*)(EnemyInfo*, int64_t))(Il2CppBase() + 0x1370DB8))(this, value);
	}
	template <typename R = Il2CppString*> R get_ClanName() {
		return ((R (*)(EnemyInfo*))(Il2CppBase() + 0x1370DC0))(this);
	}
	template <typename R = void> R set_ClanName(Il2CppString* value) {
		return ((R (*)(EnemyInfo*, Il2CppString*))(Il2CppBase() + 0x1370DC8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(EnemyInfo*, Il2CppObject*))(Il2CppBase() + 0x1370E48))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::EnemyInfo* other) {
		return ((R (*)(EnemyInfo*, ProtoModels::EnemyInfo*))(Il2CppBase() + 0x1370EB8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(EnemyInfo*))(Il2CppBase() + 0x1370F0C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(EnemyInfo*))(Il2CppBase() + 0x1370F80))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(EnemyInfo*, uintptr_t))(Il2CppBase() + 0x1370FE4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(EnemyInfo*))(Il2CppBase() + 0x1371070))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::EnemyInfo* other) {
		return ((R (*)(EnemyInfo*, ProtoModels::EnemyInfo*))(Il2CppBase() + 0x1371130))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(EnemyInfo*, uintptr_t))(Il2CppBase() + 0x1371164))(this, input);
	}

};

}
