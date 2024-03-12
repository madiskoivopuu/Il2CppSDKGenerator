#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaGameConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaGameConfiguration"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& OdinCupProcNormalFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& odinCupProcNormal_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& OdinCupProcSuperFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& odinCupProcSuper_() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> static T& FreyrCupProcNormalFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& freyrCupProcNormal_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& FreyrCupProcSuperFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& freyrCupProcSuper_() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E20948))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E209AC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaGameConfiguration*))(Il2CppBase() + 0x1E20ACC))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaGameConfiguration*))(Il2CppBase() + 0x1E1BB10))(this);
	}
	template <typename T = float> T get_OdinCupProcNormal() {
		return ((T (*)(ArenaGameConfiguration*))(Il2CppBase() + 0x1E20B74))(this);
	}
	template <typename T = void> T set_OdinCupProcNormal(float value) {
		return ((T (*)(ArenaGameConfiguration*, float))(Il2CppBase() + 0x1E20B7C))(this, value);
	}
	template <typename T = float> T get_OdinCupProcSuper() {
		return ((T (*)(ArenaGameConfiguration*))(Il2CppBase() + 0x1E20B84))(this);
	}
	template <typename T = void> T set_OdinCupProcSuper(float value) {
		return ((T (*)(ArenaGameConfiguration*, float))(Il2CppBase() + 0x1E20B8C))(this, value);
	}
	template <typename T = float> T get_FreyrCupProcNormal() {
		return ((T (*)(ArenaGameConfiguration*))(Il2CppBase() + 0x1E20B94))(this);
	}
	template <typename T = void> T set_FreyrCupProcNormal(float value) {
		return ((T (*)(ArenaGameConfiguration*, float))(Il2CppBase() + 0x1E20B9C))(this, value);
	}
	template <typename T = float> T get_FreyrCupProcSuper() {
		return ((T (*)(ArenaGameConfiguration*))(Il2CppBase() + 0x1E20BA4))(this);
	}
	template <typename T = void> T set_FreyrCupProcSuper(float value) {
		return ((T (*)(ArenaGameConfiguration*, float))(Il2CppBase() + 0x1E20BAC))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaGameConfiguration*, uintptr_t))(Il2CppBase() + 0x1E20BB4))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaGameConfiguration*, uintptr_t))(Il2CppBase() + 0x1E20C24))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaGameConfiguration*))(Il2CppBase() + 0x1E20C84))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaGameConfiguration*))(Il2CppBase() + 0x1E20D38))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaGameConfiguration*, uintptr_t))(Il2CppBase() + 0x1E20D9C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaGameConfiguration*))(Il2CppBase() + 0x1E20E88))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaGameConfiguration*, uintptr_t))(Il2CppBase() + 0x1E1C724))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaGameConfiguration*, uintptr_t))(Il2CppBase() + 0x1E20EC4))(this, input);
	}

};

}
