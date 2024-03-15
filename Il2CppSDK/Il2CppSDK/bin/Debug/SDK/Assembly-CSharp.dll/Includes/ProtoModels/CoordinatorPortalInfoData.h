#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CoordinatorPortalInfoData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CoordinatorPortalInfoData"));
	}

	 static MessageParser1ProtoModels::CoordinatorPortalInfoData*>*& _parser() {
		return *(MessageParser1ProtoModels::CoordinatorPortalInfoData*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	 static FieldCodec1ProtoModels::CoordinatorPortalPlayer*>*& _repeated_players_codec() {
		return *(FieldCodec1ProtoModels::CoordinatorPortalPlayer*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::CoordinatorPortalPlayer*>*& players_() {
		return *(RepeatedField1ProtoModels::CoordinatorPortalPlayer*>**)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& TypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& type_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::CoordinatorPortalInfoData*>* get_Parser() {
		return ((MessageParser1ProtoModels::CoordinatorPortalInfoData*>* (*)(void *))(Il2CppBase() + 0x133B704))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x133B768))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(CoordinatorPortalInfoData*))(Il2CppBase() + 0x133B888))(this);
	}
	template <typename R = ProtoModels::CoordinatorPortalInfoData*> R Clone() {
		return ((R (*)(CoordinatorPortalInfoData*))(Il2CppBase() + 0x133B9F4))(this);
	}
	template <typename R = int32_t> R get_Rank() {
		return ((R (*)(CoordinatorPortalInfoData*))(Il2CppBase() + 0x133BA50))(this);
	}
	template <typename R = void> R set_Rank(int32_t value) {
		return ((R (*)(CoordinatorPortalInfoData*, int32_t))(Il2CppBase() + 0x133BA58))(this, value);
	}
	 RepeatedField1ProtoModels::CoordinatorPortalPlayer*>* get_Players() {
		return ((RepeatedField1ProtoModels::CoordinatorPortalPlayer*>* (*)(CoordinatorPortalInfoData*))(Il2CppBase() + 0x133BA60))(this);
	}
	template <typename R = int32_t> R get_Type() {
		return ((R (*)(CoordinatorPortalInfoData*))(Il2CppBase() + 0x133BA68))(this);
	}
	template <typename R = void> R set_Type(int32_t value) {
		return ((R (*)(CoordinatorPortalInfoData*, int32_t))(Il2CppBase() + 0x133BA70))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(CoordinatorPortalInfoData*, Il2CppObject*))(Il2CppBase() + 0x133BA78))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::CoordinatorPortalInfoData* other) {
		return ((R (*)(CoordinatorPortalInfoData*, ProtoModels::CoordinatorPortalInfoData*))(Il2CppBase() + 0x133BAE8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(CoordinatorPortalInfoData*))(Il2CppBase() + 0x133BB90))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(CoordinatorPortalInfoData*))(Il2CppBase() + 0x133BC18))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(CoordinatorPortalInfoData*, uintptr_t))(Il2CppBase() + 0x133BC7C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(CoordinatorPortalInfoData*))(Il2CppBase() + 0x133BD84))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::CoordinatorPortalInfoData* other) {
		return ((R (*)(CoordinatorPortalInfoData*, ProtoModels::CoordinatorPortalInfoData*))(Il2CppBase() + 0x133BEB0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(CoordinatorPortalInfoData*, uintptr_t))(Il2CppBase() + 0x133BF34))(this, input);
	}

};

}
