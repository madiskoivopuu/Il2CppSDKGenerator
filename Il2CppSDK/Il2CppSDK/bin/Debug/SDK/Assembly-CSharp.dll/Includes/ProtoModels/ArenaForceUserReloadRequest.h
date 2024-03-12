#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaForceUserReloadRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaForceUserReloadRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CoordinatorAddressFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& coordinatorAddress_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& InGlobalMapFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& inGlobalMap_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E1F800))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E1F864))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaForceUserReloadRequest*))(Il2CppBase() + 0x1E1F984))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaForceUserReloadRequest*))(Il2CppBase() + 0x1E1FA8C))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaForceUserReloadRequest*))(Il2CppBase() + 0x1E1FAE8))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaForceUserReloadRequest*, int64_t))(Il2CppBase() + 0x1E1FAF0))(this, value);
	}
	template <typename T = Il2CppString*> T get_CoordinatorAddress() {
		return ((T (*)(ArenaForceUserReloadRequest*))(Il2CppBase() + 0x1E1FAF8))(this);
	}
	template <typename T = void> T set_CoordinatorAddress(Il2CppString* value) {
		return ((T (*)(ArenaForceUserReloadRequest*, Il2CppString*))(Il2CppBase() + 0x1E1FB00))(this, value);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(ArenaForceUserReloadRequest*))(Il2CppBase() + 0x1E1FB80))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(ArenaForceUserReloadRequest*, int64_t))(Il2CppBase() + 0x1E1FB88))(this, value);
	}
	template <typename T = bool> T get_InGlobalMap() {
		return ((T (*)(ArenaForceUserReloadRequest*))(Il2CppBase() + 0x1E1FB90))(this);
	}
	template <typename T = void> T set_InGlobalMap(bool value) {
		return ((T (*)(ArenaForceUserReloadRequest*, bool))(Il2CppBase() + 0x1E1FB98))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaForceUserReloadRequest*, uintptr_t))(Il2CppBase() + 0x1E1FBA4))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaForceUserReloadRequest*, uintptr_t))(Il2CppBase() + 0x1E1FC14))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaForceUserReloadRequest*))(Il2CppBase() + 0x1E1FCA0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaForceUserReloadRequest*))(Il2CppBase() + 0x1E1FD54))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaForceUserReloadRequest*, uintptr_t))(Il2CppBase() + 0x1E1FDB8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaForceUserReloadRequest*))(Il2CppBase() + 0x1E1FE9C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaForceUserReloadRequest*, uintptr_t))(Il2CppBase() + 0x1E1FFB4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaForceUserReloadRequest*, uintptr_t))(Il2CppBase() + 0x1E20018))(this, input);
	}

};

}
