#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaVipLevels
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaVipLevels"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& VipLevelsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_vipLevels_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& vipLevels_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& VipDefaultsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& vipDefaults_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x28682A8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x286830C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaVipLevels*))(Il2CppBase() + 0x286842C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaVipLevels*))(Il2CppBase() + 0x28685A8))(this);
	}
	template <typename T = void*> T get_VipLevels() {
		return ((T (*)(ArenaVipLevels*))(Il2CppBase() + 0x2868604))(this);
	}
	template <typename T = uintptr_t> T get_VipDefaults() {
		return ((T (*)(ArenaVipLevels*))(Il2CppBase() + 0x286860C))(this);
	}
	template <typename T = void> T set_VipDefaults(uintptr_t value) {
		return ((T (*)(ArenaVipLevels*, uintptr_t))(Il2CppBase() + 0x2868614))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaVipLevels*, uintptr_t))(Il2CppBase() + 0x286861C))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaVipLevels*, uintptr_t))(Il2CppBase() + 0x286868C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaVipLevels*))(Il2CppBase() + 0x286872C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaVipLevels*))(Il2CppBase() + 0x2868784))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaVipLevels*, uintptr_t))(Il2CppBase() + 0x28687E8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaVipLevels*))(Il2CppBase() + 0x28688C4))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaVipLevels*, uintptr_t))(Il2CppBase() + 0x28689B0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaVipLevels*, uintptr_t))(Il2CppBase() + 0x2868A98))(this, input);
	}

};

}
