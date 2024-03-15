#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class SetPvpGroupDiplomaticRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "SetPvpGroupDiplomaticRequest"));
	}

	 static MessageParser1<ProtoModels::SetPvpGroupDiplomaticRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::SetPvpGroupDiplomaticRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& TargetClanIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& targetClanID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& SetWarFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& setWar_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::SetPvpGroupDiplomaticRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::SetPvpGroupDiplomaticRequest*>* (*)(void *))(Il2CppBase() + 0x1624978))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x16249DC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(SetPvpGroupDiplomaticRequest*))(Il2CppBase() + 0x1624AFC))(this);
	}
	template <typename R = ProtoModels::SetPvpGroupDiplomaticRequest*> R Clone() {
		return ((R (*)(SetPvpGroupDiplomaticRequest*))(Il2CppBase() + 0x1624BAC))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(SetPvpGroupDiplomaticRequest*))(Il2CppBase() + 0x1624C08))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(SetPvpGroupDiplomaticRequest*, int64_t))(Il2CppBase() + 0x1624C10))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(SetPvpGroupDiplomaticRequest*))(Il2CppBase() + 0x1624C18))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(SetPvpGroupDiplomaticRequest*, int64_t))(Il2CppBase() + 0x1624C20))(this, value);
	}
	template <typename R = int64_t> R get_TargetClanID() {
		return ((R (*)(SetPvpGroupDiplomaticRequest*))(Il2CppBase() + 0x1624C28))(this);
	}
	template <typename R = void> R set_TargetClanID(int64_t value) {
		return ((R (*)(SetPvpGroupDiplomaticRequest*, int64_t))(Il2CppBase() + 0x1624C30))(this, value);
	}
	template <typename R = bool> R get_SetWar() {
		return ((R (*)(SetPvpGroupDiplomaticRequest*))(Il2CppBase() + 0x1624C38))(this);
	}
	template <typename R = void> R set_SetWar(bool value) {
		return ((R (*)(SetPvpGroupDiplomaticRequest*, bool))(Il2CppBase() + 0x1624C40))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(SetPvpGroupDiplomaticRequest*, Il2CppObject*))(Il2CppBase() + 0x1624C4C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::SetPvpGroupDiplomaticRequest* other) {
		return ((R (*)(SetPvpGroupDiplomaticRequest*, ProtoModels::SetPvpGroupDiplomaticRequest*))(Il2CppBase() + 0x1624CBC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(SetPvpGroupDiplomaticRequest*))(Il2CppBase() + 0x1624D28))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(SetPvpGroupDiplomaticRequest*))(Il2CppBase() + 0x1624DD4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(SetPvpGroupDiplomaticRequest*, uintptr_t))(Il2CppBase() + 0x1624E38))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(SetPvpGroupDiplomaticRequest*))(Il2CppBase() + 0x1624F14))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::SetPvpGroupDiplomaticRequest* other) {
		return ((R (*)(SetPvpGroupDiplomaticRequest*, ProtoModels::SetPvpGroupDiplomaticRequest*))(Il2CppBase() + 0x1625020))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(SetPvpGroupDiplomaticRequest*, uintptr_t))(Il2CppBase() + 0x1625058))(this, input);
	}

};

}
