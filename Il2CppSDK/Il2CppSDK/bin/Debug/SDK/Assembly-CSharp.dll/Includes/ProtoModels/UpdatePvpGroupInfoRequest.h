#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UpdatePvpGroupInfoRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UpdatePvpGroupInfoRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& InfoFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& info_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1540140))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x15401A4))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UpdatePvpGroupInfoRequest*))(Il2CppBase() + 0x15402C4))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(UpdatePvpGroupInfoRequest*))(Il2CppBase() + 0x154037C))(this);
	}
	template <typename T = uintptr_t> T get_Info() {
		return ((T (*)(UpdatePvpGroupInfoRequest*))(Il2CppBase() + 0x15403D8))(this);
	}
	template <typename T = void> T set_Info(uintptr_t value) {
		return ((T (*)(UpdatePvpGroupInfoRequest*, uintptr_t))(Il2CppBase() + 0x15403E0))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(UpdatePvpGroupInfoRequest*, uintptr_t))(Il2CppBase() + 0x15403E8))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(UpdatePvpGroupInfoRequest*, uintptr_t))(Il2CppBase() + 0x154047C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UpdatePvpGroupInfoRequest*))(Il2CppBase() + 0x15404A8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UpdatePvpGroupInfoRequest*))(Il2CppBase() + 0x15404D8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UpdatePvpGroupInfoRequest*, uintptr_t))(Il2CppBase() + 0x154053C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UpdatePvpGroupInfoRequest*))(Il2CppBase() + 0x1540594))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(UpdatePvpGroupInfoRequest*, uintptr_t))(Il2CppBase() + 0x1540610))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UpdatePvpGroupInfoRequest*, uintptr_t))(Il2CppBase() + 0x15406BC))(this, input);
	}

};

}
