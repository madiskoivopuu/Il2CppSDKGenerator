#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaWorldCreateRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaWorldCreateRequest"));
	}

	 static MessageParser1<ProtoModels::ArenaWorldCreateRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaWorldCreateRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& iD_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& JsonDataFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<Il2CppString*>*& _repeated_jsonData_codec() {
		return *(FieldCodec1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<Il2CppString*>*& jsonData_() {
		return *(RepeatedField1<Il2CppString*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& IsGlobalMapFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& isGlobalMap_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& ParamsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& params_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& GlobalMapFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::NewGlobalMapType*>*& _repeated_globalMap_codec() {
		return *(FieldCodec1<ProtoModels::NewGlobalMapType*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 RepeatedField1<ProtoModels::NewGlobalMapType*>*& globalMap_() {
		return *(RepeatedField1<ProtoModels::NewGlobalMapType*>**)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& CellOwnerFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<int64_t>*& _repeated_cellOwner_codec() {
		return *(FieldCodec1<int64_t>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 RepeatedField1<int64_t>*& cellOwner_() {
		return *(RepeatedField1<int64_t>**)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& ClanAvatarsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::ClanAvatarsType*>*& _repeated_clanAvatars_codec() {
		return *(FieldCodec1<ProtoModels::ClanAvatarsType*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 RepeatedField1<ProtoModels::ClanAvatarsType*>*& clanAvatars_() {
		return *(RepeatedField1<ProtoModels::ClanAvatarsType*>**)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& ToClanIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& toClanID_() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> static R& WorldVariantFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::WorldVariantEnum> R& worldVariant_() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> static R& OwnersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::Player*>*& _repeated_owners_codec() {
		return *(FieldCodec1<ProtoModels::Player*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 RepeatedField1<ProtoModels::Player*>*& owners_() {
		return *(RepeatedField1<ProtoModels::Player*>**)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> static R& GeneratorLevelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& generatorLevel_() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> static R& GeneratorLoseStricFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& generatorLoseStric_() {
		return *(R*)((uintptr_t)this + 0x6C);
	}
	template <typename R = int32_t> static R& GetKillMobStatsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& getKillMobStats_() {
		return *(R*)((uintptr_t)this + 0x6D);
	}

	 static MessageParser1<ProtoModels::ArenaWorldCreateRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaWorldCreateRequest*>* (*)(void *))(Il2CppBase() + 0x28694F8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x286955C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x286967C))(this);
	}
	template <typename R = ProtoModels::ArenaWorldCreateRequest*> R Clone() {
		return ((R (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869A74))(this);
	}
	template <typename R = int64_t> R get_ID() {
		return ((R (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869AD0))(this);
	}
	template <typename R = void> R set_ID(int64_t value) {
		return ((R (*)(ArenaWorldCreateRequest*, int64_t))(Il2CppBase() + 0x2869AD8))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869AE0))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(ArenaWorldCreateRequest*, Il2CppString*))(Il2CppBase() + 0x2869AE8))(this, value);
	}
	 RepeatedField1<Il2CppString*>* get_JsonData() {
		return ((RepeatedField1<Il2CppString*>* (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869B68))(this);
	}
	template <typename R = bool> R get_IsGlobalMap() {
		return ((R (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869B70))(this);
	}
	template <typename R = void> R set_IsGlobalMap(bool value) {
		return ((R (*)(ArenaWorldCreateRequest*, bool))(Il2CppBase() + 0x2869B78))(this, value);
	}
	template <typename R = Il2CppString*> R get_Params() {
		return ((R (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869B84))(this);
	}
	template <typename R = void> R set_Params(Il2CppString* value) {
		return ((R (*)(ArenaWorldCreateRequest*, Il2CppString*))(Il2CppBase() + 0x2869B8C))(this, value);
	}
	 RepeatedField1<ProtoModels::NewGlobalMapType*>* get_GlobalMap() {
		return ((RepeatedField1<ProtoModels::NewGlobalMapType*>* (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869C0C))(this);
	}
	 RepeatedField1<int64_t>* get_CellOwner() {
		return ((RepeatedField1<int64_t>* (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869C14))(this);
	}
	 RepeatedField1<ProtoModels::ClanAvatarsType*>* get_ClanAvatars() {
		return ((RepeatedField1<ProtoModels::ClanAvatarsType*>* (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869C1C))(this);
	}
	template <typename R = int64_t> R get_ToClanID() {
		return ((R (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869C24))(this);
	}
	template <typename R = void> R set_ToClanID(int64_t value) {
		return ((R (*)(ArenaWorldCreateRequest*, int64_t))(Il2CppBase() + 0x2869C2C))(this, value);
	}
	template <typename R = ProtoModels::WorldVariantEnum> R get_WorldVariant() {
		return ((R (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869C34))(this);
	}
	template <typename R = void> R set_WorldVariant(ProtoModels::WorldVariantEnum value) {
		return ((R (*)(ArenaWorldCreateRequest*, ProtoModels::WorldVariantEnum))(Il2CppBase() + 0x2869C3C))(this, value);
	}
	 RepeatedField1<ProtoModels::Player*>* get_Owners() {
		return ((RepeatedField1<ProtoModels::Player*>* (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869C44))(this);
	}
	template <typename R = int32_t> R get_GeneratorLevel() {
		return ((R (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869C4C))(this);
	}
	template <typename R = void> R set_GeneratorLevel(int32_t value) {
		return ((R (*)(ArenaWorldCreateRequest*, int32_t))(Il2CppBase() + 0x2869C54))(this, value);
	}
	template <typename R = bool> R get_GeneratorLoseStric() {
		return ((R (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869C5C))(this);
	}
	template <typename R = void> R set_GeneratorLoseStric(bool value) {
		return ((R (*)(ArenaWorldCreateRequest*, bool))(Il2CppBase() + 0x2869C64))(this, value);
	}
	template <typename R = bool> R get_GetKillMobStats() {
		return ((R (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869C70))(this);
	}
	template <typename R = void> R set_GetKillMobStats(bool value) {
		return ((R (*)(ArenaWorldCreateRequest*, bool))(Il2CppBase() + 0x2869C78))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaWorldCreateRequest*, Il2CppObject*))(Il2CppBase() + 0x2869C84))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaWorldCreateRequest* other) {
		return ((R (*)(ArenaWorldCreateRequest*, ProtoModels::ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869CF4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x2869EF0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x286A0C8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaWorldCreateRequest*, uintptr_t))(Il2CppBase() + 0x286A12C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaWorldCreateRequest*))(Il2CppBase() + 0x286A480))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaWorldCreateRequest* other) {
		return ((R (*)(ArenaWorldCreateRequest*, ProtoModels::ArenaWorldCreateRequest*))(Il2CppBase() + 0x286A7EC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaWorldCreateRequest*, uintptr_t))(Il2CppBase() + 0x286A97C))(this, input);
	}

};

}
