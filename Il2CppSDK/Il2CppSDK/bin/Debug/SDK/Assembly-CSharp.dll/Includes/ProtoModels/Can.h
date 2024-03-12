#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class Can
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "Can"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MembersStartRaidFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& membersStartRaid_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x15B5694))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x15B56F8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(Can*))(Il2CppBase() + 0x15B5818))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(Can*))(Il2CppBase() + 0x15B58B0))(this);
	}
	template <typename T = bool> T get_MembersStartRaid() {
		return ((T (*)(Can*))(Il2CppBase() + 0x15B591C))(this);
	}
	template <typename T = void> T set_MembersStartRaid(bool value) {
		return ((T (*)(Can*, bool))(Il2CppBase() + 0x15B5924))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(Can*, uintptr_t))(Il2CppBase() + 0x15B5930))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(Can*, uintptr_t))(Il2CppBase() + 0x15B59C8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Can*))(Il2CppBase() + 0x15B5A04))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Can*))(Il2CppBase() + 0x15B5A40))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(Can*, uintptr_t))(Il2CppBase() + 0x15B5AA4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(Can*))(Il2CppBase() + 0x15B5AFC))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(Can*, uintptr_t))(Il2CppBase() + 0x15B5B10))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(Can*, uintptr_t))(Il2CppBase() + 0x15B5B24))(this, input);
	}

};

}
