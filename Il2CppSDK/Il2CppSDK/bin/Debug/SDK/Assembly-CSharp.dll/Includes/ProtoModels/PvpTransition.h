#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PvpTransition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PvpTransition"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& FromStateFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& fromState_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CurrentstateFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& currentstate_() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x11C54BC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x11C5520))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(PvpTransition*))(Il2CppBase() + 0x11C5640))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(PvpTransition*))(Il2CppBase() + 0x11BFA1C))(this);
	}
	template <typename T = uintptr_t> T get_FromState() {
		return ((T (*)(PvpTransition*))(Il2CppBase() + 0x11C56D8))(this);
	}
	template <typename T = void> T set_FromState(uintptr_t value) {
		return ((T (*)(PvpTransition*, uintptr_t))(Il2CppBase() + 0x11C56E0))(this, value);
	}
	template <typename T = uintptr_t> T get_Currentstate() {
		return ((T (*)(PvpTransition*))(Il2CppBase() + 0x11C56E8))(this);
	}
	template <typename T = void> T set_Currentstate(uintptr_t value) {
		return ((T (*)(PvpTransition*, uintptr_t))(Il2CppBase() + 0x11C56F0))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(PvpTransition*, uintptr_t))(Il2CppBase() + 0x11C56F8))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(PvpTransition*, uintptr_t))(Il2CppBase() + 0x11C5794))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PvpTransition*))(Il2CppBase() + 0x11C57D4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PvpTransition*))(Il2CppBase() + 0x11C5840))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(PvpTransition*, uintptr_t))(Il2CppBase() + 0x11C58A4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(PvpTransition*))(Il2CppBase() + 0x11C5928))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(PvpTransition*, uintptr_t))(Il2CppBase() + 0x11C0348))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(PvpTransition*, uintptr_t))(Il2CppBase() + 0x11C59DC))(this, input);
	}

};

}
