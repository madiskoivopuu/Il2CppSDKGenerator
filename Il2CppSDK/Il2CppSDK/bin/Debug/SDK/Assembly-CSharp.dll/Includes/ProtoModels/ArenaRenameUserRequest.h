#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaRenameUserRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaRenameUserRequest"));
	}

	template <typename T = MessageParser1ArenaRenameUserRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1ArenaRenameUserRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x270E200))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x270E264))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaRenameUserRequest*))(Il2CppBase() + 0x270E384))(this);
	}
	template <typename T = ArenaRenameUserRequest*> T Clone() {
		return ((T (*)(ArenaRenameUserRequest*))(Il2CppBase() + 0x270E484))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaRenameUserRequest*))(Il2CppBase() + 0x270E4E0))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaRenameUserRequest*, int64_t))(Il2CppBase() + 0x270E4E8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ArenaRenameUserRequest*))(Il2CppBase() + 0x270E4F0))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(ArenaRenameUserRequest*, Il2CppString*))(Il2CppBase() + 0x270E4F8))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaRenameUserRequest*))(Il2CppBase() + 0x270E578))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaRenameUserRequest*, int64_t))(Il2CppBase() + 0x270E580))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaRenameUserRequest*, Il2CppObject*))(Il2CppBase() + 0x270E588))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaRenameUserRequest* other) {
		return ((T (*)(ArenaRenameUserRequest*, ArenaRenameUserRequest*))(Il2CppBase() + 0x270E5F8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaRenameUserRequest*))(Il2CppBase() + 0x270E668))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaRenameUserRequest*))(Il2CppBase() + 0x270E6F8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaRenameUserRequest*, uintptr_t))(Il2CppBase() + 0x270E75C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaRenameUserRequest*))(Il2CppBase() + 0x270E814))(this);
	}
	template <typename T = void> T MergeFrom(ArenaRenameUserRequest* other) {
		return ((T (*)(ArenaRenameUserRequest*, ArenaRenameUserRequest*))(Il2CppBase() + 0x270E918))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaRenameUserRequest*, uintptr_t))(Il2CppBase() + 0x270E970))(this, input);
	}

};

}
