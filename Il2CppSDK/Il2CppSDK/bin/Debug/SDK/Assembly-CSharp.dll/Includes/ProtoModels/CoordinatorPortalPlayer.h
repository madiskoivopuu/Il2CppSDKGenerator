#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CoordinatorPortalPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CoordinatorPortalPlayer"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x133C220))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x133C284))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(CoordinatorPortalPlayer*))(Il2CppBase() + 0x133C3A4))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(CoordinatorPortalPlayer*))(Il2CppBase() + 0x133C43C))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(CoordinatorPortalPlayer*))(Il2CppBase() + 0x133C4A8))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(CoordinatorPortalPlayer*, int64_t))(Il2CppBase() + 0x133C4B0))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(CoordinatorPortalPlayer*, uintptr_t))(Il2CppBase() + 0x133C4B8))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(CoordinatorPortalPlayer*, uintptr_t))(Il2CppBase() + 0x133C544))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(CoordinatorPortalPlayer*))(Il2CppBase() + 0x133C574))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CoordinatorPortalPlayer*))(Il2CppBase() + 0x133C5B4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(CoordinatorPortalPlayer*, uintptr_t))(Il2CppBase() + 0x133C618))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(CoordinatorPortalPlayer*))(Il2CppBase() + 0x133C670))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(CoordinatorPortalPlayer*, uintptr_t))(Il2CppBase() + 0x133C6EC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(CoordinatorPortalPlayer*, uintptr_t))(Il2CppBase() + 0x133C700))(this, input);
	}

};

}
