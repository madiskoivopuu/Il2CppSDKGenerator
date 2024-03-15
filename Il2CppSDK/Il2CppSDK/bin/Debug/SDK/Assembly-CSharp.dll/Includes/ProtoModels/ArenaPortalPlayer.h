#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaPortalPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaPortalPlayer"));
	}

	 static MessageParser1<ProtoModels::ArenaPortalPlayer*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaPortalPlayer*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	 static MessageParser1<ProtoModels::ArenaPortalPlayer*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaPortalPlayer*>* (*)(void *))(Il2CppBase() + 0x1E2FB50))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E2FBB4))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaPortalPlayer*))(Il2CppBase() + 0x1E2FCD4))(this);
	}
	template <typename R = ProtoModels::ArenaPortalPlayer*> R Clone() {
		return ((R (*)(ArenaPortalPlayer*))(Il2CppBase() + 0x1E2FD6C))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaPortalPlayer*))(Il2CppBase() + 0x1E2FDD8))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaPortalPlayer*, int64_t))(Il2CppBase() + 0x1E2FDE0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaPortalPlayer*, Il2CppObject*))(Il2CppBase() + 0x1E2FDE8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaPortalPlayer* other) {
		return ((R (*)(ArenaPortalPlayer*, ProtoModels::ArenaPortalPlayer*))(Il2CppBase() + 0x1E2FE74))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaPortalPlayer*))(Il2CppBase() + 0x1E2FEA4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaPortalPlayer*))(Il2CppBase() + 0x1E2FEE4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaPortalPlayer*, uintptr_t))(Il2CppBase() + 0x1E2FF48))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaPortalPlayer*))(Il2CppBase() + 0x1E2FFA0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaPortalPlayer* other) {
		return ((R (*)(ArenaPortalPlayer*, ProtoModels::ArenaPortalPlayer*))(Il2CppBase() + 0x1E3001C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaPortalPlayer*, uintptr_t))(Il2CppBase() + 0x1E30030))(this, input);
	}

};

}
