#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GlobalGuildsCoord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GlobalGuildsCoord"));
	}

	template <typename T = MessageParser1GlobalGuildsCoord*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& GuildsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1GlobalGuild*>*> static T& _repeated_guilds_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1GlobalGuild*>*> T& guilds_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = MessageParser1GlobalGuildsCoord*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x12D5598))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x12D55FC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GlobalGuildsCoord*))(Il2CppBase() + 0x12D571C))(this);
	}
	template <typename T = GlobalGuildsCoord*> T Clone() {
		return ((T (*)(GlobalGuildsCoord*))(Il2CppBase() + 0x12D5874))(this);
	}
	template <typename T = RepeatedField1GlobalGuild*>*> T get_Guilds() {
		return ((T (*)(GlobalGuildsCoord*))(Il2CppBase() + 0x12D58D0))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(GlobalGuildsCoord*, Il2CppObject*))(Il2CppBase() + 0x12D58D8))(this, other);
	}
	template <typename T = bool> T Equals_1(GlobalGuildsCoord* other) {
		return ((T (*)(GlobalGuildsCoord*, GlobalGuildsCoord*))(Il2CppBase() + 0x12D5948))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GlobalGuildsCoord*))(Il2CppBase() + 0x12D59D4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GlobalGuildsCoord*))(Il2CppBase() + 0x12D5A00))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GlobalGuildsCoord*, uintptr_t))(Il2CppBase() + 0x12D5A64))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GlobalGuildsCoord*))(Il2CppBase() + 0x12D5B04))(this);
	}
	template <typename T = void> T MergeFrom(GlobalGuildsCoord* other) {
		return ((T (*)(GlobalGuildsCoord*, GlobalGuildsCoord*))(Il2CppBase() + 0x12D5B94))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GlobalGuildsCoord*, uintptr_t))(Il2CppBase() + 0x12D5C0C))(this, input);
	}

};

}
