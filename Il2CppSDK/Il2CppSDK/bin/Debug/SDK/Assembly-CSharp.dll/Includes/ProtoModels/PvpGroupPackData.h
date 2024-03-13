#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PvpGroupPackData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PvpGroupPackData"));
	}

	template <typename T = MessageParser1PvpGroupPackData*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& FriendsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FriendPairListType*> T& friends_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& FriendsCandidateFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FriendPairListType*> T& friendsCandidate_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& BatteryFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1ClanTime*>*> static T& _repeated_battery_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1ClanTime*>*> T& battery_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ForceOpenWindowFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1ClanTime*>*> static T& _repeated_forceOpenWindow_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = RepeatedField1ClanTime*>*> T& forceOpenWindow_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = MessageParser1PvpGroupPackData*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x11C25E0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x11C2644))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(PvpGroupPackData*))(Il2CppBase() + 0x11C2764))(this);
	}
	template <typename T = PvpGroupPackData*> T Clone() {
		return ((T (*)(PvpGroupPackData*))(Il2CppBase() + 0x11C2960))(this);
	}
	template <typename T = FriendPairListType*> T get_Friends() {
		return ((T (*)(PvpGroupPackData*))(Il2CppBase() + 0x11C29BC))(this);
	}
	template <typename T = void> T set_Friends(FriendPairListType* value) {
		return ((T (*)(PvpGroupPackData*, FriendPairListType*))(Il2CppBase() + 0x11C29C4))(this, value);
	}
	template <typename T = FriendPairListType*> T get_FriendsCandidate() {
		return ((T (*)(PvpGroupPackData*))(Il2CppBase() + 0x11C29CC))(this);
	}
	template <typename T = void> T set_FriendsCandidate(FriendPairListType* value) {
		return ((T (*)(PvpGroupPackData*, FriendPairListType*))(Il2CppBase() + 0x11C29D4))(this, value);
	}
	template <typename T = RepeatedField1ClanTime*>*> T get_Battery() {
		return ((T (*)(PvpGroupPackData*))(Il2CppBase() + 0x11C29DC))(this);
	}
	template <typename T = RepeatedField1ClanTime*>*> T get_ForceOpenWindow() {
		return ((T (*)(PvpGroupPackData*))(Il2CppBase() + 0x11C29E4))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(PvpGroupPackData*, Il2CppObject*))(Il2CppBase() + 0x11C29EC))(this, other);
	}
	template <typename T = bool> T Equals_1(PvpGroupPackData* other) {
		return ((T (*)(PvpGroupPackData*, PvpGroupPackData*))(Il2CppBase() + 0x11C2A5C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PvpGroupPackData*))(Il2CppBase() + 0x11C2B28))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PvpGroupPackData*))(Il2CppBase() + 0x11C2BB4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(PvpGroupPackData*, uintptr_t))(Il2CppBase() + 0x11C2C18))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(PvpGroupPackData*))(Il2CppBase() + 0x11C2D38))(this);
	}
	template <typename T = void> T MergeFrom(PvpGroupPackData* other) {
		return ((T (*)(PvpGroupPackData*, PvpGroupPackData*))(Il2CppBase() + 0x11C2E8C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(PvpGroupPackData*, uintptr_t))(Il2CppBase() + 0x11C2FCC))(this, input);
	}

};

}
