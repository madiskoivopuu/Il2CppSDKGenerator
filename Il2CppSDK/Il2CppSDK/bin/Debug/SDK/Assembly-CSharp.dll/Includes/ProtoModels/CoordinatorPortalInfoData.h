#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CoordinatorPortalInfoData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CoordinatorPortalInfoData"));
	}

	template <typename T = MessageParser1CoordinatorPortalInfoData*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& RankFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& rank_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& PlayersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1CoordinatorPortalPlayer*>*> static T& _repeated_players_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1CoordinatorPortalPlayer*>*> T& players_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& TypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& type_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1CoordinatorPortalInfoData*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x133B704))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x133B768))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(CoordinatorPortalInfoData*))(Il2CppBase() + 0x133B888))(this);
	}
	template <typename T = CoordinatorPortalInfoData*> T Clone() {
		return ((T (*)(CoordinatorPortalInfoData*))(Il2CppBase() + 0x133B9F4))(this);
	}
	template <typename T = int32_t> T get_Rank() {
		return ((T (*)(CoordinatorPortalInfoData*))(Il2CppBase() + 0x133BA50))(this);
	}
	template <typename T = void> T set_Rank(int32_t value) {
		return ((T (*)(CoordinatorPortalInfoData*, int32_t))(Il2CppBase() + 0x133BA58))(this, value);
	}
	template <typename T = RepeatedField1CoordinatorPortalPlayer*>*> T get_Players() {
		return ((T (*)(CoordinatorPortalInfoData*))(Il2CppBase() + 0x133BA60))(this);
	}
	template <typename T = int32_t> T get_Type() {
		return ((T (*)(CoordinatorPortalInfoData*))(Il2CppBase() + 0x133BA68))(this);
	}
	template <typename T = void> T set_Type(int32_t value) {
		return ((T (*)(CoordinatorPortalInfoData*, int32_t))(Il2CppBase() + 0x133BA70))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(CoordinatorPortalInfoData*, Il2CppObject*))(Il2CppBase() + 0x133BA78))(this, other);
	}
	template <typename T = bool> T Equals_1(CoordinatorPortalInfoData* other) {
		return ((T (*)(CoordinatorPortalInfoData*, CoordinatorPortalInfoData*))(Il2CppBase() + 0x133BAE8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(CoordinatorPortalInfoData*))(Il2CppBase() + 0x133BB90))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CoordinatorPortalInfoData*))(Il2CppBase() + 0x133BC18))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(CoordinatorPortalInfoData*, uintptr_t))(Il2CppBase() + 0x133BC7C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(CoordinatorPortalInfoData*))(Il2CppBase() + 0x133BD84))(this);
	}
	template <typename T = void> T MergeFrom(CoordinatorPortalInfoData* other) {
		return ((T (*)(CoordinatorPortalInfoData*, CoordinatorPortalInfoData*))(Il2CppBase() + 0x133BEB0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(CoordinatorPortalInfoData*, uintptr_t))(Il2CppBase() + 0x133BF34))(this, input);
	}

};

}
