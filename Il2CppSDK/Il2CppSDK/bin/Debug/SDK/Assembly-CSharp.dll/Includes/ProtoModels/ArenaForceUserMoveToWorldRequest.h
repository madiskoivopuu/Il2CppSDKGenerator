#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaForceUserMoveToWorldRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaForceUserMoveToWorldRequest"));
	}

	 static MessageParser1ProtoModels::ArenaForceUserMoveToWorldRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaForceUserMoveToWorldRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& CoordinatorAddressFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& coordinatorAddress_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& IsWorldFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& isWorld_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& LocationNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& locationName_() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	 static MessageParser1ProtoModels::ArenaForceUserMoveToWorldRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaForceUserMoveToWorldRequest*>* (*)(void *))(Il2CppBase() + 0x1E1EC5C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E1ECC0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaForceUserMoveToWorldRequest*))(Il2CppBase() + 0x1E1EDE0))(this);
	}
	template <typename R = ProtoModels::ArenaForceUserMoveToWorldRequest*> R Clone() {
		return ((R (*)(ArenaForceUserMoveToWorldRequest*))(Il2CppBase() + 0x1E1EF04))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaForceUserMoveToWorldRequest*))(Il2CppBase() + 0x1E1EF60))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaForceUserMoveToWorldRequest*, int64_t))(Il2CppBase() + 0x1E1EF68))(this, value);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(ArenaForceUserMoveToWorldRequest*))(Il2CppBase() + 0x1E1EF70))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(ArenaForceUserMoveToWorldRequest*, int64_t))(Il2CppBase() + 0x1E1EF78))(this, value);
	}
	template <typename R = Il2CppString*> R get_CoordinatorAddress() {
		return ((R (*)(ArenaForceUserMoveToWorldRequest*))(Il2CppBase() + 0x1E1EF80))(this);
	}
	template <typename R = void> R set_CoordinatorAddress(Il2CppString* value) {
		return ((R (*)(ArenaForceUserMoveToWorldRequest*, Il2CppString*))(Il2CppBase() + 0x1E1EF88))(this, value);
	}
	template <typename R = bool> R get_IsWorld() {
		return ((R (*)(ArenaForceUserMoveToWorldRequest*))(Il2CppBase() + 0x1E1F008))(this);
	}
	template <typename R = void> R set_IsWorld(bool value) {
		return ((R (*)(ArenaForceUserMoveToWorldRequest*, bool))(Il2CppBase() + 0x1E1F010))(this, value);
	}
	template <typename R = Il2CppString*> R get_LocationName() {
		return ((R (*)(ArenaForceUserMoveToWorldRequest*))(Il2CppBase() + 0x1E1F01C))(this);
	}
	template <typename R = void> R set_LocationName(Il2CppString* value) {
		return ((R (*)(ArenaForceUserMoveToWorldRequest*, Il2CppString*))(Il2CppBase() + 0x1E1F024))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaForceUserMoveToWorldRequest*, Il2CppObject*))(Il2CppBase() + 0x1E1F0A4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaForceUserMoveToWorldRequest* other) {
		return ((R (*)(ArenaForceUserMoveToWorldRequest*, ProtoModels::ArenaForceUserMoveToWorldRequest*))(Il2CppBase() + 0x1E1F114))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaForceUserMoveToWorldRequest*))(Il2CppBase() + 0x1E1F1BC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaForceUserMoveToWorldRequest*))(Il2CppBase() + 0x1E1F290))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaForceUserMoveToWorldRequest*, uintptr_t))(Il2CppBase() + 0x1E1F2F4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaForceUserMoveToWorldRequest*))(Il2CppBase() + 0x1E1F40C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaForceUserMoveToWorldRequest* other) {
		return ((R (*)(ArenaForceUserMoveToWorldRequest*, ProtoModels::ArenaForceUserMoveToWorldRequest*))(Il2CppBase() + 0x1E1F56C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaForceUserMoveToWorldRequest*, uintptr_t))(Il2CppBase() + 0x1E1F5F0))(this, input);
	}

};

}
