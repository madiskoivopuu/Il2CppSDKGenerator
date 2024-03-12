#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUnLinkKefirRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUnLinkKefirRequest"));
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
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0xF4681C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0xF46880))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaUnLinkKefirRequest*))(Il2CppBase() + 0xF469A0))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaUnLinkKefirRequest*))(Il2CppBase() + 0xF46A40))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaUnLinkKefirRequest*))(Il2CppBase() + 0xF46A9C))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaUnLinkKefirRequest*, int64_t))(Il2CppBase() + 0xF46AA4))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaUnLinkKefirRequest*))(Il2CppBase() + 0xF46AAC))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaUnLinkKefirRequest*, int64_t))(Il2CppBase() + 0xF46AB4))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaUnLinkKefirRequest*, uintptr_t))(Il2CppBase() + 0xF46ABC))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaUnLinkKefirRequest*, uintptr_t))(Il2CppBase() + 0xF46B58))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaUnLinkKefirRequest*))(Il2CppBase() + 0xF46B98))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaUnLinkKefirRequest*))(Il2CppBase() + 0xF46C04))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaUnLinkKefirRequest*, uintptr_t))(Il2CppBase() + 0xF46C68))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaUnLinkKefirRequest*))(Il2CppBase() + 0xF46CEC))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaUnLinkKefirRequest*, uintptr_t))(Il2CppBase() + 0xF46DA0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaUnLinkKefirRequest*, uintptr_t))(Il2CppBase() + 0xF46DC0))(this, input);
	}

};

}
