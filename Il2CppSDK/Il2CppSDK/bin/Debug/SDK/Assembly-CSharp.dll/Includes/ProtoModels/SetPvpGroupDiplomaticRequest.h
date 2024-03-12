#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class SetPvpGroupDiplomaticRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "SetPvpGroupDiplomaticRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& TargetClanIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& targetClanID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& SetWarFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& setWar_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1624978))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x16249DC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(SetPvpGroupDiplomaticRequest*))(Il2CppBase() + 0x1624AFC))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(SetPvpGroupDiplomaticRequest*))(Il2CppBase() + 0x1624BAC))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(SetPvpGroupDiplomaticRequest*))(Il2CppBase() + 0x1624C08))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(SetPvpGroupDiplomaticRequest*, int64_t))(Il2CppBase() + 0x1624C10))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(SetPvpGroupDiplomaticRequest*))(Il2CppBase() + 0x1624C18))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(SetPvpGroupDiplomaticRequest*, int64_t))(Il2CppBase() + 0x1624C20))(this, value);
	}
	template <typename T = int64_t> T get_TargetClanID() {
		return ((T (*)(SetPvpGroupDiplomaticRequest*))(Il2CppBase() + 0x1624C28))(this);
	}
	template <typename T = void> T set_TargetClanID(int64_t value) {
		return ((T (*)(SetPvpGroupDiplomaticRequest*, int64_t))(Il2CppBase() + 0x1624C30))(this, value);
	}
	template <typename T = bool> T get_SetWar() {
		return ((T (*)(SetPvpGroupDiplomaticRequest*))(Il2CppBase() + 0x1624C38))(this);
	}
	template <typename T = void> T set_SetWar(bool value) {
		return ((T (*)(SetPvpGroupDiplomaticRequest*, bool))(Il2CppBase() + 0x1624C40))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(SetPvpGroupDiplomaticRequest*, uintptr_t))(Il2CppBase() + 0x1624C4C))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(SetPvpGroupDiplomaticRequest*, uintptr_t))(Il2CppBase() + 0x1624CBC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(SetPvpGroupDiplomaticRequest*))(Il2CppBase() + 0x1624D28))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(SetPvpGroupDiplomaticRequest*))(Il2CppBase() + 0x1624DD4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(SetPvpGroupDiplomaticRequest*, uintptr_t))(Il2CppBase() + 0x1624E38))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(SetPvpGroupDiplomaticRequest*))(Il2CppBase() + 0x1624F14))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(SetPvpGroupDiplomaticRequest*, uintptr_t))(Il2CppBase() + 0x1625020))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(SetPvpGroupDiplomaticRequest*, uintptr_t))(Il2CppBase() + 0x1625058))(this, input);
	}

};

}
