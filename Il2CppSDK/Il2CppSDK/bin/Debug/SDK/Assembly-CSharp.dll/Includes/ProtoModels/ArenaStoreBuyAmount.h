#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStoreBuyAmount
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStoreBuyAmount"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ParentFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& parent_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& count_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2717B00))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2717B64))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaStoreBuyAmount*))(Il2CppBase() + 0x2717C84))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaStoreBuyAmount*))(Il2CppBase() + 0x2717D7C))(this);
	}
	template <typename T = Il2CppString*> T get_Parent() {
		return ((T (*)(ArenaStoreBuyAmount*))(Il2CppBase() + 0x2717DD8))(this);
	}
	template <typename T = void> T set_Parent(Il2CppString* value) {
		return ((T (*)(ArenaStoreBuyAmount*, Il2CppString*))(Il2CppBase() + 0x2717DE0))(this, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(ArenaStoreBuyAmount*))(Il2CppBase() + 0x2717E60))(this);
	}
	template <typename T = void> T set_Count(int32_t value) {
		return ((T (*)(ArenaStoreBuyAmount*, int32_t))(Il2CppBase() + 0x2717E68))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaStoreBuyAmount*, uintptr_t))(Il2CppBase() + 0x2717E70))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaStoreBuyAmount*, uintptr_t))(Il2CppBase() + 0x2717EE0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaStoreBuyAmount*))(Il2CppBase() + 0x2717F40))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaStoreBuyAmount*))(Il2CppBase() + 0x2717FB4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaStoreBuyAmount*, uintptr_t))(Il2CppBase() + 0x2718018))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaStoreBuyAmount*))(Il2CppBase() + 0x27180A4))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaStoreBuyAmount*, uintptr_t))(Il2CppBase() + 0x271816C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaStoreBuyAmount*, uintptr_t))(Il2CppBase() + 0x27181B8))(this, input);
	}

};

}
