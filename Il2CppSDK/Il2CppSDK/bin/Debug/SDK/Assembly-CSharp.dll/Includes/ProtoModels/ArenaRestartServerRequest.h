#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaRestartServerRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaRestartServerRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SaltFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& salt_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& RestartFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& restart_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x270F6E0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x270F744))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaRestartServerRequest*))(Il2CppBase() + 0x270F864))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaRestartServerRequest*))(Il2CppBase() + 0x270F9BC))(this);
	}
	template <typename T = uintptr_t> T get_Salt() {
		return ((T (*)(ArenaRestartServerRequest*))(Il2CppBase() + 0x270FA18))(this);
	}
	template <typename T = void> T set_Salt(uintptr_t value) {
		return ((T (*)(ArenaRestartServerRequest*, uintptr_t))(Il2CppBase() + 0x270FA20))(this, value);
	}
	template <typename T = bool> T get_Restart() {
		return ((T (*)(ArenaRestartServerRequest*))(Il2CppBase() + 0x270FAA0))(this);
	}
	template <typename T = void> T set_Restart(bool value) {
		return ((T (*)(ArenaRestartServerRequest*, bool))(Il2CppBase() + 0x270FAA8))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaRestartServerRequest*, uintptr_t))(Il2CppBase() + 0x270FAB4))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaRestartServerRequest*, uintptr_t))(Il2CppBase() + 0x270FB24))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaRestartServerRequest*))(Il2CppBase() + 0x270FBE0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaRestartServerRequest*))(Il2CppBase() + 0x270FC64))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaRestartServerRequest*, uintptr_t))(Il2CppBase() + 0x270FCC8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaRestartServerRequest*))(Il2CppBase() + 0x270FD58))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaRestartServerRequest*, uintptr_t))(Il2CppBase() + 0x270FDF8))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaRestartServerRequest*, uintptr_t))(Il2CppBase() + 0x270FE4C))(this, input);
	}

};

}
