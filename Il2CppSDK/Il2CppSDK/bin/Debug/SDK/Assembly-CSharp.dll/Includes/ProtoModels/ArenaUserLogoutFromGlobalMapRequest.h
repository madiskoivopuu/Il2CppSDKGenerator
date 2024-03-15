#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserLogoutFromGlobalMapRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserLogoutFromGlobalMapRequest"));
	}

	 static MessageParser1<ProtoModels::ArenaUserLogoutFromGlobalMapRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaUserLogoutFromGlobalMapRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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

	 static MessageParser1<ProtoModels::ArenaUserLogoutFromGlobalMapRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaUserLogoutFromGlobalMapRequest*>* (*)(void *))(Il2CppBase() + 0x2860470))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x28604D4))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaUserLogoutFromGlobalMapRequest*))(Il2CppBase() + 0x28605F4))(this);
	}
	template <typename R = ProtoModels::ArenaUserLogoutFromGlobalMapRequest*> R Clone() {
		return ((R (*)(ArenaUserLogoutFromGlobalMapRequest*))(Il2CppBase() + 0x2860694))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaUserLogoutFromGlobalMapRequest*))(Il2CppBase() + 0x28606F0))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaUserLogoutFromGlobalMapRequest*, int64_t))(Il2CppBase() + 0x28606F8))(this, value);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(ArenaUserLogoutFromGlobalMapRequest*))(Il2CppBase() + 0x2860700))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(ArenaUserLogoutFromGlobalMapRequest*, int64_t))(Il2CppBase() + 0x2860708))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaUserLogoutFromGlobalMapRequest*, Il2CppObject*))(Il2CppBase() + 0x2860710))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaUserLogoutFromGlobalMapRequest* other) {
		return ((R (*)(ArenaUserLogoutFromGlobalMapRequest*, ProtoModels::ArenaUserLogoutFromGlobalMapRequest*))(Il2CppBase() + 0x28607AC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaUserLogoutFromGlobalMapRequest*))(Il2CppBase() + 0x28607EC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaUserLogoutFromGlobalMapRequest*))(Il2CppBase() + 0x2860858))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaUserLogoutFromGlobalMapRequest*, uintptr_t))(Il2CppBase() + 0x28608BC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaUserLogoutFromGlobalMapRequest*))(Il2CppBase() + 0x2860940))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaUserLogoutFromGlobalMapRequest* other) {
		return ((R (*)(ArenaUserLogoutFromGlobalMapRequest*, ProtoModels::ArenaUserLogoutFromGlobalMapRequest*))(Il2CppBase() + 0x28609F4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaUserLogoutFromGlobalMapRequest*, uintptr_t))(Il2CppBase() + 0x2860A14))(this, input);
	}

};

}
