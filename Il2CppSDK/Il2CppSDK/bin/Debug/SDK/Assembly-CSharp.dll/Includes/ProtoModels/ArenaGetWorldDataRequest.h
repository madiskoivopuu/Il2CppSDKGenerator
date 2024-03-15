#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaGetWorldDataRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaGetWorldDataRequest"));
	}

	 static MessageParser1ProtoModels::ArenaGetWorldDataRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaGetWorldDataRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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

	 static MessageParser1ProtoModels::ArenaGetWorldDataRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaGetWorldDataRequest*>* (*)(void *))(Il2CppBase() + 0x1E25230))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E25294))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaGetWorldDataRequest*))(Il2CppBase() + 0x1E253B4))(this);
	}
	template <typename R = ProtoModels::ArenaGetWorldDataRequest*> R Clone() {
		return ((R (*)(ArenaGetWorldDataRequest*))(Il2CppBase() + 0x1E25454))(this);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(ArenaGetWorldDataRequest*))(Il2CppBase() + 0x1E254B0))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(ArenaGetWorldDataRequest*, int64_t))(Il2CppBase() + 0x1E254B8))(this, value);
	}
	template <typename R = bool> R get_IsWorld() {
		return ((R (*)(ArenaGetWorldDataRequest*))(Il2CppBase() + 0x1E254C0))(this);
	}
	template <typename R = void> R set_IsWorld(bool value) {
		return ((R (*)(ArenaGetWorldDataRequest*, bool))(Il2CppBase() + 0x1E254C8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaGetWorldDataRequest*, Il2CppObject*))(Il2CppBase() + 0x1E254D4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaGetWorldDataRequest* other) {
		return ((R (*)(ArenaGetWorldDataRequest*, ProtoModels::ArenaGetWorldDataRequest*))(Il2CppBase() + 0x1E2557C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaGetWorldDataRequest*))(Il2CppBase() + 0x1E255C8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaGetWorldDataRequest*))(Il2CppBase() + 0x1E2563C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaGetWorldDataRequest*, uintptr_t))(Il2CppBase() + 0x1E256A0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaGetWorldDataRequest*))(Il2CppBase() + 0x1E25724))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaGetWorldDataRequest* other) {
		return ((R (*)(ArenaGetWorldDataRequest*, ProtoModels::ArenaGetWorldDataRequest*))(Il2CppBase() + 0x1E257B0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaGetWorldDataRequest*, uintptr_t))(Il2CppBase() + 0x1E257D0))(this, input);
	}

};

}
