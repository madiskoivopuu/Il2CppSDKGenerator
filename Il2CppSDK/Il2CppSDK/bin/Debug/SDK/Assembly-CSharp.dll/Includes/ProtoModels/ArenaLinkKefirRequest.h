#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaLinkKefirRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaLinkKefirRequest"));
	}

	 static MessageParser1ProtoModels::ArenaLinkKefirRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaLinkKefirRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& KefirIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& kefirID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::ArenaLinkKefirRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaLinkKefirRequest*>* (*)(void *))(Il2CppBase() + 0x1E2C344))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E2C3A8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaLinkKefirRequest*))(Il2CppBase() + 0x1E2C4C8))(this);
	}
	template <typename R = ProtoModels::ArenaLinkKefirRequest*> R Clone() {
		return ((R (*)(ArenaLinkKefirRequest*))(Il2CppBase() + 0x1E2C5C4))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaLinkKefirRequest*))(Il2CppBase() + 0x1E2C620))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaLinkKefirRequest*, int64_t))(Il2CppBase() + 0x1E2C628))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaLinkKefirRequest*))(Il2CppBase() + 0x1E2C630))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaLinkKefirRequest*, int64_t))(Il2CppBase() + 0x1E2C638))(this, value);
	}
	template <typename R = Il2CppString*> R get_KefirID() {
		return ((R (*)(ArenaLinkKefirRequest*))(Il2CppBase() + 0x1E2C640))(this);
	}
	template <typename R = void> R set_KefirID(Il2CppString* value) {
		return ((R (*)(ArenaLinkKefirRequest*, Il2CppString*))(Il2CppBase() + 0x1E2C648))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaLinkKefirRequest*, Il2CppObject*))(Il2CppBase() + 0x1E2C6C8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaLinkKefirRequest* other) {
		return ((R (*)(ArenaLinkKefirRequest*, ProtoModels::ArenaLinkKefirRequest*))(Il2CppBase() + 0x1E2C738))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaLinkKefirRequest*))(Il2CppBase() + 0x1E2C79C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaLinkKefirRequest*))(Il2CppBase() + 0x1E2C82C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaLinkKefirRequest*, uintptr_t))(Il2CppBase() + 0x1E2C890))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaLinkKefirRequest*))(Il2CppBase() + 0x1E2C948))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaLinkKefirRequest* other) {
		return ((R (*)(ArenaLinkKefirRequest*, ProtoModels::ArenaLinkKefirRequest*))(Il2CppBase() + 0x1E2CA4C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaLinkKefirRequest*, uintptr_t))(Il2CppBase() + 0x1E2CA8C))(this, input);
	}

};

}
