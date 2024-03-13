#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminUserAvailableProduct
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminUserAvailableProduct"));
	}

	template <typename T = MessageParser1AdminUserAvailableProduct*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IconFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& icon_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ProductFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ArenaUserAvailableProduct*> T& product_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1AdminUserAvailableProduct*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1296CA0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1296D04))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(AdminUserAvailableProduct*))(Il2CppBase() + 0x1296E24))(this);
	}
	template <typename T = AdminUserAvailableProduct*> T Clone() {
		return ((T (*)(AdminUserAvailableProduct*))(Il2CppBase() + 0x1296F38))(this);
	}
	template <typename T = Il2CppString*> T get_Icon() {
		return ((T (*)(AdminUserAvailableProduct*))(Il2CppBase() + 0x1296F94))(this);
	}
	template <typename T = void> T set_Icon(Il2CppString* value) {
		return ((T (*)(AdminUserAvailableProduct*, Il2CppString*))(Il2CppBase() + 0x1296F9C))(this, value);
	}
	template <typename T = ArenaUserAvailableProduct*> T get_Product() {
		return ((T (*)(AdminUserAvailableProduct*))(Il2CppBase() + 0x129701C))(this);
	}
	template <typename T = void> T set_Product(ArenaUserAvailableProduct* value) {
		return ((T (*)(AdminUserAvailableProduct*, ArenaUserAvailableProduct*))(Il2CppBase() + 0x1297024))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(AdminUserAvailableProduct*, Il2CppObject*))(Il2CppBase() + 0x129702C))(this, other);
	}
	template <typename T = bool> T Equals_1(AdminUserAvailableProduct* other) {
		return ((T (*)(AdminUserAvailableProduct*, AdminUserAvailableProduct*))(Il2CppBase() + 0x129709C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AdminUserAvailableProduct*))(Il2CppBase() + 0x1297100))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AdminUserAvailableProduct*))(Il2CppBase() + 0x1297164))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(AdminUserAvailableProduct*, uintptr_t))(Il2CppBase() + 0x12971C8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(AdminUserAvailableProduct*))(Il2CppBase() + 0x1297254))(this);
	}
	template <typename T = void> T MergeFrom(AdminUserAvailableProduct* other) {
		return ((T (*)(AdminUserAvailableProduct*, AdminUserAvailableProduct*))(Il2CppBase() + 0x129731C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(AdminUserAvailableProduct*, uintptr_t))(Il2CppBase() + 0x12973E0))(this, input);
	}

};

}
