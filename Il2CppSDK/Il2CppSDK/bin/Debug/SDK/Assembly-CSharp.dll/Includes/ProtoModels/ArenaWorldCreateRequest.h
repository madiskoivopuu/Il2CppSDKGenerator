#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaWorldCreateRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaWorldCreateRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& iD_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& JsonDataFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_jsonData_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& jsonData_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& IsGlobalMapFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isGlobalMap_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& ParamsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& params_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& GlobalMapFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_globalMap_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> T& globalMap_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& CellOwnerFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_cellOwner_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> T& cellOwner_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& ClanAvatarsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_clanAvatars_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> T& clanAvatars_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& ToClanIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& toClanID_() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& WorldVariantFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& worldVariant_() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& OwnersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_owners_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> T& owners_() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& GeneratorLevelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& generatorLevel_() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> static T& GeneratorLoseStricFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& generatorLoseStric_() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> static T& GetKillMobStatsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& getKillMobStats_() {
		return *(T*)((uintptr_t)this + 0x6D);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x28694F8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x286955C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x286967C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869A74))(this);
	}
	template <typename T = int64_t> T get_ID() {
		return ((T (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869AD0))(this);
	}
	template <typename T = void> T set_ID(int64_t value) {
		return ((T (*)(ArenaWorldCreateRequest*, int64_t))(Il2CppBase() + 0x2869AD8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869AE0))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(ArenaWorldCreateRequest*, Il2CppString*))(Il2CppBase() + 0x2869AE8))(this, value);
	}
	template <typename T = void*> T get_JsonData() {
		return ((T (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869B68))(this);
	}
	template <typename T = bool> T get_IsGlobalMap() {
		return ((T (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869B70))(this);
	}
	template <typename T = void> T set_IsGlobalMap(bool value) {
		return ((T (*)(ArenaWorldCreateRequest*, bool))(Il2CppBase() + 0x2869B78))(this, value);
	}
	template <typename T = Il2CppString*> T get_Params() {
		return ((T (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869B84))(this);
	}
	template <typename T = void> T set_Params(Il2CppString* value) {
		return ((T (*)(ArenaWorldCreateRequest*, Il2CppString*))(Il2CppBase() + 0x2869B8C))(this, value);
	}
	template <typename T = void*> T get_GlobalMap() {
		return ((T (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869C0C))(this);
	}
	template <typename T = void*> T get_CellOwner() {
		return ((T (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869C14))(this);
	}
	template <typename T = void*> T get_ClanAvatars() {
		return ((T (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869C1C))(this);
	}
	template <typename T = int64_t> T get_ToClanID() {
		return ((T (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869C24))(this);
	}
	template <typename T = void> T set_ToClanID(int64_t value) {
		return ((T (*)(ArenaWorldCreateRequest*, int64_t))(Il2CppBase() + 0x2869C2C))(this, value);
	}
	template <typename T = uintptr_t> T get_WorldVariant() {
		return ((T (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869C34))(this);
	}
	template <typename T = void> T set_WorldVariant(uintptr_t value) {
		return ((T (*)(ArenaWorldCreateRequest*, uintptr_t))(Il2CppBase() + 0x2869C3C))(this, value);
	}
	template <typename T = void*> T get_Owners() {
		return ((T (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869C44))(this);
	}
	template <typename T = int32_t> T get_GeneratorLevel() {
		return ((T (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869C4C))(this);
	}
	template <typename T = void> T set_GeneratorLevel(int32_t value) {
		return ((T (*)(ArenaWorldCreateRequest*, int32_t))(Il2CppBase() + 0x2869C54))(this, value);
	}
	template <typename T = bool> T get_GeneratorLoseStric() {
		return ((T (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869C5C))(this);
	}
	template <typename T = void> T set_GeneratorLoseStric(bool value) {
		return ((T (*)(ArenaWorldCreateRequest*, bool))(Il2CppBase() + 0x2869C64))(this, value);
	}
	template <typename T = bool> T get_GetKillMobStats() {
		return ((T (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869C70))(this);
	}
	template <typename T = void> T set_GetKillMobStats(bool value) {
		return ((T (*)(ArenaWorldCreateRequest*, bool))(Il2CppBase() + 0x2869C78))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaWorldCreateRequest*, uintptr_t))(Il2CppBase() + 0x2869C84))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaWorldCreateRequest*, uintptr_t))(Il2CppBase() + 0x2869CF4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869EF0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x286A0C8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaWorldCreateRequest*, uintptr_t))(Il2CppBase() + 0x286A12C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x286A480))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaWorldCreateRequest*, uintptr_t))(Il2CppBase() + 0x286A7EC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaWorldCreateRequest*, uintptr_t))(Il2CppBase() + 0x286A97C))(this, input);
	}

};

}
