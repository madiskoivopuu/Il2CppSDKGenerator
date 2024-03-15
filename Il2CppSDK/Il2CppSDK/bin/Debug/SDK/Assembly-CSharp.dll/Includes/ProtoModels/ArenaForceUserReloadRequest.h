#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaForceUserReloadRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaForceUserReloadRequest"));
	}

	 static MessageParser1<ProtoModels::ArenaForceUserReloadRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaForceUserReloadRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CoordinatorAddressFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& coordinatorAddress_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& InGlobalMapFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& inGlobalMap_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::ArenaForceUserReloadRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaForceUserReloadRequest*>* (*)(void *))(Il2CppBase() + 0x1E1F800))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E1F864))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaForceUserReloadRequest*))(Il2CppBase() + 0x1E1F984))(this);
	}
	template <typename R = ProtoModels::ArenaForceUserReloadRequest*> R Clone() {
		return ((R (*)(ArenaForceUserReloadRequest*))(Il2CppBase() + 0x1E1FA8C))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaForceUserReloadRequest*))(Il2CppBase() + 0x1E1FAE8))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaForceUserReloadRequest*, int64_t))(Il2CppBase() + 0x1E1FAF0))(this, value);
	}
	template <typename R = Il2CppString*> R get_CoordinatorAddress() {
		return ((R (*)(ArenaForceUserReloadRequest*))(Il2CppBase() + 0x1E1FAF8))(this);
	}
	template <typename R = void> R set_CoordinatorAddress(Il2CppString* value) {
		return ((R (*)(ArenaForceUserReloadRequest*, Il2CppString*))(Il2CppBase() + 0x1E1FB00))(this, value);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(ArenaForceUserReloadRequest*))(Il2CppBase() + 0x1E1FB80))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(ArenaForceUserReloadRequest*, int64_t))(Il2CppBase() + 0x1E1FB88))(this, value);
	}
	template <typename R = bool> R get_InGlobalMap() {
		return ((R (*)(ArenaForceUserReloadRequest*))(Il2CppBase() + 0x1E1FB90))(this);
	}
	template <typename R = void> R set_InGlobalMap(bool value) {
		return ((R (*)(ArenaForceUserReloadRequest*, bool))(Il2CppBase() + 0x1E1FB98))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaForceUserReloadRequest*, Il2CppObject*))(Il2CppBase() + 0x1E1FBA4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaForceUserReloadRequest* other) {
		return ((R (*)(ArenaForceUserReloadRequest*, ProtoModels::ArenaForceUserReloadRequest*))(Il2CppBase() + 0x1E1FC14))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaForceUserReloadRequest*))(Il2CppBase() + 0x1E1FCA0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaForceUserReloadRequest*))(Il2CppBase() + 0x1E1FD54))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaForceUserReloadRequest*, uintptr_t))(Il2CppBase() + 0x1E1FDB8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaForceUserReloadRequest*))(Il2CppBase() + 0x1E1FE9C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaForceUserReloadRequest* other) {
		return ((R (*)(ArenaForceUserReloadRequest*, ProtoModels::ArenaForceUserReloadRequest*))(Il2CppBase() + 0x1E1FFB4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaForceUserReloadRequest*, uintptr_t))(Il2CppBase() + 0x1E20018))(this, input);
	}

};

}
