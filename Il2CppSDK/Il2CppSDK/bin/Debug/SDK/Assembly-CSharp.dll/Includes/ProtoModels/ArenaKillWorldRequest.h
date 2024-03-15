#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaKillWorldRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaKillWorldRequest"));
	}

	 static MessageParser1<ProtoModels::ArenaKillWorldRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaKillWorldRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& IsWorldFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& isWorld_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::ArenaKillWorldRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaKillWorldRequest*>* (*)(void *))(Il2CppBase() + 0x1E2B3D0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E2B434))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaKillWorldRequest*))(Il2CppBase() + 0x1E2B554))(this);
	}
	template <typename R = ProtoModels::ArenaKillWorldRequest*> R Clone() {
		return ((R (*)(ArenaKillWorldRequest*))(Il2CppBase() + 0x1E2B5F4))(this);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(ArenaKillWorldRequest*))(Il2CppBase() + 0x1E2B650))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(ArenaKillWorldRequest*, int64_t))(Il2CppBase() + 0x1E2B658))(this, value);
	}
	template <typename R = bool> R get_IsWorld() {
		return ((R (*)(ArenaKillWorldRequest*))(Il2CppBase() + 0x1E2B660))(this);
	}
	template <typename R = void> R set_IsWorld(bool value) {
		return ((R (*)(ArenaKillWorldRequest*, bool))(Il2CppBase() + 0x1E2B668))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaKillWorldRequest*, Il2CppObject*))(Il2CppBase() + 0x1E2B674))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaKillWorldRequest* other) {
		return ((R (*)(ArenaKillWorldRequest*, ProtoModels::ArenaKillWorldRequest*))(Il2CppBase() + 0x1E2B71C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaKillWorldRequest*))(Il2CppBase() + 0x1E2B768))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaKillWorldRequest*))(Il2CppBase() + 0x1E2B7DC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaKillWorldRequest*, uintptr_t))(Il2CppBase() + 0x1E2B840))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaKillWorldRequest*))(Il2CppBase() + 0x1E2B8C4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaKillWorldRequest* other) {
		return ((R (*)(ArenaKillWorldRequest*, ProtoModels::ArenaKillWorldRequest*))(Il2CppBase() + 0x1E2B950))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaKillWorldRequest*, uintptr_t))(Il2CppBase() + 0x1E2B970))(this, input);
	}

};

}
