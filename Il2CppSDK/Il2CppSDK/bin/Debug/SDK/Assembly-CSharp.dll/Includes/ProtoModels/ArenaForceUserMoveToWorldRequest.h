#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaForceUserMoveToWorldRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaForceUserMoveToWorldRequest"));
	}

	template <typename T = MessageParser1ArenaForceUserMoveToWorldRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& CoordinatorAddressFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& coordinatorAddress_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& IsWorldFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isWorld_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& LocationNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& locationName_() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = MessageParser1ArenaForceUserMoveToWorldRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E1EC5C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E1ECC0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaForceUserMoveToWorldRequest*))(Il2CppBase() + 0x1E1EDE0))(this);
	}
	template <typename T = ArenaForceUserMoveToWorldRequest*> T Clone() {
		return ((T (*)(ArenaForceUserMoveToWorldRequest*))(Il2CppBase() + 0x1E1EF04))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaForceUserMoveToWorldRequest*))(Il2CppBase() + 0x1E1EF60))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaForceUserMoveToWorldRequest*, int64_t))(Il2CppBase() + 0x1E1EF68))(this, value);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(ArenaForceUserMoveToWorldRequest*))(Il2CppBase() + 0x1E1EF70))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(ArenaForceUserMoveToWorldRequest*, int64_t))(Il2CppBase() + 0x1E1EF78))(this, value);
	}
	template <typename T = Il2CppString*> T get_CoordinatorAddress() {
		return ((T (*)(ArenaForceUserMoveToWorldRequest*))(Il2CppBase() + 0x1E1EF80))(this);
	}
	template <typename T = void> T set_CoordinatorAddress(Il2CppString* value) {
		return ((T (*)(ArenaForceUserMoveToWorldRequest*, Il2CppString*))(Il2CppBase() + 0x1E1EF88))(this, value);
	}
	template <typename T = bool> T get_IsWorld() {
		return ((T (*)(ArenaForceUserMoveToWorldRequest*))(Il2CppBase() + 0x1E1F008))(this);
	}
	template <typename T = void> T set_IsWorld(bool value) {
		return ((T (*)(ArenaForceUserMoveToWorldRequest*, bool))(Il2CppBase() + 0x1E1F010))(this, value);
	}
	template <typename T = Il2CppString*> T get_LocationName() {
		return ((T (*)(ArenaForceUserMoveToWorldRequest*))(Il2CppBase() + 0x1E1F01C))(this);
	}
	template <typename T = void> T set_LocationName(Il2CppString* value) {
		return ((T (*)(ArenaForceUserMoveToWorldRequest*, Il2CppString*))(Il2CppBase() + 0x1E1F024))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaForceUserMoveToWorldRequest*, Il2CppObject*))(Il2CppBase() + 0x1E1F0A4))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaForceUserMoveToWorldRequest* other) {
		return ((T (*)(ArenaForceUserMoveToWorldRequest*, ArenaForceUserMoveToWorldRequest*))(Il2CppBase() + 0x1E1F114))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaForceUserMoveToWorldRequest*))(Il2CppBase() + 0x1E1F1BC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaForceUserMoveToWorldRequest*))(Il2CppBase() + 0x1E1F290))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaForceUserMoveToWorldRequest*, uintptr_t))(Il2CppBase() + 0x1E1F2F4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaForceUserMoveToWorldRequest*))(Il2CppBase() + 0x1E1F40C))(this);
	}
	template <typename T = void> T MergeFrom(ArenaForceUserMoveToWorldRequest* other) {
		return ((T (*)(ArenaForceUserMoveToWorldRequest*, ArenaForceUserMoveToWorldRequest*))(Il2CppBase() + 0x1E1F56C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaForceUserMoveToWorldRequest*, uintptr_t))(Il2CppBase() + 0x1E1F5F0))(this, input);
	}

};

}
