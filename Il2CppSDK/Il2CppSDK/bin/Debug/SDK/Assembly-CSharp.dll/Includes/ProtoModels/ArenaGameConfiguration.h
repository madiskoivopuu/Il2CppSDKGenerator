#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaGameConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaGameConfiguration"));
	}

	 static MessageParser1ProtoModels::ArenaGameConfiguration*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaGameConfiguration*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& OdinCupProcNormalFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> R& odinCupProcNormal_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& OdinCupProcSuperFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> R& odinCupProcSuper_() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> static R& FreyrCupProcNormalFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> R& freyrCupProcNormal_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& FreyrCupProcSuperFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> R& freyrCupProcSuper_() {
		return *(R*)((uintptr_t)this + 0x1C);
	}

	 static MessageParser1ProtoModels::ArenaGameConfiguration*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaGameConfiguration*>* (*)(void *))(Il2CppBase() + 0x1E20948))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E209AC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaGameConfiguration*))(Il2CppBase() + 0x1E20ACC))(this);
	}
	template <typename R = ProtoModels::ArenaGameConfiguration*> R Clone() {
		return ((R (*)(ArenaGameConfiguration*))(Il2CppBase() + 0x1E1BB10))(this);
	}
	template <typename R = float> R get_OdinCupProcNormal() {
		return ((R (*)(ArenaGameConfiguration*))(Il2CppBase() + 0x1E20B74))(this);
	}
	template <typename R = void> R set_OdinCupProcNormal(float value) {
		return ((R (*)(ArenaGameConfiguration*, float))(Il2CppBase() + 0x1E20B7C))(this, value);
	}
	template <typename R = float> R get_OdinCupProcSuper() {
		return ((R (*)(ArenaGameConfiguration*))(Il2CppBase() + 0x1E20B84))(this);
	}
	template <typename R = void> R set_OdinCupProcSuper(float value) {
		return ((R (*)(ArenaGameConfiguration*, float))(Il2CppBase() + 0x1E20B8C))(this, value);
	}
	template <typename R = float> R get_FreyrCupProcNormal() {
		return ((R (*)(ArenaGameConfiguration*))(Il2CppBase() + 0x1E20B94))(this);
	}
	template <typename R = void> R set_FreyrCupProcNormal(float value) {
		return ((R (*)(ArenaGameConfiguration*, float))(Il2CppBase() + 0x1E20B9C))(this, value);
	}
	template <typename R = float> R get_FreyrCupProcSuper() {
		return ((R (*)(ArenaGameConfiguration*))(Il2CppBase() + 0x1E20BA4))(this);
	}
	template <typename R = void> R set_FreyrCupProcSuper(float value) {
		return ((R (*)(ArenaGameConfiguration*, float))(Il2CppBase() + 0x1E20BAC))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaGameConfiguration*, Il2CppObject*))(Il2CppBase() + 0x1E20BB4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaGameConfiguration* other) {
		return ((R (*)(ArenaGameConfiguration*, ProtoModels::ArenaGameConfiguration*))(Il2CppBase() + 0x1E20C24))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaGameConfiguration*))(Il2CppBase() + 0x1E20C84))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaGameConfiguration*))(Il2CppBase() + 0x1E20D38))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaGameConfiguration*, uintptr_t))(Il2CppBase() + 0x1E20D9C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaGameConfiguration*))(Il2CppBase() + 0x1E20E88))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaGameConfiguration* other) {
		return ((R (*)(ArenaGameConfiguration*, ProtoModels::ArenaGameConfiguration*))(Il2CppBase() + 0x1E1C724))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaGameConfiguration*, uintptr_t))(Il2CppBase() + 0x1E20EC4))(this, input);
	}

};

}
