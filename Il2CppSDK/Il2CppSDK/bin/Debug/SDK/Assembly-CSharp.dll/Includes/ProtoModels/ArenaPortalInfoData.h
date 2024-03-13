#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaPortalInfoData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaPortalInfoData"));
	}

	template <typename T = MessageParser1ArenaPortalInfoData*>*> static T& _parser() {
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
	template <typename T = FieldCodec1ArenaPortalPlayer*>*> static T& _repeated_players_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1ArenaPortalPlayer*>*> T& players_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& TypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& type_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1ArenaPortalInfoData*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E2F034))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E2F098))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaPortalInfoData*))(Il2CppBase() + 0x1E2F1B8))(this);
	}
	template <typename T = ArenaPortalInfoData*> T Clone() {
		return ((T (*)(ArenaPortalInfoData*))(Il2CppBase() + 0x1E2F324))(this);
	}
	template <typename T = int32_t> T get_Rank() {
		return ((T (*)(ArenaPortalInfoData*))(Il2CppBase() + 0x1E2F380))(this);
	}
	template <typename T = void> T set_Rank(int32_t value) {
		return ((T (*)(ArenaPortalInfoData*, int32_t))(Il2CppBase() + 0x1E2F388))(this, value);
	}
	template <typename T = RepeatedField1ArenaPortalPlayer*>*> T get_Players() {
		return ((T (*)(ArenaPortalInfoData*))(Il2CppBase() + 0x1E2F390))(this);
	}
	template <typename T = int32_t> T get_Type() {
		return ((T (*)(ArenaPortalInfoData*))(Il2CppBase() + 0x1E2F398))(this);
	}
	template <typename T = void> T set_Type(int32_t value) {
		return ((T (*)(ArenaPortalInfoData*, int32_t))(Il2CppBase() + 0x1E2F3A0))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaPortalInfoData*, Il2CppObject*))(Il2CppBase() + 0x1E2F3A8))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaPortalInfoData* other) {
		return ((T (*)(ArenaPortalInfoData*, ArenaPortalInfoData*))(Il2CppBase() + 0x1E2F418))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaPortalInfoData*))(Il2CppBase() + 0x1E2F4C0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaPortalInfoData*))(Il2CppBase() + 0x1E2F548))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaPortalInfoData*, uintptr_t))(Il2CppBase() + 0x1E2F5AC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaPortalInfoData*))(Il2CppBase() + 0x1E2F6B4))(this);
	}
	template <typename T = void> T MergeFrom(ArenaPortalInfoData* other) {
		return ((T (*)(ArenaPortalInfoData*, ArenaPortalInfoData*))(Il2CppBase() + 0x1E2F7E0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaPortalInfoData*, uintptr_t))(Il2CppBase() + 0x1E2F864))(this, input);
	}

};

}
