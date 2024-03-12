#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PackRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PackRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& IncomeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_income_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& income_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x11E7D5C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x11E7DC0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(PackRequest*))(Il2CppBase() + 0x11E7EE0))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(PackRequest*))(Il2CppBase() + 0x11E8040))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(PackRequest*))(Il2CppBase() + 0x11E809C))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(PackRequest*, int64_t))(Il2CppBase() + 0x11E80A4))(this, value);
	}
	template <typename T = void*> T get_Income() {
		return ((T (*)(PackRequest*))(Il2CppBase() + 0x11E80AC))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(PackRequest*, uintptr_t))(Il2CppBase() + 0x11E80B4))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(PackRequest*, uintptr_t))(Il2CppBase() + 0x11E8124))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PackRequest*))(Il2CppBase() + 0x11E81C0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PackRequest*))(Il2CppBase() + 0x11E8228))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(PackRequest*, uintptr_t))(Il2CppBase() + 0x11E828C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(PackRequest*))(Il2CppBase() + 0x11E8368))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(PackRequest*, uintptr_t))(Il2CppBase() + 0x11E844C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(PackRequest*, uintptr_t))(Il2CppBase() + 0x11E84D0))(this, input);
	}

};

}
