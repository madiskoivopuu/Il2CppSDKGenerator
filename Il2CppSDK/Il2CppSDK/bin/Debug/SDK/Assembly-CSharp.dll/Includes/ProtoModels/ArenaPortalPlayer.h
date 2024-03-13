#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaPortalPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaPortalPlayer"));
	}

	template <typename T = MessageParser1ArenaPortalPlayer*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = MessageParser1ArenaPortalPlayer*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E2FB50))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E2FBB4))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaPortalPlayer*))(Il2CppBase() + 0x1E2FCD4))(this);
	}
	template <typename T = ArenaPortalPlayer*> T Clone() {
		return ((T (*)(ArenaPortalPlayer*))(Il2CppBase() + 0x1E2FD6C))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaPortalPlayer*))(Il2CppBase() + 0x1E2FDD8))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaPortalPlayer*, int64_t))(Il2CppBase() + 0x1E2FDE0))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaPortalPlayer*, Il2CppObject*))(Il2CppBase() + 0x1E2FDE8))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaPortalPlayer* other) {
		return ((T (*)(ArenaPortalPlayer*, ArenaPortalPlayer*))(Il2CppBase() + 0x1E2FE74))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaPortalPlayer*))(Il2CppBase() + 0x1E2FEA4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaPortalPlayer*))(Il2CppBase() + 0x1E2FEE4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaPortalPlayer*, uintptr_t))(Il2CppBase() + 0x1E2FF48))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaPortalPlayer*))(Il2CppBase() + 0x1E2FFA0))(this);
	}
	template <typename T = void> T MergeFrom(ArenaPortalPlayer* other) {
		return ((T (*)(ArenaPortalPlayer*, ArenaPortalPlayer*))(Il2CppBase() + 0x1E3001C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaPortalPlayer*, uintptr_t))(Il2CppBase() + 0x1E30030))(this, input);
	}

};

}
