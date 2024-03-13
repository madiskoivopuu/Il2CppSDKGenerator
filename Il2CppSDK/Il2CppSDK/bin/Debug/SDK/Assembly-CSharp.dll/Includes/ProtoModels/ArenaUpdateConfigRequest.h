#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUpdateConfigRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUpdateConfigRequest"));
	}

	template <typename T = MessageParser1ArenaUpdateConfigRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ConfigurationFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ArenaConfiguration*> T& configuration_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = MessageParser1ArenaUpdateConfigRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0xF52C10))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0xF52C74))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaUpdateConfigRequest*))(Il2CppBase() + 0xF52D94))(this);
	}
	template <typename T = ArenaUpdateConfigRequest*> T Clone() {
		return ((T (*)(ArenaUpdateConfigRequest*))(Il2CppBase() + 0xF52E4C))(this);
	}
	template <typename T = ArenaConfiguration*> T get_Configuration() {
		return ((T (*)(ArenaUpdateConfigRequest*))(Il2CppBase() + 0xF52EA8))(this);
	}
	template <typename T = void> T set_Configuration(ArenaConfiguration* value) {
		return ((T (*)(ArenaUpdateConfigRequest*, ArenaConfiguration*))(Il2CppBase() + 0xF52EB0))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaUpdateConfigRequest*, Il2CppObject*))(Il2CppBase() + 0xF52EB8))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaUpdateConfigRequest* other) {
		return ((T (*)(ArenaUpdateConfigRequest*, ArenaUpdateConfigRequest*))(Il2CppBase() + 0xF52F4C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaUpdateConfigRequest*))(Il2CppBase() + 0xF52F78))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaUpdateConfigRequest*))(Il2CppBase() + 0xF52FA8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaUpdateConfigRequest*, uintptr_t))(Il2CppBase() + 0xF5300C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaUpdateConfigRequest*))(Il2CppBase() + 0xF53064))(this);
	}
	template <typename T = void> T MergeFrom(ArenaUpdateConfigRequest* other) {
		return ((T (*)(ArenaUpdateConfigRequest*, ArenaUpdateConfigRequest*))(Il2CppBase() + 0xF530E0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaUpdateConfigRequest*, uintptr_t))(Il2CppBase() + 0xF5318C))(this, input);
	}

};

}
