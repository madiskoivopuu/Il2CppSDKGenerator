#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminUserAvailableProduct
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminUserAvailableProduct"));
	}

	 static MessageParser1<ProtoModels::AdminUserAvailableProduct*>*& _parser() {
		return *(MessageParser1<ProtoModels::AdminUserAvailableProduct*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IconFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& icon_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ProductFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ArenaUserAvailableProduct*> R& product_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::AdminUserAvailableProduct*>* get_Parser() {
		return ((MessageParser1<ProtoModels::AdminUserAvailableProduct*>* (*)(void *))(Il2CppBase() + 0x1296CA0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1296D04))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(AdminUserAvailableProduct*))(Il2CppBase() + 0x1296E24))(this);
	}
	template <typename R = ProtoModels::AdminUserAvailableProduct*> R Clone() {
		return ((R (*)(AdminUserAvailableProduct*))(Il2CppBase() + 0x1296F38))(this);
	}
	template <typename R = Il2CppString*> R get_Icon() {
		return ((R (*)(AdminUserAvailableProduct*))(Il2CppBase() + 0x1296F94))(this);
	}
	template <typename R = void> R set_Icon(Il2CppString* value) {
		return ((R (*)(AdminUserAvailableProduct*, Il2CppString*))(Il2CppBase() + 0x1296F9C))(this, value);
	}
	template <typename R = ProtoModels::ArenaUserAvailableProduct*> R get_Product() {
		return ((R (*)(AdminUserAvailableProduct*))(Il2CppBase() + 0x129701C))(this);
	}
	template <typename R = void> R set_Product(ProtoModels::ArenaUserAvailableProduct* value) {
		return ((R (*)(AdminUserAvailableProduct*, ProtoModels::ArenaUserAvailableProduct*))(Il2CppBase() + 0x1297024))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(AdminUserAvailableProduct*, Il2CppObject*))(Il2CppBase() + 0x129702C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::AdminUserAvailableProduct* other) {
		return ((R (*)(AdminUserAvailableProduct*, ProtoModels::AdminUserAvailableProduct*))(Il2CppBase() + 0x129709C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(AdminUserAvailableProduct*))(Il2CppBase() + 0x1297100))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(AdminUserAvailableProduct*))(Il2CppBase() + 0x1297164))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(AdminUserAvailableProduct*, uintptr_t))(Il2CppBase() + 0x12971C8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(AdminUserAvailableProduct*))(Il2CppBase() + 0x1297254))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::AdminUserAvailableProduct* other) {
		return ((R (*)(AdminUserAvailableProduct*, ProtoModels::AdminUserAvailableProduct*))(Il2CppBase() + 0x129731C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(AdminUserAvailableProduct*, uintptr_t))(Il2CppBase() + 0x12973E0))(this, input);
	}

};

}
