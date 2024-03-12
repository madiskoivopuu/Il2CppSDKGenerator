#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UpdatePlayersRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UpdatePlayersRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PlayersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_players_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& players_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x153F820))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x153F884))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UpdatePlayersRequest*))(Il2CppBase() + 0x153F9A4))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(UpdatePlayersRequest*))(Il2CppBase() + 0x153FAFC))(this);
	}
	template <typename T = void*> T get_Players() {
		return ((T (*)(UpdatePlayersRequest*))(Il2CppBase() + 0x153FB58))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(UpdatePlayersRequest*, uintptr_t))(Il2CppBase() + 0x153FB60))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(UpdatePlayersRequest*, uintptr_t))(Il2CppBase() + 0x153FBD0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UpdatePlayersRequest*))(Il2CppBase() + 0x153FC5C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UpdatePlayersRequest*))(Il2CppBase() + 0x153FC88))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UpdatePlayersRequest*, uintptr_t))(Il2CppBase() + 0x153FCEC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UpdatePlayersRequest*))(Il2CppBase() + 0x153FD8C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(UpdatePlayersRequest*, uintptr_t))(Il2CppBase() + 0x153FE1C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UpdatePlayersRequest*, uintptr_t))(Il2CppBase() + 0x153FE94))(this, input);
	}

};

}
