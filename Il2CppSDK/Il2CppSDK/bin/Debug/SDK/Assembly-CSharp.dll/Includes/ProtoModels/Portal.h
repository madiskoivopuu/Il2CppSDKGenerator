#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class Portal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "Portal"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TagFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& tag_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& OwnerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& ownerID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1576520))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1576584))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(Portal*))(Il2CppBase() + 0x15766A4))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(Portal*))(Il2CppBase() + 0x157679C))(this);
	}
	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(Portal*))(Il2CppBase() + 0x15767F8))(this);
	}
	template <typename T = void> T set_Tag(Il2CppString* value) {
		return ((T (*)(Portal*, Il2CppString*))(Il2CppBase() + 0x1576800))(this, value);
	}
	template <typename T = int64_t> T get_OwnerID() {
		return ((T (*)(Portal*))(Il2CppBase() + 0x1576880))(this);
	}
	template <typename T = void> T set_OwnerID(int64_t value) {
		return ((T (*)(Portal*, int64_t))(Il2CppBase() + 0x1576888))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(Portal*, uintptr_t))(Il2CppBase() + 0x1576890))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(Portal*, uintptr_t))(Il2CppBase() + 0x1576900))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Portal*))(Il2CppBase() + 0x1576960))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Portal*))(Il2CppBase() + 0x15769D4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(Portal*, uintptr_t))(Il2CppBase() + 0x1576A38))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(Portal*))(Il2CppBase() + 0x1576AC4))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(Portal*, uintptr_t))(Il2CppBase() + 0x1576B8C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(Portal*, uintptr_t))(Il2CppBase() + 0x1576BD8))(this, input);
	}

};

}
