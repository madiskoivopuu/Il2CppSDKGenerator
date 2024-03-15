#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUpdateConfigRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUpdateConfigRequest"));
	}

	 static MessageParser1ProtoModels::ArenaUpdateConfigRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaUpdateConfigRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ConfigurationFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ArenaConfiguration*> R& configuration_() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	 static MessageParser1ProtoModels::ArenaUpdateConfigRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaUpdateConfigRequest*>* (*)(void *))(Il2CppBase() + 0xF52C10))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0xF52C74))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaUpdateConfigRequest*))(Il2CppBase() + 0xF52D94))(this);
	}
	template <typename R = ProtoModels::ArenaUpdateConfigRequest*> R Clone() {
		return ((R (*)(ArenaUpdateConfigRequest*))(Il2CppBase() + 0xF52E4C))(this);
	}
	template <typename R = ProtoModels::ArenaConfiguration*> R get_Configuration() {
		return ((R (*)(ArenaUpdateConfigRequest*))(Il2CppBase() + 0xF52EA8))(this);
	}
	template <typename R = void> R set_Configuration(ProtoModels::ArenaConfiguration* value) {
		return ((R (*)(ArenaUpdateConfigRequest*, ProtoModels::ArenaConfiguration*))(Il2CppBase() + 0xF52EB0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaUpdateConfigRequest*, Il2CppObject*))(Il2CppBase() + 0xF52EB8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaUpdateConfigRequest* other) {
		return ((R (*)(ArenaUpdateConfigRequest*, ProtoModels::ArenaUpdateConfigRequest*))(Il2CppBase() + 0xF52F4C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaUpdateConfigRequest*))(Il2CppBase() + 0xF52F78))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaUpdateConfigRequest*))(Il2CppBase() + 0xF52FA8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaUpdateConfigRequest*, uintptr_t))(Il2CppBase() + 0xF5300C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaUpdateConfigRequest*))(Il2CppBase() + 0xF53064))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaUpdateConfigRequest* other) {
		return ((R (*)(ArenaUpdateConfigRequest*, ProtoModels::ArenaUpdateConfigRequest*))(Il2CppBase() + 0xF530E0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaUpdateConfigRequest*, uintptr_t))(Il2CppBase() + 0xF5318C))(this, input);
	}

};

}
