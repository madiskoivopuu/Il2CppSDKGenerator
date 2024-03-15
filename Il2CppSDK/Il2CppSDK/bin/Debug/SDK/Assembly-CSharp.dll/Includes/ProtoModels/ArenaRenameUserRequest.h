#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaRenameUserRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaRenameUserRequest"));
	}

	 static MessageParser1<ProtoModels::ArenaRenameUserRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaRenameUserRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1<ProtoModels::ArenaRenameUserRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaRenameUserRequest*>* (*)(void *))(Il2CppBase() + 0x270E200))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x270E264))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaRenameUserRequest*))(Il2CppBase() + 0x270E384))(this);
	}
	template <typename R = ProtoModels::ArenaRenameUserRequest*> R Clone() {
		return ((R (*)(ArenaRenameUserRequest*))(Il2CppBase() + 0x270E484))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaRenameUserRequest*))(Il2CppBase() + 0x270E4E0))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaRenameUserRequest*, int64_t))(Il2CppBase() + 0x270E4E8))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(ArenaRenameUserRequest*))(Il2CppBase() + 0x270E4F0))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(ArenaRenameUserRequest*, Il2CppString*))(Il2CppBase() + 0x270E4F8))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaRenameUserRequest*))(Il2CppBase() + 0x270E578))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaRenameUserRequest*, int64_t))(Il2CppBase() + 0x270E580))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaRenameUserRequest*, Il2CppObject*))(Il2CppBase() + 0x270E588))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaRenameUserRequest* other) {
		return ((R (*)(ArenaRenameUserRequest*, ProtoModels::ArenaRenameUserRequest*))(Il2CppBase() + 0x270E5F8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaRenameUserRequest*))(Il2CppBase() + 0x270E668))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaRenameUserRequest*))(Il2CppBase() + 0x270E6F8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaRenameUserRequest*, uintptr_t))(Il2CppBase() + 0x270E75C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaRenameUserRequest*))(Il2CppBase() + 0x270E814))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaRenameUserRequest* other) {
		return ((R (*)(ArenaRenameUserRequest*, ProtoModels::ArenaRenameUserRequest*))(Il2CppBase() + 0x270E918))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaRenameUserRequest*, uintptr_t))(Il2CppBase() + 0x270E970))(this, input);
	}

};

}
