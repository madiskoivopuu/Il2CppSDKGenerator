#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaResetPersonalPoolRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaResetPersonalPoolRequest"));
	}

	template <typename T = MessageParser1ArenaResetPersonalPoolRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& StoreTypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& storeType_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& CategoryFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& category_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& CoinPriceFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& coinPrice_() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = MessageParser1ArenaResetPersonalPoolRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x270EB3C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x270EBA0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaResetPersonalPoolRequest*))(Il2CppBase() + 0x270ECC0))(this);
	}
	template <typename T = ArenaResetPersonalPoolRequest*> T Clone() {
		return ((T (*)(ArenaResetPersonalPoolRequest*))(Il2CppBase() + 0x270EDE8))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaResetPersonalPoolRequest*))(Il2CppBase() + 0x270EE44))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaResetPersonalPoolRequest*, int64_t))(Il2CppBase() + 0x270EE4C))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaResetPersonalPoolRequest*))(Il2CppBase() + 0x270EE54))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaResetPersonalPoolRequest*, int64_t))(Il2CppBase() + 0x270EE5C))(this, value);
	}
	template <typename T = Il2CppString*> T get_StoreType() {
		return ((T (*)(ArenaResetPersonalPoolRequest*))(Il2CppBase() + 0x270EE64))(this);
	}
	template <typename T = void> T set_StoreType(Il2CppString* value) {
		return ((T (*)(ArenaResetPersonalPoolRequest*, Il2CppString*))(Il2CppBase() + 0x270EE6C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Category() {
		return ((T (*)(ArenaResetPersonalPoolRequest*))(Il2CppBase() + 0x270EEEC))(this);
	}
	template <typename T = void> T set_Category(Il2CppString* value) {
		return ((T (*)(ArenaResetPersonalPoolRequest*, Il2CppString*))(Il2CppBase() + 0x270EEF4))(this, value);
	}
	template <typename T = int32_t> T get_CoinPrice() {
		return ((T (*)(ArenaResetPersonalPoolRequest*))(Il2CppBase() + 0x270EF74))(this);
	}
	template <typename T = void> T set_CoinPrice(int32_t value) {
		return ((T (*)(ArenaResetPersonalPoolRequest*, int32_t))(Il2CppBase() + 0x270EF7C))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaResetPersonalPoolRequest*, Il2CppObject*))(Il2CppBase() + 0x270EF84))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaResetPersonalPoolRequest* other) {
		return ((T (*)(ArenaResetPersonalPoolRequest*, ArenaResetPersonalPoolRequest*))(Il2CppBase() + 0x270EFF4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaResetPersonalPoolRequest*))(Il2CppBase() + 0x270F088))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaResetPersonalPoolRequest*))(Il2CppBase() + 0x270F158))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaResetPersonalPoolRequest*, uintptr_t))(Il2CppBase() + 0x270F1BC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaResetPersonalPoolRequest*))(Il2CppBase() + 0x270F2D4))(this);
	}
	template <typename T = void> T MergeFrom(ArenaResetPersonalPoolRequest* other) {
		return ((T (*)(ArenaResetPersonalPoolRequest*, ArenaResetPersonalPoolRequest*))(Il2CppBase() + 0x270F458))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaResetPersonalPoolRequest*, uintptr_t))(Il2CppBase() + 0x270F4D4))(this, input);
	}

};

}
