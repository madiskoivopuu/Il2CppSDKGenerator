#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PvpGroupPackData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PvpGroupPackData"));
	}

	 static MessageParser1ProtoModels::PvpGroupPackData*>*& _parser() {
		return *(MessageParser1ProtoModels::PvpGroupPackData*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& FriendsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::FriendPairListType*> R& friends_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& FriendsCandidateFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::FriendPairListType*> R& friendsCandidate_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& BatteryFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::ClanTime*>*& _repeated_battery_codec() {
		return *(FieldCodec1ProtoModels::ClanTime*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::ClanTime*>*& battery_() {
		return *(RepeatedField1ProtoModels::ClanTime*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ForceOpenWindowFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::ClanTime*>*& _repeated_forceOpenWindow_codec() {
		return *(FieldCodec1ProtoModels::ClanTime*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 RepeatedField1ProtoModels::ClanTime*>*& forceOpenWindow_() {
		return *(RepeatedField1ProtoModels::ClanTime*>**)((uintptr_t)this + 0x28);
	}

	 static MessageParser1ProtoModels::PvpGroupPackData*>* get_Parser() {
		return ((MessageParser1ProtoModels::PvpGroupPackData*>* (*)(void *))(Il2CppBase() + 0x11C25E0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x11C2644))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(PvpGroupPackData*))(Il2CppBase() + 0x11C2764))(this);
	}
	template <typename R = ProtoModels::PvpGroupPackData*> R Clone() {
		return ((R (*)(PvpGroupPackData*))(Il2CppBase() + 0x11C2960))(this);
	}
	template <typename R = ProtoModels::FriendPairListType*> R get_Friends() {
		return ((R (*)(PvpGroupPackData*))(Il2CppBase() + 0x11C29BC))(this);
	}
	template <typename R = void> R set_Friends(ProtoModels::FriendPairListType* value) {
		return ((R (*)(PvpGroupPackData*, ProtoModels::FriendPairListType*))(Il2CppBase() + 0x11C29C4))(this, value);
	}
	template <typename R = ProtoModels::FriendPairListType*> R get_FriendsCandidate() {
		return ((R (*)(PvpGroupPackData*))(Il2CppBase() + 0x11C29CC))(this);
	}
	template <typename R = void> R set_FriendsCandidate(ProtoModels::FriendPairListType* value) {
		return ((R (*)(PvpGroupPackData*, ProtoModels::FriendPairListType*))(Il2CppBase() + 0x11C29D4))(this, value);
	}
	 RepeatedField1ProtoModels::ClanTime*>* get_Battery() {
		return ((RepeatedField1ProtoModels::ClanTime*>* (*)(PvpGroupPackData*))(Il2CppBase() + 0x11C29DC))(this);
	}
	 RepeatedField1ProtoModels::ClanTime*>* get_ForceOpenWindow() {
		return ((RepeatedField1ProtoModels::ClanTime*>* (*)(PvpGroupPackData*))(Il2CppBase() + 0x11C29E4))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(PvpGroupPackData*, Il2CppObject*))(Il2CppBase() + 0x11C29EC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::PvpGroupPackData* other) {
		return ((R (*)(PvpGroupPackData*, ProtoModels::PvpGroupPackData*))(Il2CppBase() + 0x11C2A5C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(PvpGroupPackData*))(Il2CppBase() + 0x11C2B28))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(PvpGroupPackData*))(Il2CppBase() + 0x11C2BB4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(PvpGroupPackData*, uintptr_t))(Il2CppBase() + 0x11C2C18))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(PvpGroupPackData*))(Il2CppBase() + 0x11C2D38))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::PvpGroupPackData* other) {
		return ((R (*)(PvpGroupPackData*, ProtoModels::PvpGroupPackData*))(Il2CppBase() + 0x11C2E8C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(PvpGroupPackData*, uintptr_t))(Il2CppBase() + 0x11C2FCC))(this, input);
	}

};

}
