#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaRestartServerRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaRestartServerRequest"));
	}

	 static MessageParser1ProtoModels::ArenaRestartServerRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaRestartServerRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& SaltFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& salt_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& RestartFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& restart_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::ArenaRestartServerRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaRestartServerRequest*>* (*)(void *))(Il2CppBase() + 0x270F6E0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x270F744))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaRestartServerRequest*))(Il2CppBase() + 0x270F864))(this);
	}
	template <typename R = ProtoModels::ArenaRestartServerRequest*> R Clone() {
		return ((R (*)(ArenaRestartServerRequest*))(Il2CppBase() + 0x270F9BC))(this);
	}
	template <typename R = uintptr_t> R get_Salt() {
		return ((R (*)(ArenaRestartServerRequest*))(Il2CppBase() + 0x270FA18))(this);
	}
	template <typename R = void> R set_Salt(uintptr_t value) {
		return ((R (*)(ArenaRestartServerRequest*, uintptr_t))(Il2CppBase() + 0x270FA20))(this, value);
	}
	template <typename R = bool> R get_Restart() {
		return ((R (*)(ArenaRestartServerRequest*))(Il2CppBase() + 0x270FAA0))(this);
	}
	template <typename R = void> R set_Restart(bool value) {
		return ((R (*)(ArenaRestartServerRequest*, bool))(Il2CppBase() + 0x270FAA8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaRestartServerRequest*, Il2CppObject*))(Il2CppBase() + 0x270FAB4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaRestartServerRequest* other) {
		return ((R (*)(ArenaRestartServerRequest*, ProtoModels::ArenaRestartServerRequest*))(Il2CppBase() + 0x270FB24))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaRestartServerRequest*))(Il2CppBase() + 0x270FBE0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaRestartServerRequest*))(Il2CppBase() + 0x270FC64))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaRestartServerRequest*, uintptr_t))(Il2CppBase() + 0x270FCC8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaRestartServerRequest*))(Il2CppBase() + 0x270FD58))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaRestartServerRequest* other) {
		return ((R (*)(ArenaRestartServerRequest*, ProtoModels::ArenaRestartServerRequest*))(Il2CppBase() + 0x270FDF8))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaRestartServerRequest*, uintptr_t))(Il2CppBase() + 0x270FE4C))(this, input);
	}

};

}
