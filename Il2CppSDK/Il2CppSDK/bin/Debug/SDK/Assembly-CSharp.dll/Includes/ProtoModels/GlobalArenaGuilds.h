#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GlobalArenaGuilds
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GlobalArenaGuilds"));
	}

	template <typename T = MessageParser1GlobalArenaGuilds*>*> static T& _parser() {
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
	template <typename T = int32_t> static T& UpdateFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& update_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& GlobalPrevGuildsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1GlobalGuild*>*> static T& _repeated_globalPrevGuilds_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = RepeatedField1GlobalGuild*>*> T& globalPrevGuilds_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& LocalPrevGuildsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1GlobalGuild*>*> static T& _repeated_localPrevGuilds_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = RepeatedField1GlobalGuild*>*> T& localPrevGuilds_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = MessageParser1GlobalArenaGuilds*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x17726F8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x177275C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GlobalArenaGuilds*))(Il2CppBase() + 0x177287C))(this);
	}
	template <typename T = GlobalArenaGuilds*> T Clone() {
		return ((T (*)(GlobalArenaGuilds*))(Il2CppBase() + 0x1772A70))(this);
	}
	template <typename T = RepeatedField1GlobalGuild*>*> T get_Guilds() {
		return ((T (*)(GlobalArenaGuilds*))(Il2CppBase() + 0x1772ACC))(this);
	}
	template <typename T = bool> T get_Update() {
		return ((T (*)(GlobalArenaGuilds*))(Il2CppBase() + 0x1772AD4))(this);
	}
	template <typename T = void> T set_Update(bool value) {
		return ((T (*)(GlobalArenaGuilds*, bool))(Il2CppBase() + 0x1772ADC))(this, value);
	}
	template <typename T = RepeatedField1GlobalGuild*>*> T get_GlobalPrevGuilds() {
		return ((T (*)(GlobalArenaGuilds*))(Il2CppBase() + 0x1772AE8))(this);
	}
	template <typename T = RepeatedField1GlobalGuild*>*> T get_LocalPrevGuilds() {
		return ((T (*)(GlobalArenaGuilds*))(Il2CppBase() + 0x1772AF0))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(GlobalArenaGuilds*, Il2CppObject*))(Il2CppBase() + 0x1772AF8))(this, other);
	}
	template <typename T = bool> T Equals_1(GlobalArenaGuilds* other) {
		return ((T (*)(GlobalArenaGuilds*, GlobalArenaGuilds*))(Il2CppBase() + 0x1772B68))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GlobalArenaGuilds*))(Il2CppBase() + 0x1772C44))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GlobalArenaGuilds*))(Il2CppBase() + 0x1772CDC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GlobalArenaGuilds*, uintptr_t))(Il2CppBase() + 0x1772D40))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GlobalArenaGuilds*))(Il2CppBase() + 0x1772E70))(this);
	}
	template <typename T = void> T MergeFrom(GlobalArenaGuilds* other) {
		return ((T (*)(GlobalArenaGuilds*, GlobalArenaGuilds*))(Il2CppBase() + 0x1772F88))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GlobalArenaGuilds*, uintptr_t))(Il2CppBase() + 0x1773034))(this, input);
	}

};

}
