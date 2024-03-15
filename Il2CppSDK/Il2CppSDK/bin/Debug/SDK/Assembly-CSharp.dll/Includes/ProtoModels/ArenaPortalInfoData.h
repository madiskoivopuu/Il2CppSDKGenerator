#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaPortalInfoData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaPortalInfoData"));
	}

	 static MessageParser1<ProtoModels::ArenaPortalInfoData*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaPortalInfoData*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& RankFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& rank_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& PlayersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::ArenaPortalPlayer*>*& _repeated_players_codec() {
		return *(FieldCodec1<ProtoModels::ArenaPortalPlayer*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::ArenaPortalPlayer*>*& players_() {
		return *(RepeatedField1<ProtoModels::ArenaPortalPlayer*>**)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& TypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& type_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1<ProtoModels::ArenaPortalInfoData*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaPortalInfoData*>* (*)(void *))(Il2CppBase() + 0x1E2F034))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E2F098))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaPortalInfoData*))(Il2CppBase() + 0x1E2F1B8))(this);
	}
	template <typename R = ProtoModels::ArenaPortalInfoData*> R Clone() {
		return ((R (*)(ArenaPortalInfoData*))(Il2CppBase() + 0x1E2F324))(this);
	}
	template <typename R = int32_t> R get_Rank() {
		return ((R (*)(ArenaPortalInfoData*))(Il2CppBase() + 0x1E2F380))(this);
	}
	template <typename R = void> R set_Rank(int32_t value) {
		return ((R (*)(ArenaPortalInfoData*, int32_t))(Il2CppBase() + 0x1E2F388))(this, value);
	}
	 RepeatedField1<ProtoModels::ArenaPortalPlayer*>* get_Players() {
		return ((RepeatedField1<ProtoModels::ArenaPortalPlayer*>* (*)(ArenaPortalInfoData*))(Il2CppBase() + 0x1E2F390))(this);
	}
	template <typename R = int32_t> R get_Type() {
		return ((R (*)(ArenaPortalInfoData*))(Il2CppBase() + 0x1E2F398))(this);
	}
	template <typename R = void> R set_Type(int32_t value) {
		return ((R (*)(ArenaPortalInfoData*, int32_t))(Il2CppBase() + 0x1E2F3A0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaPortalInfoData*, Il2CppObject*))(Il2CppBase() + 0x1E2F3A8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaPortalInfoData* other) {
		return ((R (*)(ArenaPortalInfoData*, ProtoModels::ArenaPortalInfoData*))(Il2CppBase() + 0x1E2F418))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaPortalInfoData*))(Il2CppBase() + 0x1E2F4C0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaPortalInfoData*))(Il2CppBase() + 0x1E2F548))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaPortalInfoData*, uintptr_t))(Il2CppBase() + 0x1E2F5AC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaPortalInfoData*))(Il2CppBase() + 0x1E2F6B4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaPortalInfoData* other) {
		return ((R (*)(ArenaPortalInfoData*, ProtoModels::ArenaPortalInfoData*))(Il2CppBase() + 0x1E2F7E0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaPortalInfoData*, uintptr_t))(Il2CppBase() + 0x1E2F864))(this, input);
	}

};

}
