#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaPreAddAccountRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaPreAddAccountRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& IsGlobalMapFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isGlobalMap_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& PvpFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& pvp_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& TourneyFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& tourney_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& GuildFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_guild_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& guild_() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E301B4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E30218))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaPreAddAccountRequest*))(Il2CppBase() + 0x1E30338))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaPreAddAccountRequest*))(Il2CppBase() + 0x1E304F8))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaPreAddAccountRequest*))(Il2CppBase() + 0x1E30554))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaPreAddAccountRequest*, int64_t))(Il2CppBase() + 0x1E3055C))(this, value);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(ArenaPreAddAccountRequest*))(Il2CppBase() + 0x1E30564))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(ArenaPreAddAccountRequest*, int64_t))(Il2CppBase() + 0x1E3056C))(this, value);
	}
	template <typename T = bool> T get_IsGlobalMap() {
		return ((T (*)(ArenaPreAddAccountRequest*))(Il2CppBase() + 0x1E30574))(this);
	}
	template <typename T = void> T set_IsGlobalMap(bool value) {
		return ((T (*)(ArenaPreAddAccountRequest*, bool))(Il2CppBase() + 0x1E3057C))(this, value);
	}
	template <typename T = uintptr_t> T get_Pvp() {
		return ((T (*)(ArenaPreAddAccountRequest*))(Il2CppBase() + 0x1E30588))(this);
	}
	template <typename T = void> T set_Pvp(uintptr_t value) {
		return ((T (*)(ArenaPreAddAccountRequest*, uintptr_t))(Il2CppBase() + 0x1E30590))(this, value);
	}
	template <typename T = uintptr_t> T get_Tourney() {
		return ((T (*)(ArenaPreAddAccountRequest*))(Il2CppBase() + 0x1E30598))(this);
	}
	template <typename T = void> T set_Tourney(uintptr_t value) {
		return ((T (*)(ArenaPreAddAccountRequest*, uintptr_t))(Il2CppBase() + 0x1E305A0))(this, value);
	}
	template <typename T = void*> T get_Guild() {
		return ((T (*)(ArenaPreAddAccountRequest*))(Il2CppBase() + 0x1E305A8))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaPreAddAccountRequest*, uintptr_t))(Il2CppBase() + 0x1E305B0))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaPreAddAccountRequest*, uintptr_t))(Il2CppBase() + 0x1E30620))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaPreAddAccountRequest*))(Il2CppBase() + 0x1E30714))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaPreAddAccountRequest*))(Il2CppBase() + 0x1E307EC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaPreAddAccountRequest*, uintptr_t))(Il2CppBase() + 0x1E30850))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaPreAddAccountRequest*))(Il2CppBase() + 0x1E309CC))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaPreAddAccountRequest*, uintptr_t))(Il2CppBase() + 0x1E30B7C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaPreAddAccountRequest*, uintptr_t))(Il2CppBase() + 0x1E30CD8))(this, input);
	}

};

}
