#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaLinkKefirRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaLinkKefirRequest"));
	}

	template <typename T = MessageParser1ArenaLinkKefirRequest*>*> static T& _parser() {
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
	template <typename T = int32_t> static T& KefirIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& kefirID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1ArenaLinkKefirRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E2C344))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E2C3A8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaLinkKefirRequest*))(Il2CppBase() + 0x1E2C4C8))(this);
	}
	template <typename T = ArenaLinkKefirRequest*> T Clone() {
		return ((T (*)(ArenaLinkKefirRequest*))(Il2CppBase() + 0x1E2C5C4))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaLinkKefirRequest*))(Il2CppBase() + 0x1E2C620))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaLinkKefirRequest*, int64_t))(Il2CppBase() + 0x1E2C628))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaLinkKefirRequest*))(Il2CppBase() + 0x1E2C630))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaLinkKefirRequest*, int64_t))(Il2CppBase() + 0x1E2C638))(this, value);
	}
	template <typename T = Il2CppString*> T get_KefirID() {
		return ((T (*)(ArenaLinkKefirRequest*))(Il2CppBase() + 0x1E2C640))(this);
	}
	template <typename T = void> T set_KefirID(Il2CppString* value) {
		return ((T (*)(ArenaLinkKefirRequest*, Il2CppString*))(Il2CppBase() + 0x1E2C648))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaLinkKefirRequest*, Il2CppObject*))(Il2CppBase() + 0x1E2C6C8))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaLinkKefirRequest* other) {
		return ((T (*)(ArenaLinkKefirRequest*, ArenaLinkKefirRequest*))(Il2CppBase() + 0x1E2C738))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaLinkKefirRequest*))(Il2CppBase() + 0x1E2C79C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaLinkKefirRequest*))(Il2CppBase() + 0x1E2C82C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaLinkKefirRequest*, uintptr_t))(Il2CppBase() + 0x1E2C890))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaLinkKefirRequest*))(Il2CppBase() + 0x1E2C948))(this);
	}
	template <typename T = void> T MergeFrom(ArenaLinkKefirRequest* other) {
		return ((T (*)(ArenaLinkKefirRequest*, ArenaLinkKefirRequest*))(Il2CppBase() + 0x1E2CA4C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaLinkKefirRequest*, uintptr_t))(Il2CppBase() + 0x1E2CA8C))(this, input);
	}

};

}
