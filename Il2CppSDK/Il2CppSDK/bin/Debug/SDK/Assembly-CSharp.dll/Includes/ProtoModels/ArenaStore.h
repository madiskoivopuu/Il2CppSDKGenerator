#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStore"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ProductsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_products_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& products_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& VipEnabledFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& vipEnabled_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x27170FC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2717160))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaStore*))(Il2CppBase() + 0x2717280))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaStore*))(Il2CppBase() + 0x27173E4))(this);
	}
	template <typename T = void*> T get_Products() {
		return ((T (*)(ArenaStore*))(Il2CppBase() + 0x2717440))(this);
	}
	template <typename T = bool> T get_VipEnabled() {
		return ((T (*)(ArenaStore*))(Il2CppBase() + 0x2717448))(this);
	}
	template <typename T = void> T set_VipEnabled(bool value) {
		return ((T (*)(ArenaStore*, bool))(Il2CppBase() + 0x2717450))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaStore*, uintptr_t))(Il2CppBase() + 0x271745C))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaStore*, uintptr_t))(Il2CppBase() + 0x27174CC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaStore*))(Il2CppBase() + 0x2717570))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaStore*))(Il2CppBase() + 0x27175D0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaStore*, uintptr_t))(Il2CppBase() + 0x2717634))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaStore*))(Il2CppBase() + 0x2717710))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaStore*, uintptr_t))(Il2CppBase() + 0x27177BC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaStore*, uintptr_t))(Il2CppBase() + 0x2717834))(this, input);
	}

};

}
