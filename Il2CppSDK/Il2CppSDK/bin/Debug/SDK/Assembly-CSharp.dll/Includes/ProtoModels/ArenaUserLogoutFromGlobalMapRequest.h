#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserLogoutFromGlobalMapRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserLogoutFromGlobalMapRequest"));
	}

	template <typename T = MessageParser1ArenaUserLogoutFromGlobalMapRequest*>*> static T& _parser() {
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

	template <typename T = MessageParser1ArenaUserLogoutFromGlobalMapRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2860470))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x28604D4))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaUserLogoutFromGlobalMapRequest*))(Il2CppBase() + 0x28605F4))(this);
	}
	template <typename T = ArenaUserLogoutFromGlobalMapRequest*> T Clone() {
		return ((T (*)(ArenaUserLogoutFromGlobalMapRequest*))(Il2CppBase() + 0x2860694))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaUserLogoutFromGlobalMapRequest*))(Il2CppBase() + 0x28606F0))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaUserLogoutFromGlobalMapRequest*, int64_t))(Il2CppBase() + 0x28606F8))(this, value);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(ArenaUserLogoutFromGlobalMapRequest*))(Il2CppBase() + 0x2860700))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(ArenaUserLogoutFromGlobalMapRequest*, int64_t))(Il2CppBase() + 0x2860708))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaUserLogoutFromGlobalMapRequest*, Il2CppObject*))(Il2CppBase() + 0x2860710))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaUserLogoutFromGlobalMapRequest* other) {
		return ((T (*)(ArenaUserLogoutFromGlobalMapRequest*, ArenaUserLogoutFromGlobalMapRequest*))(Il2CppBase() + 0x28607AC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaUserLogoutFromGlobalMapRequest*))(Il2CppBase() + 0x28607EC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaUserLogoutFromGlobalMapRequest*))(Il2CppBase() + 0x2860858))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaUserLogoutFromGlobalMapRequest*, uintptr_t))(Il2CppBase() + 0x28608BC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaUserLogoutFromGlobalMapRequest*))(Il2CppBase() + 0x2860940))(this);
	}
	template <typename T = void> T MergeFrom(ArenaUserLogoutFromGlobalMapRequest* other) {
		return ((T (*)(ArenaUserLogoutFromGlobalMapRequest*, ArenaUserLogoutFromGlobalMapRequest*))(Il2CppBase() + 0x28609F4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaUserLogoutFromGlobalMapRequest*, uintptr_t))(Il2CppBase() + 0x2860A14))(this, input);
	}

};

}
