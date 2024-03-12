#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminLoadJsonDataRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminLoadJsonDataRequest"));
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
	template <typename T = int32_t> static T& AccountIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& accountID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& NeedUserFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& needUser_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& NeedWorldFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& needWorld_() {
		return *(T*)((uintptr_t)this + 0x21);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x12931A4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1293208))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(AdminLoadJsonDataRequest*))(Il2CppBase() + 0x1293328))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(AdminLoadJsonDataRequest*))(Il2CppBase() + 0x12933D8))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(AdminLoadJsonDataRequest*))(Il2CppBase() + 0x1293434))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(AdminLoadJsonDataRequest*, int64_t))(Il2CppBase() + 0x129343C))(this, value);
	}
	template <typename T = int64_t> T get_AccountID() {
		return ((T (*)(AdminLoadJsonDataRequest*))(Il2CppBase() + 0x1293444))(this);
	}
	template <typename T = void> T set_AccountID(int64_t value) {
		return ((T (*)(AdminLoadJsonDataRequest*, int64_t))(Il2CppBase() + 0x129344C))(this, value);
	}
	template <typename T = bool> T get_NeedUser() {
		return ((T (*)(AdminLoadJsonDataRequest*))(Il2CppBase() + 0x1293454))(this);
	}
	template <typename T = void> T set_NeedUser(bool value) {
		return ((T (*)(AdminLoadJsonDataRequest*, bool))(Il2CppBase() + 0x129345C))(this, value);
	}
	template <typename T = bool> T get_NeedWorld() {
		return ((T (*)(AdminLoadJsonDataRequest*))(Il2CppBase() + 0x1293468))(this);
	}
	template <typename T = void> T set_NeedWorld(bool value) {
		return ((T (*)(AdminLoadJsonDataRequest*, bool))(Il2CppBase() + 0x1293470))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(AdminLoadJsonDataRequest*, uintptr_t))(Il2CppBase() + 0x129347C))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(AdminLoadJsonDataRequest*, uintptr_t))(Il2CppBase() + 0x12934EC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AdminLoadJsonDataRequest*))(Il2CppBase() + 0x1293568))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AdminLoadJsonDataRequest*))(Il2CppBase() + 0x1293618))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(AdminLoadJsonDataRequest*, uintptr_t))(Il2CppBase() + 0x129367C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(AdminLoadJsonDataRequest*))(Il2CppBase() + 0x1293758))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(AdminLoadJsonDataRequest*, uintptr_t))(Il2CppBase() + 0x1293838))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(AdminLoadJsonDataRequest*, uintptr_t))(Il2CppBase() + 0x1293870))(this, input);
	}

};

}
