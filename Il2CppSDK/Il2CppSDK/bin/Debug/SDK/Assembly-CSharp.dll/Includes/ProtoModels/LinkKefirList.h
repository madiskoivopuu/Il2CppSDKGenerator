#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class LinkKefirList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "LinkKefirList"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UsersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_users_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& users_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x142D790))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x142D7F4))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(LinkKefirList*))(Il2CppBase() + 0x142D914))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(LinkKefirList*))(Il2CppBase() + 0x142DA6C))(this);
	}
	template <typename T = void*> T get_Users() {
		return ((T (*)(LinkKefirList*))(Il2CppBase() + 0x142DAC8))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(LinkKefirList*, uintptr_t))(Il2CppBase() + 0x142DAD0))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(LinkKefirList*, uintptr_t))(Il2CppBase() + 0x142DB40))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(LinkKefirList*))(Il2CppBase() + 0x142DBCC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(LinkKefirList*))(Il2CppBase() + 0x142DBF8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(LinkKefirList*, uintptr_t))(Il2CppBase() + 0x142DC5C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(LinkKefirList*))(Il2CppBase() + 0x142DCFC))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(LinkKefirList*, uintptr_t))(Il2CppBase() + 0x142DD8C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(LinkKefirList*, uintptr_t))(Il2CppBase() + 0x142DE04))(this, input);
	}

};

}
